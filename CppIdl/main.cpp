/*----------------------------------------------------------------------------*/
/* main.cpp                                                                   */
/* - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -*/
/* Desc
 *
 * Petr Sup
 * Created on 6
 *----------------------------------------------------------------------------*/

#include "DeclarationEmiter.h"

#include "parser/IDLLexer.h"
#include "parser/IDLParser.h"

#include <ANTLRInputStream.h>

#include <iostream>

std::string GetInput();

int main() {
  std::istringstream iss(GetInput());
  antlr4::ANTLRInputStream input(iss);
  idl::IDLLexer lexer(&input);
  antlr4::CommonTokenStream tokenStream(&lexer);

  idl::IDLParser parser(&tokenStream);

  DeclarationEmiter visitor;
  visitor.visitSpecification(parser.specification());

  return 0;
}

std::string GetInput() {
  using namespace std::literals;
  return R"==(
module org
{
    module dom
    {
        module status
        {
            enum AirportVisibilityEnum
            {
                NVO,
                LVO
            };

            enum AirportTaxiwayEnum
            {
                TWY_OPEN,
                TWY_CLOSED
            };

            enum AirportRunwayEnum
            {
                RWY_OPEN,
                RWY_CLOSED
            };

            enum DirectionEnum
            {
                DEPARTURE,
                ARRIVAL
            };

            struct DirectionStatusInfo
            {
                DirectionEnum direction;
                AirportRunwayEnum status;
            };

            typedef sequence<DirectionStatusInfo> DirectionStatusInfoSeq;

            struct ThresholdPointInfo
            {
                string name;  // @key
                DirectionStatusInfoSeq statuses;
            };

            typedef sequence<ThresholdPointInfo> ThresholdPointInfoSeq;

            // Topic=AirportVisibility
            struct AirportVisibility
            {
                AirportVisibilityEnum status;
            };

            // Topic=AirportRunway
            struct AirportRunway
            {
                string name; // @key
                ThresholdPointInfoSeq thrPoints;
            };

            // Topic=AirportTaxiway
            struct AirportTaxiway
            {
                string name; // @key
                AirportTaxiwayEnum status;
            };

            // Topic=SystemAreaStatus
            struct SystemAreaStatus
            {
                string name; // @key
                string type;
                boolean enabled;
                boolean permanent;
                long lastModified;
                long enabledSince;
                long enabledUntil;
            };
        };
    };
};
)=="s;
}
