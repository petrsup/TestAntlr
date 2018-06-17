
// Generated from IDL.g4 by ANTLR 4.7.1

#pragma once


#include "antlr4-runtime.h"
#include "IDLParser.h"


namespace idl {

/**
 * This class defines an abstract visitor for a parse tree
 * produced by IDLParser.
 */
class  IDLVisitor : public antlr4::tree::AbstractParseTreeVisitor {
public:

  /**
   * Visit parse trees produced by IDLParser.
   */
    virtual antlrcpp::Any visitSpecification(IDLParser::SpecificationContext *context) = 0;

    virtual antlrcpp::Any visitDefinition(IDLParser::DefinitionContext *context) = 0;

    virtual antlrcpp::Any visitModule(IDLParser::ModuleContext *context) = 0;

    virtual antlrcpp::Any visitInterface_or_forward_decl(IDLParser::Interface_or_forward_declContext *context) = 0;

    virtual antlrcpp::Any visitInterface_decl(IDLParser::Interface_declContext *context) = 0;

    virtual antlrcpp::Any visitForward_decl(IDLParser::Forward_declContext *context) = 0;

    virtual antlrcpp::Any visitInterface_header(IDLParser::Interface_headerContext *context) = 0;

    virtual antlrcpp::Any visitInterface_body(IDLParser::Interface_bodyContext *context) = 0;

    virtual antlrcpp::Any visitIdl_export(IDLParser::Idl_exportContext *context) = 0;

    virtual antlrcpp::Any visitInterface_inheritance_spec(IDLParser::Interface_inheritance_specContext *context) = 0;

    virtual antlrcpp::Any visitInterface_name(IDLParser::Interface_nameContext *context) = 0;

    virtual antlrcpp::Any visitScoped_name(IDLParser::Scoped_nameContext *context) = 0;

    virtual antlrcpp::Any visitValue(IDLParser::ValueContext *context) = 0;

    virtual antlrcpp::Any visitValue_forward_decl(IDLParser::Value_forward_declContext *context) = 0;

    virtual antlrcpp::Any visitValue_box_decl(IDLParser::Value_box_declContext *context) = 0;

    virtual antlrcpp::Any visitValue_abs_decl(IDLParser::Value_abs_declContext *context) = 0;

    virtual antlrcpp::Any visitValue_decl(IDLParser::Value_declContext *context) = 0;

    virtual antlrcpp::Any visitValue_header(IDLParser::Value_headerContext *context) = 0;

    virtual antlrcpp::Any visitValue_inheritance_spec(IDLParser::Value_inheritance_specContext *context) = 0;

    virtual antlrcpp::Any visitValue_name(IDLParser::Value_nameContext *context) = 0;

    virtual antlrcpp::Any visitValue_element(IDLParser::Value_elementContext *context) = 0;

    virtual antlrcpp::Any visitState_member(IDLParser::State_memberContext *context) = 0;

    virtual antlrcpp::Any visitInit_decl(IDLParser::Init_declContext *context) = 0;

    virtual antlrcpp::Any visitInit_param_decls(IDLParser::Init_param_declsContext *context) = 0;

    virtual antlrcpp::Any visitInit_param_decl(IDLParser::Init_param_declContext *context) = 0;

    virtual antlrcpp::Any visitInit_param_attribute(IDLParser::Init_param_attributeContext *context) = 0;

    virtual antlrcpp::Any visitConst_decl(IDLParser::Const_declContext *context) = 0;

    virtual antlrcpp::Any visitConst_type(IDLParser::Const_typeContext *context) = 0;

    virtual antlrcpp::Any visitConst_exp(IDLParser::Const_expContext *context) = 0;

    virtual antlrcpp::Any visitOr_expr(IDLParser::Or_exprContext *context) = 0;

    virtual antlrcpp::Any visitXor_expr(IDLParser::Xor_exprContext *context) = 0;

    virtual antlrcpp::Any visitAnd_expr(IDLParser::And_exprContext *context) = 0;

