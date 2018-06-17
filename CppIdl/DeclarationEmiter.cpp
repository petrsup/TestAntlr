/*----------------------------------------------------------------------------*/
/* DeclarationEmiter.cpp                                          */
/* - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -*/
/* Desc
 *
 * Petr Sup
 * Created on 6
 *----------------------------------------------------------------------------*/

#include "DeclarationEmiter.h"

// -----------------------------------------------------------------------------
antlrcpp::Any
DeclarationEmiter::visitDefinition(idl::IDLParser::DefinitionContext *context) {
  const auto r = visitChildren(context);
  if (!context->module())
    std::cout << '\n';
  return r;
}

// -----------------------------------------------------------------------------
antlrcpp::Any
DeclarationEmiter::visitModule(idl::IDLParser::ModuleContext *context) {
  std::cout << "namespace " << context->ID()->getText() << " {\n";
  const auto r = visitChildren(context);
  std::cout << "}\n";

  return r;
}

// -----------------------------------------------------------------------------
antlrcpp::Any DeclarationEmiter::visitStruct_type(
    idl::IDLParser::Struct_typeContext *context) {
  std::cout << "struct " << context->ID()->getText() << " {\n";
  const auto r = visitChildren(context);
  std::cout << "};\n";

  return r;
}

// -----------------------------------------------------------------------------
antlrcpp::Any
DeclarationEmiter::visitEnum_type(idl::IDLParser::Enum_typeContext *context) {
  std::cout << "enum class " << context->ID()->getText() << " {\n";

  const auto &enumerator = context->enumerator();
  for (auto i = enumerator.begin(); i != enumerator.end(); ++i) {
    if (i != enumerator.begin())
      std::cout << ",\n";
    std::cout << (*i)->ID()->getText();
  }
  std::cout << "\n};\n";

  return {};
}

// -----------------------------------------------------------------------------
antlrcpp::Any
DeclarationEmiter::visitMember(idl::IDLParser::MemberContext *context) {
  const auto r = visitChildren(context);
  std::cout << ";\n";
  return r;
}

// -----------------------------------------------------------------------------
antlrcpp::Any DeclarationEmiter::visitScoped_name(
    idl::IDLParser::Scoped_nameContext *context) {
  std::cout << context->getText();
  return visitChildren(context);
}

// -----------------------------------------------------------------------------
antlrcpp::Any DeclarationEmiter::visitSequence_type(
    idl::IDLParser::Sequence_typeContext *context) {
  std::cout << "std::vector<";
  const auto r = visitChildren(context);
  std::cout << ">";
  return r;
}

// -----------------------------------------------------------------------------
antlrcpp::Any DeclarationEmiter::visitString_type(
    idl::IDLParser::String_typeContext *context) {
  std::cout << "std::string";
  return visitChildren(context);
}

// -----------------------------------------------------------------------------
antlrcpp::Any DeclarationEmiter::visitFloating_pt_type(
    idl::IDLParser::Floating_pt_typeContext *context) {
  std::cout << context->getText();

  return visitChildren(context);
}

// -----------------------------------------------------------------------------
antlrcpp::Any DeclarationEmiter::visitInteger_type(
    idl::IDLParser::Integer_typeContext *context) {
  std::cout << context->getText();

  return visitChildren(context);
}

// -----------------------------------------------------------------------------
antlrcpp::Any
DeclarationEmiter::visitChar_type(idl::IDLParser::Char_typeContext *context) {
  std::cout << context->getText();
  return visitChildren(context);
}

// -----------------------------------------------------------------------------
antlrcpp::Any DeclarationEmiter::visitBoolean_type(
    idl::IDLParser::Boolean_typeContext *context) {
  std::cout << "bool";
  return visitChildren(context);
}

// -----------------------------------------------------------------------------
antlrcpp::Any
DeclarationEmiter::visitOctet_type(idl::IDLParser::Octet_typeContext *context) {
  std::cout << context->getText();
  return visitChildren(context);
}

// -----------------------------------------------------------------------------
antlrcpp::Any DeclarationEmiter::visitDeclarators(
    idl::IDLParser::DeclaratorsContext *context) {
  std::cout << ' ';
  const auto &declarator = context->declarator();
  for (auto i = declarator.begin(); i != declarator.end(); ++i) {
    if (i != declarator.begin())
      std::cout << ", ";
    std::cout << (*i)->getText();
  }
  return visitChildren(context);
}

// -----------------------------------------------------------------------------
antlrcpp::Any DeclarationEmiter::visitType_declarator(
    idl::IDLParser::Type_declaratorContext *context) {
  std::cout << "typedef ";
  const auto r = visitChildren(context);
  std::cout << ";\n";
  return r;
}
