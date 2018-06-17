
// Generated from IDL.g4 by ANTLR 4.7.1

#pragma once


#include "antlr4-runtime.h"
#include "IDLVisitor.h"


namespace idl {

/**
 * This class provides an empty implementation of IDLVisitor, which can be
 * extended to create a visitor which only needs to handle a subset of the available methods.
 */
class  IDLBaseVisitor : public IDLVisitor {
public:

  virtual antlrcpp::Any visitSpecification(IDLParser::SpecificationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDefinition(IDLParser::DefinitionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitModule(IDLParser::ModuleContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitInterface_or_forward_decl(IDLParser::Interface_or_forward_declContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitInterface_decl(IDLParser::Interface_declContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitForward_decl(IDLParser::Forward_declContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitInterface_header(IDLParser::Interface_headerContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitInterface_body(IDLParser::Interface_bodyContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitIdl_export(IDLParser::Idl_exportContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitInterface_inheritance_spec(IDLParser::Interface_inheritance_specContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitInterface_name(IDLParser::Interface_nameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitScoped_name(IDLParser::Scoped_nameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitValue(IDLParser::ValueContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitValue_forward_decl(IDLParser::Value_forward_declContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitValue_box_decl(IDLParser::Value_box_declContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitValue_abs_decl(IDLParser::Value_abs_declContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitValue_decl(IDLParser::Value_declContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitValue_header(IDLParser::Value_headerContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitValue_inheritance_spec(IDLParser::Value_inheritance_specContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitValue_name(IDLParser::Value_nameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitValue_element(IDLParser::Value_elementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitState_member(IDLParser::State_memberContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitInit_decl(IDLParser::Init_declContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitInit_param_decls(IDLParser::Init_param_declsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitInit_param_decl(IDLParser::Init_param_declContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitInit_param_attribute(IDLParser::Init_param_attributeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitConst_decl(IDLParser::Const_declContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitConst_type(IDLParser::Const_typeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitConst_exp(IDLParser::Const_expContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOr_expr(IDLParser::Or_exprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitXor_expr(IDLParser::Xor_exprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAnd_expr(IDLParser::And_exprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitShift_expr(IDLParser::Shift_exprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAdd_expr(IDLParser::Add_exprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitMult_expr(IDLParser::Mult_exprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitUnary_expr(IDLParser::Unary_exprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitUnary_operator(IDLParser::Unary_operatorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPrimary_expr(IDLParser::Primary_exprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitLiteral(IDLParser::LiteralContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPositive_int_const(IDLParser::Positive_int_constContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitType_decl(IDLParser::Type_declContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitType_declarator(IDLParser::Type_declaratorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitType_spec(IDLParser::Type_specContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSimple_type_spec(IDLParser::Simple_type_specContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitBase_type_spec(IDLParser::Base_type_specContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTemplate_type_spec(IDLParser::Template_type_specContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitConstr_type_spec(IDLParser::Constr_type_specContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDeclarators(IDLParser::DeclaratorsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDeclarator(IDLParser::DeclaratorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSimple_declarator(IDLParser::Simple_declaratorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitComplex_declarator(IDLParser::Complex_declaratorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFloating_pt_type(IDLParser::Floating_pt_typeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitInteger_type(IDLParser::Integer_typeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSigned_int(IDLParser::Signed_intContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSigned_short_int(IDLParser::Signed_short_intContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSigned_long_int(IDLParser::Signed_long_intContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSigned_longlong_int(IDLParser::Signed_longlong_intContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitUnsigned_int(IDLParser::Unsigned_intContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitUnsigned_short_int(IDLParser::Unsigned_short_intContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitUnsigned_long_int(IDLParser::Unsigned_long_intContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitUnsigned_longlong_int(IDLParser::Unsigned_longlong_intContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitChar_type(IDLParser::Char_typeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitWide_char_type(IDLParser::Wide_char_typeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitBoolean_type(IDLParser::Boolean_typeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOctet_type(IDLParser::Octet_typeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAny_type(IDLParser::Any_typeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitObject_type(IDLParser::Object_typeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitStruct_type(IDLParser::Struct_typeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitMember_list(IDLParser::Member_listContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitMember(IDLParser::MemberContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitUnion_type(IDLParser::Union_typeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSwitch_type_spec(IDLParser::Switch_type_specContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSwitch_body(IDLParser::Switch_bodyContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCase_stmt(IDLParser::Case_stmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCase_label(IDLParser::Case_labelContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitElement_spec(IDLParser::Element_specContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitEnum_type(IDLParser::Enum_typeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitEnumerator(IDLParser::EnumeratorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSequence_type(IDLParser::Sequence_typeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitString_type(IDLParser::String_typeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitWide_string_type(IDLParser::Wide_string_typeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitArray_declarator(IDLParser::Array_declaratorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFixed_array_size(IDLParser::Fixed_array_sizeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAttr_decl(IDLParser::Attr_declContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitExcept_decl(IDLParser::Except_declContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOp_decl(IDLParser::Op_declContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOp_attribute(IDLParser::Op_attributeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOp_type_spec(IDLParser::Op_type_specContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitParameter_decls(IDLParser::Parameter_declsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitParam_decl(IDLParser::Param_declContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitParam_attribute(IDLParser::Param_attributeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitRaises_expr(IDLParser::Raises_exprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitContext_expr(IDLParser::Context_exprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitParam_type_spec(IDLParser::Param_type_specContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFixed_pt_type(IDLParser::Fixed_pt_typeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFixed_pt_const_type(IDLParser::Fixed_pt_const_typeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitValue_base_type(IDLParser::Value_base_typeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitConstr_forward_decl(IDLParser::Constr_forward_declContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitImport_decl(IDLParser::Import_declContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitImported_scope(IDLParser::Imported_scopeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitType_id_decl(IDLParser::Type_id_declContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitType_prefix_decl(IDLParser::Type_prefix_declContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitReadonly_attr_spec(IDLParser::Readonly_attr_specContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitReadonly_attr_declarator(IDLParser::Readonly_attr_declaratorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAttr_spec(IDLParser::Attr_specContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAttr_declarator(IDLParser::Attr_declaratorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAttr_raises_expr(IDLParser::Attr_raises_exprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitGet_excep_expr(IDLParser::Get_excep_exprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSet_excep_expr(IDLParser::Set_excep_exprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitException_list(IDLParser::Exception_listContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitComponent(IDLParser::ComponentContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitComponent_forward_decl(IDLParser::Component_forward_declContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitComponent_decl(IDLParser::Component_declContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitComponent_header(IDLParser::Component_headerContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSupported_interface_spec(IDLParser::Supported_interface_specContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitComponent_inheritance_spec(IDLParser::Component_inheritance_specContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitComponent_body(IDLParser::Component_bodyContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitComponent_export(IDLParser::Component_exportContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitProvides_decl(IDLParser::Provides_declContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitInterface_type(IDLParser::Interface_typeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitUses_decl(IDLParser::Uses_declContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitEmits_decl(IDLParser::Emits_declContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPublishes_decl(IDLParser::Publishes_declContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitConsumes_decl(IDLParser::Consumes_declContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitHome_decl(IDLParser::Home_declContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitHome_header(IDLParser::Home_headerContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitHome_inheritance_spec(IDLParser::Home_inheritance_specContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPrimary_key_spec(IDLParser::Primary_key_specContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitHome_body(IDLParser::Home_bodyContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitHome_export(IDLParser::Home_exportContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFactory_decl(IDLParser::Factory_declContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFinder_decl(IDLParser::Finder_declContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitEvent(IDLParser::EventContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitEvent_forward_decl(IDLParser::Event_forward_declContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitEvent_abs_decl(IDLParser::Event_abs_declContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitEvent_decl(IDLParser::Event_declContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitEvent_header(IDLParser::Event_headerContext *ctx) override {
    return visitChildren(ctx);
  }


};

}  // namespace idl