    virtual antlrcpp::Any visitShift_expr(IDLParser::Shift_exprContext *context) = 0;

    virtual antlrcpp::Any visitAdd_expr(IDLParser::Add_exprContext *context) = 0;

    virtual antlrcpp::Any visitMult_expr(IDLParser::Mult_exprContext *context) = 0;

    virtual antlrcpp::Any visitUnary_expr(IDLParser::Unary_exprContext *context) = 0;

    virtual antlrcpp::Any visitUnary_operator(IDLParser::Unary_operatorContext *context) = 0;

    virtual antlrcpp::Any visitPrimary_expr(IDLParser::Primary_exprContext *context) = 0;

    virtual antlrcpp::Any visitLiteral(IDLParser::LiteralContext *context) = 0;

    virtual antlrcpp::Any visitPositive_int_const(IDLParser::Positive_int_constContext *context) = 0;

    virtual antlrcpp::Any visitType_decl(IDLParser::Type_declContext *context) = 0;

    virtual antlrcpp::Any visitType_declarator(IDLParser::Type_declaratorContext *context) = 0;

    virtual antlrcpp::Any visitType_spec(IDLParser::Type_specContext *context) = 0;

    virtual antlrcpp::Any visitSimple_type_spec(IDLParser::Simple_type_specContext *context) = 0;

    virtual antlrcpp::Any visitBase_type_spec(IDLParser::Base_type_specContext *context) = 0;

    virtual antlrcpp::Any visitTemplate_type_spec(IDLParser::Template_type_specContext *context) = 0;

    virtual antlrcpp::Any visitConstr_type_spec(IDLParser::Constr_type_specContext *context) = 0;

    virtual antlrcpp::Any visitDeclarators(IDLParser::DeclaratorsContext *context) = 0;

    virtual antlrcpp::Any visitDeclarator(IDLParser::DeclaratorContext *context) = 0;

    virtual antlrcpp::Any visitSimple_declarator(IDLParser::Simple_declaratorContext *context) = 0;

    virtual antlrcpp::Any visitComplex_declarator(IDLParser::Complex_declaratorContext *context) = 0;

    virtual antlrcpp::Any visitFloating_pt_type(IDLParser::Floating_pt_typeContext *context) = 0;

    virtual antlrcpp::Any visitInteger_type(IDLParser::Integer_typeContext *context) = 0;

    virtual antlrcpp::Any visitSigned_int(IDLParser::Signed_intContext *context) = 0;

    virtual antlrcpp::Any visitSigned_short_int(IDLParser::Signed_short_intContext *context) = 0;

    virtual antlrcpp::Any visitSigned_long_int(IDLParser::Signed_long_intContext *context) = 0;

    virtual antlrcpp::Any visitSigned_longlong_int(IDLParser::Signed_longlong_intContext *context) = 0;

    virtual antlrcpp::Any visitUnsigned_int(IDLParser::Unsigned_intContext *context) = 0;

    virtual antlrcpp::Any visitUnsigned_short_int(IDLParser::Unsigned_short_intContext *context) = 0;

    virtual antlrcpp::Any visitUnsigned_long_int(IDLParser::Unsigned_long_intContext *context) = 0;

    virtual antlrcpp::Any visitUnsigned_longlong_int(IDLParser::Unsigned_longlong_intContext *context) = 0;

    virtual antlrcpp::Any visitChar_type(IDLParser::Char_typeContext *context) = 0;

    virtual antlrcpp::Any visitWide_char_type(IDLParser::Wide_char_typeContext *context) = 0;

    virtual antlrcpp::Any visitBoolean_type(IDLParser::Boolean_typeContext *context) = 0;

    virtual antlrcpp::Any visitOctet_type(IDLParser::Octet_typeContext *context) = 0;

    virtual antlrcpp::Any visitAny_type(IDLParser::Any_typeContext *context) = 0;

    virtual antlrcpp::Any visitObject_type(IDLParser::Object_typeContext *context) = 0;

