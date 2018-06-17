/*----------------------------------------------------------------------------*/
/* DeclarationEmiter.h                                          */
/* - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -*/
/* Desc
 *
 * Petr Sup
 * Created on 6
 *----------------------------------------------------------------------------*/

#ifndef DECLARATIONEMITER_H
#define DECLARATIONEMITER_H

#include "parser/IDLBaseVisitor.h"

class DeclarationEmiter : public idl::IDLBaseVisitor {
public:
  antlrcpp::Any
  visitDefinition(idl::IDLParser::DefinitionContext *context) override;

  antlrcpp::Any visitModule(idl::IDLParser::ModuleContext *context) override;

  antlrcpp::Any
  visitStruct_type(idl::IDLParser::Struct_typeContext *context) override;

  antlrcpp::Any
  visitEnum_type(idl::IDLParser::Enum_typeContext *context) override;

  antlrcpp::Any visitMember(idl::IDLParser::MemberContext *context) override;

  antlrcpp::Any
  visitScoped_name(idl::IDLParser::Scoped_nameContext *context) override;

  antlrcpp::Any
  visitSequence_type(idl::IDLParser::Sequence_typeContext *context) override;

  antlrcpp::Any
  visitString_type(idl::IDLParser::String_typeContext *context) override;

  antlrcpp::Any visitFloating_pt_type(
      idl::IDLParser::Floating_pt_typeContext *context) override;

  antlrcpp::Any
  visitInteger_type(idl::IDLParser::Integer_typeContext *context) override;

  antlrcpp::Any
  visitChar_type(idl::IDLParser::Char_typeContext *context) override;

  antlrcpp::Any
  visitBoolean_type(idl::IDLParser::Boolean_typeContext *context) override;

  antlrcpp::Any
  visitOctet_type(idl::IDLParser::Octet_typeContext *context) override;

  antlrcpp::Any
  visitDeclarators(idl::IDLParser::DeclaratorsContext *context) override;

  antlrcpp::Any visitType_declarator(
      idl::IDLParser::Type_declaratorContext *context) override;
};

#endif // DECLARATIONEMITER_H