    virtual antlrcpp::Any visitStruct_type(IDLParser::Struct_typeContext *context) = 0;

    virtual antlrcpp::Any visitMember_list(IDLParser::Member_listContext *context) = 0;

    virtual antlrcpp::Any visitMember(IDLParser::MemberContext *context) = 0;

    virtual antlrcpp::Any visitUnion_type(IDLParser::Union_typeContext *context) = 0;

    virtual antlrcpp::Any visitSwitch_type_spec(IDLParser::Switch_type_specContext *context) = 0;

    virtual antlrcpp::Any visitSwitch_body(IDLParser::Switch_bodyContext *context) = 0;

    virtual antlrcpp::Any visitCase_stmt(IDLParser::Case_stmtContext *context) = 0;

    virtual antlrcpp::Any visitCase_label(IDLParser::Case_labelContext *context) = 0;

    virtual antlrcpp::Any visitElement_spec(IDLParser::Element_specContext *context) = 0;

    virtual antlrcpp::Any visitEnum_type(IDLParser::Enum_typeContext *context) = 0;

    virtual antlrcpp::Any visitEnumerator(IDLParser::EnumeratorContext *context) = 0;

    virtual antlrcpp::Any visitSequence_type(IDLParser::Sequence_typeContext *context) = 0;

    virtual antlrcpp::Any visitString_type(IDLParser::String_typeContext *context) = 0;

    virtual antlrcpp::Any visitWide_string_type(IDLParser::Wide_string_typeContext *context) = 0;

    virtual antlrcpp::Any visitArray_declarator(IDLParser::Array_declaratorContext *context) = 0;

    virtual antlrcpp::Any visitFixed_array_size(IDLParser::Fixed_array_sizeContext *context) = 0;

    virtual antlrcpp::Any visitAttr_decl(IDLParser::Attr_declContext *context) = 0;

    virtual antlrcpp::Any visitExcept_decl(IDLParser::Except_declContext *context) = 0;

    virtual antlrcpp::Any visitOp_decl(IDLParser::Op_declContext *context) = 0;

    virtual antlrcpp::Any visitOp_attribute(IDLParser::Op_attributeContext *context) = 0;

    virtual antlrcpp::Any visitOp_type_spec(IDLParser::Op_type_specContext *context) = 0;

    virtual antlrcpp::Any visitParameter_decls(IDLParser::Parameter_declsContext *context) = 0;

    virtual antlrcpp::Any visitParam_decl(IDLParser::Param_declContext *context) = 0;

    virtual antlrcpp::Any visitParam_attribute(IDLParser::Param_attributeContext *context) = 0;

    virtual antlrcpp::Any visitRaises_expr(IDLParser::Raises_exprContext *context) = 0;

    virtual antlrcpp::Any visitContext_expr(IDLParser::Context_exprContext *context) = 0;

    virtual antlrcpp::Any visitParam_type_spec(IDLParser::Param_type_specContext *context) = 0;

    virtual antlrcpp::Any visitFixed_pt_type(IDLParser::Fixed_pt_typeContext *context) = 0;

    virtual antlrcpp::Any visitFixed_pt_const_type(IDLParser::Fixed_pt_const_typeContext *context) = 0;

    virtual antlrcpp::Any visitValue_base_type(IDLParser::Value_base_typeContext *context) = 0;

    virtual antlrcpp::Any visitConstr_forward_decl(IDLParser::Constr_forward_declContext *context) = 0;

    virtual antlrcpp::Any visitImport_decl(IDLParser::Import_declContext *context) = 0;

    virtual antlrcpp::Any visitImported_scope(IDLParser::Imported_scopeContext *context) = 0;

    virtual antlrcpp::Any visitType_id_decl(IDLParser::Type_id_declContext *context) = 0;

    virtual antlrcpp::Any visitType_prefix_decl(IDLParser::Type_prefix_declContext *context) = 0;

    virtual antlrcpp::Any visitReadonly_attr_spec(IDLParser::Readonly_attr_specContext *context) = 0;

    virtual antlrcpp::Any visitReadonly_attr_declarator(IDLParser::Readonly_attr_declaratorContext *context) = 0;

    virtual antlrcpp::Any visitAttr_spec(IDLParser::Attr_specContext *context) = 0;

    virtual antlrcpp::Any visitAttr_declarator(IDLParser::Attr_declaratorContext *context) = 0;

    virtual antlrcpp::Any visitAttr_raises_expr(IDLParser::Attr_raises_exprContext *context) = 0;

    virtual antlrcpp::Any visitGet_excep_expr(IDLParser::Get_excep_exprContext *context) = 0;

    virtual antlrcpp::Any visitSet_excep_expr(IDLParser::Set_excep_exprContext *context) = 0;

    virtual antlrcpp::Any visitException_list(IDLParser::Exception_listContext *context) = 0;

    virtual antlrcpp::Any visitComponent(IDLParser::ComponentContext *context) = 0;

    virtual antlrcpp::Any visitComponent_forward_decl(IDLParser::Component_forward_declContext *context) = 0;

    virtual antlrcpp::Any visitComponent_decl(IDLParser::Component_declContext *context) = 0;

    virtual antlrcpp::Any visitComponent_header(IDLParser::Component_headerContext *context) = 0;

    virtual antlrcpp::Any visitSupported_interface_spec(IDLParser::Supported_interface_specContext *context) = 0;

    virtual antlrcpp::Any visitComponent_inheritance_spec(IDLParser::Component_inheritance_specContext *context) = 0;

    virtual antlrcpp::Any visitComponent_body(IDLParser::Component_bodyContext *context) = 0;

    virtual antlrcpp::Any visitComponent_export(IDLParser::Component_exportContext *context) = 0;

    virtual antlrcpp::Any visitProvides_decl(IDLParser::Provides_declContext *context) = 0;

    virtual antlrcpp::Any visitInterface_type(IDLParser::Interface_typeContext *context) = 0;

    virtual antlrcpp::Any visitUses_decl(IDLParser::Uses_declContext *context) = 0;

    virtual antlrcpp::Any visitEmits_decl(IDLParser::Emits_declContext *context) = 0;

    virtual antlrcpp::Any visitPublishes_decl(IDLParser::Publishes_declContext *context) = 0;

    virtual antlrcpp::Any visitConsumes_decl(IDLParser::Consumes_declContext *context) = 0;

    virtual antlrcpp::Any visitHome_decl(IDLParser::Home_declContext *context) = 0;

    virtual antlrcpp::Any visitHome_header(IDLParser::Home_headerContext *context) = 0;

    virtual antlrcpp::Any visitHome_inheritance_spec(IDLParser::Home_inheritance_specContext *context) = 0;

    virtual antlrcpp::Any visitPrimary_key_spec(IDLParser::Primary_key_specContext *context) = 0;

    virtual antlrcpp::Any visitHome_body(IDLParser::Home_bodyContext *context) = 0;

    virtual antlrcpp::Any visitHome_export(IDLParser::Home_exportContext *context) = 0;

    virtual antlrcpp::Any visitFactory_decl(IDLParser::Factory_declContext *context) = 0;

    virtual antlrcpp::Any visitFinder_decl(IDLParser::Finder_declContext *context) = 0;

    virtual antlrcpp::Any visitEvent(IDLParser::EventContext *context) = 0;

    virtual antlrcpp::Any visitEvent_forward_decl(IDLParser::Event_forward_declContext *context) = 0;

    virtual antlrcpp::Any visitEvent_abs_decl(IDLParser::Event_abs_declContext *context) = 0;

    virtual antlrcpp::Any visitEvent_decl(IDLParser::Event_declContext *context) = 0;

    virtual antlrcpp::Any visitEvent_header(IDLParser::Event_headerContext *context) = 0;


};

}  // namespace idl
