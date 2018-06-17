
// Generated from IDL.g4 by ANTLR 4.7.1

#pragma once


#include "antlr4-runtime.h"


namespace idl {


class  IDLParser : public antlr4::Parser {
public:
  enum {
    INTEGER_LITERAL = 1, OCTAL_LITERAL = 2, HEX_LITERAL = 3, FLOATING_PT_LITERAL = 4, 
    FIXED_PT_LITERAL = 5, WIDE_CHARACTER_LITERAL = 6, CHARACTER_LITERAL = 7, 
    WIDE_STRING_LITERAL = 8, STRING_LITERAL = 9, BOOLEAN_LITERAL = 10, SEMICOLON = 11, 
    COLON = 12, COMA = 13, LEFT_BRACE = 14, RIGHT_BRACE = 15, LEFT_BRACKET = 16, 
    RIGHT_BRACKET = 17, LEFT_SQUARE_BRACKET = 18, RIGHT_SQUARE_BRACKET = 19, 
    TILDE = 20, SLASH = 21, LEFT_ANG_BRACKET = 22, RIGHT_ANG_BRACKET = 23, 
    STAR = 24, PLUS = 25, MINUS = 26, CARET = 27, AMPERSAND = 28, PIPE = 29, 
    EQUAL = 30, PERCENT = 31, DOUBLE_COLON = 32, RIGHT_SHIFT = 33, LEFT_SHIFT = 34, 
    KW_SETRAISES = 35, KW_OUT = 36, KW_EMITS = 37, KW_STRING = 38, KW_SWITCH = 39, 
    KW_PUBLISHES = 40, KW_TYPEDEF = 41, KW_USES = 42, KW_PRIMARYKEY = 43, 
    KW_CUSTOM = 44, KW_OCTET = 45, KW_SEQUENCE = 46, KW_IMPORT = 47, KW_STRUCT = 48, 
    KW_NATIVE = 49, KW_READONLY = 50, KW_FINDER = 51, KW_RAISES = 52, KW_VOID = 53, 
    KW_PRIVATE = 54, KW_EVENTTYPE = 55, KW_WCHAR = 56, KW_IN = 57, KW_DEFAULT = 58, 
    KW_PUBLIC = 59, KW_SHORT = 60, KW_LONG = 61, KW_ENUM = 62, KW_WSTRING = 63, 
    KW_CONTEXT = 64, KW_HOME = 65, KW_FACTORY = 66, KW_EXCEPTION = 67, KW_GETRAISES = 68, 
    KW_CONST = 69, KW_VALUEBASE = 70, KW_VALUETYPE = 71, KW_SUPPORTS = 72, 
    KW_MODULE = 73, KW_OBJECT = 74, KW_TRUNCATABLE = 75, KW_UNSIGNED = 76, 
    KW_FIXED = 77, KW_UNION = 78, KW_ONEWAY = 79, KW_ANY = 80, KW_CHAR = 81, 
    KW_CASE = 82, KW_FLOAT = 83, KW_BOOLEAN = 84, KW_MULTIPLE = 85, KW_ABSTRACT = 86, 
    KW_INOUT = 87, KW_PROVIDES = 88, KW_CONSUMES = 89, KW_DOUBLE = 90, KW_TYPEPREFIX = 91, 
    KW_TYPEID = 92, KW_ATTRIBUTE = 93, KW_LOCAL = 94, KW_MANAGES = 95, KW_INTERFACE = 96, 
    KW_COMPONENT = 97, ID = 98, WS = 99, COMMENT = 100, LINE_COMMENT = 101
  };

  enum {
    RuleSpecification = 0, RuleDefinition = 1, RuleModule = 2, RuleInterface_or_forward_decl = 3, 
    RuleInterface_decl = 4, RuleForward_decl = 5, RuleInterface_header = 6, 
    RuleInterface_body = 7, RuleIdl_export = 8, RuleInterface_inheritance_spec = 9, 
    RuleInterface_name = 10, RuleScoped_name = 11, RuleValue = 12, RuleValue_forward_decl = 13, 
    RuleValue_box_decl = 14, RuleValue_abs_decl = 15, RuleValue_decl = 16, 
    RuleValue_header = 17, RuleValue_inheritance_spec = 18, RuleValue_name = 19, 
    RuleValue_element = 20, RuleState_member = 21, RuleInit_decl = 22, RuleInit_param_decls = 23, 
    RuleInit_param_decl = 24, RuleInit_param_attribute = 25, RuleConst_decl = 26, 
    RuleConst_type = 27, RuleConst_exp = 28, RuleOr_expr = 29, RuleXor_expr = 30, 
    RuleAnd_expr = 31, RuleShift_expr = 32, RuleAdd_expr = 33, RuleMult_expr = 34, 
    RuleUnary_expr = 35, RuleUnary_operator = 36, RulePrimary_expr = 37, 
    RuleLiteral = 38, RulePositive_int_const = 39, RuleType_decl = 40, RuleType_declarator = 41, 
    RuleType_spec = 42, RuleSimple_type_spec = 43, RuleBase_type_spec = 44, 
    RuleTemplate_type_spec = 45, RuleConstr_type_spec = 46, RuleDeclarators = 47, 
    RuleDeclarator = 48, RuleSimple_declarator = 49, RuleComplex_declarator = 50, 
    RuleFloating_pt_type = 51, RuleInteger_type = 52, RuleSigned_int = 53, 
    RuleSigned_short_int = 54, RuleSigned_long_int = 55, RuleSigned_longlong_int = 56, 
    RuleUnsigned_int = 57, RuleUnsigned_short_int = 58, RuleUnsigned_long_int = 59, 
    RuleUnsigned_longlong_int = 60, RuleChar_type = 61, RuleWide_char_type = 62, 
    RuleBoolean_type = 63, RuleOctet_type = 64, RuleAny_type = 65, RuleObject_type = 66, 
    RuleStruct_type = 67, RuleMember_list = 68, RuleMember = 69, RuleUnion_type = 70, 
    RuleSwitch_type_spec = 71, RuleSwitch_body = 72, RuleCase_stmt = 73, 
    RuleCase_label = 74, RuleElement_spec = 75, RuleEnum_type = 76, RuleEnumerator = 77, 
    RuleSequence_type = 78, RuleString_type = 79, RuleWide_string_type = 80, 
    RuleArray_declarator = 81, RuleFixed_array_size = 82, RuleAttr_decl = 83, 
    RuleExcept_decl = 84, RuleOp_decl = 85, RuleOp_attribute = 86, RuleOp_type_spec = 87, 
    RuleParameter_decls = 88, RuleParam_decl = 89, RuleParam_attribute = 90, 
    RuleRaises_expr = 91, RuleContext_expr = 92, RuleParam_type_spec = 93, 
    RuleFixed_pt_type = 94, RuleFixed_pt_const_type = 95, RuleValue_base_type = 96, 
    RuleConstr_forward_decl = 97, RuleImport_decl = 98, RuleImported_scope = 99, 
    RuleType_id_decl = 100, RuleType_prefix_decl = 101, RuleReadonly_attr_spec = 102, 
    RuleReadonly_attr_declarator = 103, RuleAttr_spec = 104, RuleAttr_declarator = 105, 
    RuleAttr_raises_expr = 106, RuleGet_excep_expr = 107, RuleSet_excep_expr = 108, 
    RuleException_list = 109, RuleComponent = 110, RuleComponent_forward_decl = 111, 
    RuleComponent_decl = 112, RuleComponent_header = 113, RuleSupported_interface_spec = 114, 
    RuleComponent_inheritance_spec = 115, RuleComponent_body = 116, RuleComponent_export = 117, 
    RuleProvides_decl = 118, RuleInterface_type = 119, RuleUses_decl = 120, 
    RuleEmits_decl = 121, RulePublishes_decl = 122, RuleConsumes_decl = 123, 
    RuleHome_decl = 124, RuleHome_header = 125, RuleHome_inheritance_spec = 126, 
    RulePrimary_key_spec = 127, RuleHome_body = 128, RuleHome_export = 129, 
    RuleFactory_decl = 130, RuleFinder_decl = 131, RuleEvent = 132, RuleEvent_forward_decl = 133, 
    RuleEvent_abs_decl = 134, RuleEvent_decl = 135, RuleEvent_header = 136
  };

  IDLParser(antlr4::TokenStream *input);
  ~IDLParser();

  virtual std::string getGrammarFileName() const override;
  virtual const antlr4::atn::ATN& getATN() const override { return _atn; };
  virtual const std::vector<std::string>& getTokenNames() const override { return _tokenNames; }; // deprecated: use vocabulary instead.
  virtual const std::vector<std::string>& getRuleNames() const override;
  virtual antlr4::dfa::Vocabulary& getVocabulary() const override;


  class SpecificationContext;
  class DefinitionContext;
  class ModuleContext;
  class Interface_or_forward_declContext;
  class Interface_declContext;
  class Forward_declContext;
  class Interface_headerContext;
  class Interface_bodyContext;
  class Idl_exportContext;
  class Interface_inheritance_specContext;
  class Interface_nameContext;
  class Scoped_nameContext;
  class ValueContext;
  class Value_forward_declContext;
  class Value_box_declContext;
  class Value_abs_declContext;
  class Value_declContext;
  class Value_headerContext;
  class Value_inheritance_specContext;
  class Value_nameContext;
  class Value_elementContext;
  class State_memberContext;
  class Init_declContext;
  class Init_param_declsContext;
  class Init_param_declContext;
  class Init_param_attributeContext;
  class Const_declContext;
  class Const_typeContext;
  class Const_expContext;
  class Or_exprContext;
  class Xor_exprContext;
  class And_exprContext;
  class Shift_exprContext;
  class Add_exprContext;
  class Mult_exprContext;
  class Unary_exprContext;
  class Unary_operatorContext;
  class Primary_exprContext;
  class LiteralContext;
  class Positive_int_constContext;
  class Type_declContext;
  class Type_declaratorContext;
  class Type_specContext;
  class Simple_type_specContext;
  class Base_type_specContext;
  class Template_type_specContext;
  class Constr_type_specContext;
  class DeclaratorsContext;
  class DeclaratorContext;
  class Simple_declaratorContext;
  class Complex_declaratorContext;
  class Floating_pt_typeContext;
  class Integer_typeContext;
  class Signed_intContext;
  class Signed_short_intContext;
  class Signed_long_intContext;
  class Signed_longlong_intContext;
  class Unsigned_intContext;
  class Unsigned_short_intContext;
  class Unsigned_long_intContext;
  class Unsigned_longlong_intContext;
  class Char_typeContext;
  class Wide_char_typeContext;
  class Boolean_typeContext;
  class Octet_typeContext;
  class Any_typeContext;
  class Object_typeContext;
  class Struct_typeContext;
  class Member_listContext;
  class MemberContext;
  class Union_typeContext;
  class Switch_type_specContext;
  class Switch_bodyContext;
  class Case_stmtContext;
  class Case_labelContext;
  class Element_specContext;
  class Enum_typeContext;
  class EnumeratorContext;
  class Sequence_typeContext;
  class String_typeContext;
  class Wide_string_typeContext;
  class Array_declaratorContext;
  class Fixed_array_sizeContext;
  class Attr_declContext;
  class Except_declContext;
  class Op_declContext;
  class Op_attributeContext;
  class Op_type_specContext;
  class Parameter_declsContext;
  class Param_declContext;
  class Param_attributeContext;
  class Raises_exprContext;
  class Context_exprContext;
  class Param_type_specContext;
  class Fixed_pt_typeContext;
  class Fixed_pt_const_typeContext;
  class Value_base_typeContext;
  class Constr_forward_declContext;
  class Import_declContext;
  class Imported_scopeContext;
  class Type_id_declContext;
  class Type_prefix_declContext;
  class Readonly_attr_specContext;
  class Readonly_attr_declaratorContext;
  class Attr_specContext;
  class Attr_declaratorContext;
  class Attr_raises_exprContext;
  class Get_excep_exprContext;
  class Set_excep_exprContext;
  class Exception_listContext;
  class ComponentContext;
  class Component_forward_declContext;
  class Component_declContext;
  class Component_headerContext;
  class Supported_interface_specContext;
  class Component_inheritance_specContext;
  class Component_bodyContext;
  class Component_exportContext;
  class Provides_declContext;
  class Interface_typeContext;
  class Uses_declContext;
  class Emits_declContext;
  class Publishes_declContext;
  class Consumes_declContext;
  class Home_declContext;
  class Home_headerContext;
  class Home_inheritance_specContext;
  class Primary_key_specContext;
  class Home_bodyContext;
  class Home_exportContext;
  class Factory_declContext;
  class Finder_declContext;
  class EventContext;
  class Event_forward_declContext;
  class Event_abs_declContext;
  class Event_declContext;
  class Event_headerContext; 

  class  SpecificationContext : public antlr4::ParserRuleContext {
  public:
    SpecificationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Import_declContext *> import_decl();
    Import_declContext* import_decl(size_t i);
    std::vector<DefinitionContext *> definition();
    DefinitionContext* definition(size_t i);

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SpecificationContext* specification();

  class  DefinitionContext : public antlr4::ParserRuleContext {
  public:
    DefinitionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Type_declContext *type_decl();
    antlr4::tree::TerminalNode *SEMICOLON();
    Const_declContext *const_decl();
    Except_declContext *except_decl();
    Interface_or_forward_declContext *interface_or_forward_decl();
    ModuleContext *module();
    ValueContext *value();
    Type_id_declContext *type_id_decl();
    Type_prefix_declContext *type_prefix_decl();
    EventContext *event();
    ComponentContext *component();
    Home_declContext *home_decl();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DefinitionContext* definition();

  class  ModuleContext : public antlr4::ParserRuleContext {
  public:
    ModuleContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *KW_MODULE();
    antlr4::tree::TerminalNode *ID();
    antlr4::tree::TerminalNode *LEFT_BRACE();
    antlr4::tree::TerminalNode *RIGHT_BRACE();
    std::vector<DefinitionContext *> definition();
    DefinitionContext* definition(size_t i);

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ModuleContext* module();

  class  Interface_or_forward_declContext : public antlr4::ParserRuleContext {
  public:
    Interface_or_forward_declContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Interface_declContext *interface_decl();
    Forward_declContext *forward_decl();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Interface_or_forward_declContext* interface_or_forward_decl();

  class  Interface_declContext : public antlr4::ParserRuleContext {
  public:
    Interface_declContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Interface_headerContext *interface_header();
    antlr4::tree::TerminalNode *LEFT_BRACE();
    Interface_bodyContext *interface_body();
    antlr4::tree::TerminalNode *RIGHT_BRACE();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Interface_declContext* interface_decl();

  class  Forward_declContext : public antlr4::ParserRuleContext {
  public:
    Forward_declContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *KW_INTERFACE();
    antlr4::tree::TerminalNode *ID();
    antlr4::tree::TerminalNode *KW_ABSTRACT();
    antlr4::tree::TerminalNode *KW_LOCAL();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Forward_declContext* forward_decl();

  class  Interface_headerContext : public antlr4::ParserRuleContext {
  public:
    Interface_headerContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *KW_INTERFACE();
    antlr4::tree::TerminalNode *ID();
    Interface_inheritance_specContext *interface_inheritance_spec();
    antlr4::tree::TerminalNode *KW_ABSTRACT();
    antlr4::tree::TerminalNode *KW_LOCAL();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Interface_headerContext* interface_header();

  class  Interface_bodyContext : public antlr4::ParserRuleContext {
  public:
    Interface_bodyContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Idl_exportContext *> idl_export();
    Idl_exportContext* idl_export(size_t i);

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Interface_bodyContext* interface_body();

  class  Idl_exportContext : public antlr4::ParserRuleContext {
  public:
    Idl_exportContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Type_declContext *type_decl();
    antlr4::tree::TerminalNode *SEMICOLON();
    Const_declContext *const_decl();
    Except_declContext *except_decl();
    Attr_declContext *attr_decl();
    Op_declContext *op_decl();
    Type_id_declContext *type_id_decl();
    Type_prefix_declContext *type_prefix_decl();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Idl_exportContext* idl_export();

  class  Interface_inheritance_specContext : public antlr4::ParserRuleContext {
  public:
    Interface_inheritance_specContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *COLON();
    std::vector<Interface_nameContext *> interface_name();
    Interface_nameContext* interface_name(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMA();
    antlr4::tree::TerminalNode* COMA(size_t i);

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Interface_inheritance_specContext* interface_inheritance_spec();

  class  Interface_nameContext : public antlr4::ParserRuleContext {
  public:
    Interface_nameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Scoped_nameContext *scoped_name();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Interface_nameContext* interface_name();

  class  Scoped_nameContext : public antlr4::ParserRuleContext {
  public:
    Scoped_nameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> ID();
    antlr4::tree::TerminalNode* ID(size_t i);
    std::vector<antlr4::tree::TerminalNode *> DOUBLE_COLON();
    antlr4::tree::TerminalNode* DOUBLE_COLON(size_t i);

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Scoped_nameContext* scoped_name();

  class  ValueContext : public antlr4::ParserRuleContext {
  public:
    ValueContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Value_declContext *value_decl();
    Value_abs_declContext *value_abs_decl();
    Value_box_declContext *value_box_decl();
    Value_forward_declContext *value_forward_decl();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ValueContext* value();

  class  Value_forward_declContext : public antlr4::ParserRuleContext {
  public:
    Value_forward_declContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *KW_VALUETYPE();
    antlr4::tree::TerminalNode *ID();
    antlr4::tree::TerminalNode *KW_ABSTRACT();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Value_forward_declContext* value_forward_decl();

  class  Value_box_declContext : public antlr4::ParserRuleContext {
  public:
    Value_box_declContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *KW_VALUETYPE();
    antlr4::tree::TerminalNode *ID();
    Type_specContext *type_spec();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Value_box_declContext* value_box_decl();

  class  Value_abs_declContext : public antlr4::ParserRuleContext {
  public:
    Value_abs_declContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *KW_ABSTRACT();
    antlr4::tree::TerminalNode *KW_VALUETYPE();
    antlr4::tree::TerminalNode *ID();
    Value_inheritance_specContext *value_inheritance_spec();
    antlr4::tree::TerminalNode *LEFT_BRACE();
    antlr4::tree::TerminalNode *RIGHT_BRACE();
    std::vector<Idl_exportContext *> idl_export();
    Idl_exportContext* idl_export(size_t i);

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Value_abs_declContext* value_abs_decl();

  class  Value_declContext : public antlr4::ParserRuleContext {
  public:
    Value_declContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Value_headerContext *value_header();
    antlr4::tree::TerminalNode *LEFT_BRACE();
    antlr4::tree::TerminalNode *RIGHT_BRACE();
    std::vector<Value_elementContext *> value_element();
    Value_elementContext* value_element(size_t i);

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Value_declContext* value_decl();

  class  Value_headerContext : public antlr4::ParserRuleContext {
  public:
    Value_headerContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *KW_VALUETYPE();
    antlr4::tree::TerminalNode *ID();
    Value_inheritance_specContext *value_inheritance_spec();
    antlr4::tree::TerminalNode *KW_CUSTOM();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Value_headerContext* value_header();

  class  Value_inheritance_specContext : public antlr4::ParserRuleContext {
  public:
    Value_inheritance_specContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *COLON();
    std::vector<Value_nameContext *> value_name();
    Value_nameContext* value_name(size_t i);
    antlr4::tree::TerminalNode *KW_SUPPORTS();
    std::vector<Interface_nameContext *> interface_name();
    Interface_nameContext* interface_name(size_t i);
    antlr4::tree::TerminalNode *KW_TRUNCATABLE();
    std::vector<antlr4::tree::TerminalNode *> COMA();
    antlr4::tree::TerminalNode* COMA(size_t i);

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Value_inheritance_specContext* value_inheritance_spec();

  class  Value_nameContext : public antlr4::ParserRuleContext {
  public:
    Value_nameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Scoped_nameContext *scoped_name();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Value_nameContext* value_name();

  class  Value_elementContext : public antlr4::ParserRuleContext {
  public:
    Value_elementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Idl_exportContext *idl_export();
    State_memberContext *state_member();
    Init_declContext *init_decl();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Value_elementContext* value_element();

  class  State_memberContext : public antlr4::ParserRuleContext {
  public:
    State_memberContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Type_specContext *type_spec();
    DeclaratorsContext *declarators();
    antlr4::tree::TerminalNode *SEMICOLON();
    antlr4::tree::TerminalNode *KW_PUBLIC();
    antlr4::tree::TerminalNode *KW_PRIVATE();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  State_memberContext* state_member();

  class  Init_declContext : public antlr4::ParserRuleContext {
  public:
    Init_declContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *KW_FACTORY();
    antlr4::tree::TerminalNode *ID();
    antlr4::tree::TerminalNode *LEFT_BRACKET();
    antlr4::tree::TerminalNode *RIGHT_BRACKET();
    antlr4::tree::TerminalNode *SEMICOLON();
    Init_param_declsContext *init_param_decls();
    Raises_exprContext *raises_expr();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Init_declContext* init_decl();

  class  Init_param_declsContext : public antlr4::ParserRuleContext {
  public:
    Init_param_declsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Init_param_declContext *> init_param_decl();
    Init_param_declContext* init_param_decl(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMA();
    antlr4::tree::TerminalNode* COMA(size_t i);

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Init_param_declsContext* init_param_decls();

  class  Init_param_declContext : public antlr4::ParserRuleContext {
  public:
    Init_param_declContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Init_param_attributeContext *init_param_attribute();
    Param_type_specContext *param_type_spec();
    Simple_declaratorContext *simple_declarator();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Init_param_declContext* init_param_decl();

  class  Init_param_attributeContext : public antlr4::ParserRuleContext {
  public:
    Init_param_attributeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *KW_IN();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Init_param_attributeContext* init_param_attribute();

  class  Const_declContext : public antlr4::ParserRuleContext {
  public:
    Const_declContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *KW_CONST();
    Const_typeContext *const_type();
    antlr4::tree::TerminalNode *ID();
    antlr4::tree::TerminalNode *EQUAL();
    Const_expContext *const_exp();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Const_declContext* const_decl();

  class  Const_typeContext : public antlr4::ParserRuleContext {
  public:
    Const_typeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Integer_typeContext *integer_type();
    Char_typeContext *char_type();
    Wide_char_typeContext *wide_char_type();
    Boolean_typeContext *boolean_type();
    Floating_pt_typeContext *floating_pt_type();
    String_typeContext *string_type();
    Wide_string_typeContext *wide_string_type();
    Fixed_pt_const_typeContext *fixed_pt_const_type();
    Scoped_nameContext *scoped_name();
    Octet_typeContext *octet_type();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Const_typeContext* const_type();

  class  Const_expContext : public antlr4::ParserRuleContext {
  public:
    Const_expContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Or_exprContext *or_expr();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Const_expContext* const_exp();

  class  Or_exprContext : public antlr4::ParserRuleContext {
  public:
    Or_exprContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Xor_exprContext *> xor_expr();
    Xor_exprContext* xor_expr(size_t i);
    std::vector<antlr4::tree::TerminalNode *> PIPE();
    antlr4::tree::TerminalNode* PIPE(size_t i);

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Or_exprContext* or_expr();

  class  Xor_exprContext : public antlr4::ParserRuleContext {
  public:
    Xor_exprContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<And_exprContext *> and_expr();
    And_exprContext* and_expr(size_t i);
    std::vector<antlr4::tree::TerminalNode *> CARET();
    antlr4::tree::TerminalNode* CARET(size_t i);

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Xor_exprContext* xor_expr();

  class  And_exprContext : public antlr4::ParserRuleContext {
  public:
    And_exprContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Shift_exprContext *> shift_expr();
    Shift_exprContext* shift_expr(size_t i);
    std::vector<antlr4::tree::TerminalNode *> AMPERSAND();
    antlr4::tree::TerminalNode* AMPERSAND(size_t i);

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  And_exprContext* and_expr();

  class  Shift_exprContext : public antlr4::ParserRuleContext {
  public:
    Shift_exprContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Add_exprContext *> add_expr();
    Add_exprContext* add_expr(size_t i);
    std::vector<antlr4::tree::TerminalNode *> RIGHT_SHIFT();
    antlr4::tree::TerminalNode* RIGHT_SHIFT(size_t i);
    std::vector<antlr4::tree::TerminalNode *> LEFT_SHIFT();
    antlr4::tree::TerminalNode* LEFT_SHIFT(size_t i);

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Shift_exprContext* shift_expr();

  class  Add_exprContext : public antlr4::ParserRuleContext {
  public:
    Add_exprContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Mult_exprContext *> mult_expr();
    Mult_exprContext* mult_expr(size_t i);
    std::vector<antlr4::tree::TerminalNode *> PLUS();
    antlr4::tree::TerminalNode* PLUS(size_t i);
    std::vector<antlr4::tree::TerminalNode *> MINUS();
    antlr4::tree::TerminalNode* MINUS(size_t i);

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Add_exprContext* add_expr();

  class  Mult_exprContext : public antlr4::ParserRuleContext {
  public:
    Mult_exprContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Unary_exprContext *> unary_expr();
    Unary_exprContext* unary_expr(size_t i);
    std::vector<antlr4::tree::TerminalNode *> SLASH();
    antlr4::tree::TerminalNode* SLASH(size_t i);
    std::vector<antlr4::tree::TerminalNode *> PERCENT();
    antlr4::tree::TerminalNode* PERCENT(size_t i);

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Mult_exprContext* mult_expr();

  class  Unary_exprContext : public antlr4::ParserRuleContext {
  public:
    Unary_exprContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Unary_operatorContext *unary_operator();
    Primary_exprContext *primary_expr();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Unary_exprContext* unary_expr();

  class  Unary_operatorContext : public antlr4::ParserRuleContext {
  public:
    Unary_operatorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *MINUS();
    antlr4::tree::TerminalNode *PLUS();
    antlr4::tree::TerminalNode *TILDE();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Unary_operatorContext* unary_operator();

  class  Primary_exprContext : public antlr4::ParserRuleContext {
  public:
    Primary_exprContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Scoped_nameContext *scoped_name();
    LiteralContext *literal();
    antlr4::tree::TerminalNode *LEFT_BRACKET();
    Const_expContext *const_exp();
    antlr4::tree::TerminalNode *RIGHT_BRACKET();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Primary_exprContext* primary_expr();

  class  LiteralContext : public antlr4::ParserRuleContext {
  public:
    LiteralContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *HEX_LITERAL();
    antlr4::tree::TerminalNode *INTEGER_LITERAL();
    antlr4::tree::TerminalNode *STRING_LITERAL();
    antlr4::tree::TerminalNode *WIDE_STRING_LITERAL();
    antlr4::tree::TerminalNode *CHARACTER_LITERAL();
    antlr4::tree::TerminalNode *WIDE_CHARACTER_LITERAL();
    antlr4::tree::TerminalNode *FIXED_PT_LITERAL();
    antlr4::tree::TerminalNode *FLOATING_PT_LITERAL();
    antlr4::tree::TerminalNode *BOOLEAN_LITERAL();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  LiteralContext* literal();

  class  Positive_int_constContext : public antlr4::ParserRuleContext {
  public:
    Positive_int_constContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Const_expContext *const_exp();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Positive_int_constContext* positive_int_const();

  class  Type_declContext : public antlr4::ParserRuleContext {
  public:
    Type_declContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *KW_TYPEDEF();
    Type_declaratorContext *type_declarator();
    Struct_typeContext *struct_type();
    Union_typeContext *union_type();
    Enum_typeContext *enum_type();
    antlr4::tree::TerminalNode *KW_NATIVE();
    Simple_declaratorContext *simple_declarator();
    Constr_forward_declContext *constr_forward_decl();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Type_declContext* type_decl();

  class  Type_declaratorContext : public antlr4::ParserRuleContext {
  public:
    Type_declaratorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Type_specContext *type_spec();
    DeclaratorsContext *declarators();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Type_declaratorContext* type_declarator();

  class  Type_specContext : public antlr4::ParserRuleContext {
  public:
    Type_specContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Simple_type_specContext *simple_type_spec();
    Constr_type_specContext *constr_type_spec();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Type_specContext* type_spec();

  class  Simple_type_specContext : public antlr4::ParserRuleContext {
  public:
    Simple_type_specContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Base_type_specContext *base_type_spec();
    Template_type_specContext *template_type_spec();
    Scoped_nameContext *scoped_name();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Simple_type_specContext* simple_type_spec();

  class  Base_type_specContext : public antlr4::ParserRuleContext {
  public:
    Base_type_specContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Floating_pt_typeContext *floating_pt_type();
    Integer_typeContext *integer_type();
    Char_typeContext *char_type();
    Wide_char_typeContext *wide_char_type();
    Boolean_typeContext *boolean_type();
    Octet_typeContext *octet_type();
    Any_typeContext *any_type();
    Object_typeContext *object_type();
    Value_base_typeContext *value_base_type();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Base_type_specContext* base_type_spec();

  class  Template_type_specContext : public antlr4::ParserRuleContext {
  public:
    Template_type_specContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Sequence_typeContext *sequence_type();
    String_typeContext *string_type();
    Wide_string_typeContext *wide_string_type();
    Fixed_pt_typeContext *fixed_pt_type();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Template_type_specContext* template_type_spec();

  class  Constr_type_specContext : public antlr4::ParserRuleContext {
  public:
    Constr_type_specContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Struct_typeContext *struct_type();
    Union_typeContext *union_type();
    Enum_typeContext *enum_type();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Constr_type_specContext* constr_type_spec();

  class  DeclaratorsContext : public antlr4::ParserRuleContext {
  public:
    DeclaratorsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<DeclaratorContext *> declarator();
    DeclaratorContext* declarator(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMA();
    antlr4::tree::TerminalNode* COMA(size_t i);

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DeclaratorsContext* declarators();

  class  DeclaratorContext : public antlr4::ParserRuleContext {
  public:
    DeclaratorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Simple_declaratorContext *simple_declarator();
    Complex_declaratorContext *complex_declarator();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DeclaratorContext* declarator();

  class  Simple_declaratorContext : public antlr4::ParserRuleContext {
  public:
    Simple_declaratorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ID();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Simple_declaratorContext* simple_declarator();

  class  Complex_declaratorContext : public antlr4::ParserRuleContext {
  public:
    Complex_declaratorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Array_declaratorContext *array_declarator();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Complex_declaratorContext* complex_declarator();

  class  Floating_pt_typeContext : public antlr4::ParserRuleContext {
  public:
    Floating_pt_typeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *KW_FLOAT();
    antlr4::tree::TerminalNode *KW_DOUBLE();
    antlr4::tree::TerminalNode *KW_LONG();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Floating_pt_typeContext* floating_pt_type();

  class  Integer_typeContext : public antlr4::ParserRuleContext {
  public:
    Integer_typeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Signed_intContext *signed_int();
    Unsigned_intContext *unsigned_int();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Integer_typeContext* integer_type();

  class  Signed_intContext : public antlr4::ParserRuleContext {
  public:
    Signed_intContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Signed_short_intContext *signed_short_int();
    Signed_long_intContext *signed_long_int();
    Signed_longlong_intContext *signed_longlong_int();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Signed_intContext* signed_int();

  class  Signed_short_intContext : public antlr4::ParserRuleContext {
  public:
    Signed_short_intContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *KW_SHORT();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Signed_short_intContext* signed_short_int();

  class  Signed_long_intContext : public antlr4::ParserRuleContext {
  public:
    Signed_long_intContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *KW_LONG();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Signed_long_intContext* signed_long_int();

  class  Signed_longlong_intContext : public antlr4::ParserRuleContext {
  public:
    Signed_longlong_intContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> KW_LONG();
    antlr4::tree::TerminalNode* KW_LONG(size_t i);

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Signed_longlong_intContext* signed_longlong_int();

  class  Unsigned_intContext : public antlr4::ParserRuleContext {
  public:
    Unsigned_intContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Unsigned_short_intContext *unsigned_short_int();
    Unsigned_long_intContext *unsigned_long_int();
    Unsigned_longlong_intContext *unsigned_longlong_int();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Unsigned_intContext* unsigned_int();

  class  Unsigned_short_intContext : public antlr4::ParserRuleContext {
  public:
    Unsigned_short_intContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *KW_UNSIGNED();
    antlr4::tree::TerminalNode *KW_SHORT();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Unsigned_short_intContext* unsigned_short_int();

  class  Unsigned_long_intContext : public antlr4::ParserRuleContext {
  public:
    Unsigned_long_intContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *KW_UNSIGNED();
    antlr4::tree::TerminalNode *KW_LONG();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Unsigned_long_intContext* unsigned_long_int();

  class  Unsigned_longlong_intContext : public antlr4::ParserRuleContext {
  public:
    Unsigned_longlong_intContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *KW_UNSIGNED();
    std::vector<antlr4::tree::TerminalNode *> KW_LONG();
    antlr4::tree::TerminalNode* KW_LONG(size_t i);

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Unsigned_longlong_intContext* unsigned_longlong_int();

  class  Char_typeContext : public antlr4::ParserRuleContext {
  public:
    Char_typeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *KW_CHAR();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Char_typeContext* char_type();

  class  Wide_char_typeContext : public antlr4::ParserRuleContext {
  public:
    Wide_char_typeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *KW_WCHAR();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Wide_char_typeContext* wide_char_type();

  class  Boolean_typeContext : public antlr4::ParserRuleContext {
  public:
    Boolean_typeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *KW_BOOLEAN();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Boolean_typeContext* boolean_type();

  class  Octet_typeContext : public antlr4::ParserRuleContext {
  public:
    Octet_typeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *KW_OCTET();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Octet_typeContext* octet_type();

  class  Any_typeContext : public antlr4::ParserRuleContext {
  public:
    Any_typeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *KW_ANY();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Any_typeContext* any_type();

  class  Object_typeContext : public antlr4::ParserRuleContext {
  public:
    Object_typeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *KW_OBJECT();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Object_typeContext* object_type();

  class  Struct_typeContext : public antlr4::ParserRuleContext {
  public:
    Struct_typeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *KW_STRUCT();
    antlr4::tree::TerminalNode *ID();
    antlr4::tree::TerminalNode *LEFT_BRACE();
    Member_listContext *member_list();
    antlr4::tree::TerminalNode *RIGHT_BRACE();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Struct_typeContext* struct_type();

  class  Member_listContext : public antlr4::ParserRuleContext {
  public:
    Member_listContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<MemberContext *> member();
    MemberContext* member(size_t i);

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Member_listContext* member_list();

  class  MemberContext : public antlr4::ParserRuleContext {
  public:
    MemberContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Type_specContext *type_spec();
    DeclaratorsContext *declarators();
    antlr4::tree::TerminalNode *SEMICOLON();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  MemberContext* member();

  class  Union_typeContext : public antlr4::ParserRuleContext {
  public:
    Union_typeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *KW_UNION();
    antlr4::tree::TerminalNode *ID();
    antlr4::tree::TerminalNode *KW_SWITCH();
    antlr4::tree::TerminalNode *LEFT_BRACKET();
    Switch_type_specContext *switch_type_spec();
    antlr4::tree::TerminalNode *RIGHT_BRACKET();
    antlr4::tree::TerminalNode *LEFT_BRACE();
    Switch_bodyContext *switch_body();
    antlr4::tree::TerminalNode *RIGHT_BRACE();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Union_typeContext* union_type();

  class  Switch_type_specContext : public antlr4::ParserRuleContext {
  public:
    Switch_type_specContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Integer_typeContext *integer_type();
    Char_typeContext *char_type();
    Boolean_typeContext *boolean_type();
    Enum_typeContext *enum_type();
    Scoped_nameContext *scoped_name();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Switch_type_specContext* switch_type_spec();

  class  Switch_bodyContext : public antlr4::ParserRuleContext {
  public:
    Switch_bodyContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Case_stmtContext *> case_stmt();
    Case_stmtContext* case_stmt(size_t i);

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Switch_bodyContext* switch_body();

  class  Case_stmtContext : public antlr4::ParserRuleContext {
  public:
    Case_stmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Element_specContext *element_spec();
    antlr4::tree::TerminalNode *SEMICOLON();
    std::vector<Case_labelContext *> case_label();
    Case_labelContext* case_label(size_t i);

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Case_stmtContext* case_stmt();

  class  Case_labelContext : public antlr4::ParserRuleContext {
  public:
    Case_labelContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *KW_CASE();
    Const_expContext *const_exp();
    antlr4::tree::TerminalNode *COLON();
    antlr4::tree::TerminalNode *KW_DEFAULT();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Case_labelContext* case_label();

  class  Element_specContext : public antlr4::ParserRuleContext {
  public:
    Element_specContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Type_specContext *type_spec();
    DeclaratorContext *declarator();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Element_specContext* element_spec();

  class  Enum_typeContext : public antlr4::ParserRuleContext {
  public:
    Enum_typeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *KW_ENUM();
    antlr4::tree::TerminalNode *ID();
    antlr4::tree::TerminalNode *LEFT_BRACE();
    std::vector<EnumeratorContext *> enumerator();
    EnumeratorContext* enumerator(size_t i);
    antlr4::tree::TerminalNode *RIGHT_BRACE();
    std::vector<antlr4::tree::TerminalNode *> COMA();
    antlr4::tree::TerminalNode* COMA(size_t i);

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Enum_typeContext* enum_type();

  class  EnumeratorContext : public antlr4::ParserRuleContext {
  public:
    EnumeratorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ID();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  EnumeratorContext* enumerator();

  class  Sequence_typeContext : public antlr4::ParserRuleContext {
  public:
    Sequence_typeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *KW_SEQUENCE();
    antlr4::tree::TerminalNode *LEFT_ANG_BRACKET();
    Simple_type_specContext *simple_type_spec();
    antlr4::tree::TerminalNode *COMA();
    Positive_int_constContext *positive_int_const();
    antlr4::tree::TerminalNode *RIGHT_ANG_BRACKET();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Sequence_typeContext* sequence_type();

  class  String_typeContext : public antlr4::ParserRuleContext {
  public:
    String_typeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *KW_STRING();
    antlr4::tree::TerminalNode *LEFT_ANG_BRACKET();
    Positive_int_constContext *positive_int_const();
    antlr4::tree::TerminalNode *RIGHT_ANG_BRACKET();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  String_typeContext* string_type();

  class  Wide_string_typeContext : public antlr4::ParserRuleContext {
  public:
    Wide_string_typeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *KW_WSTRING();
    antlr4::tree::TerminalNode *LEFT_ANG_BRACKET();
    Positive_int_constContext *positive_int_const();
    antlr4::tree::TerminalNode *RIGHT_ANG_BRACKET();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Wide_string_typeContext* wide_string_type();

  class  Array_declaratorContext : public antlr4::ParserRuleContext {
  public:
    Array_declaratorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ID();
    std::vector<Fixed_array_sizeContext *> fixed_array_size();
    Fixed_array_sizeContext* fixed_array_size(size_t i);

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Array_declaratorContext* array_declarator();

  class  Fixed_array_sizeContext : public antlr4::ParserRuleContext {
  public:
    Fixed_array_sizeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LEFT_SQUARE_BRACKET();
    Positive_int_constContext *positive_int_const();
    antlr4::tree::TerminalNode *RIGHT_SQUARE_BRACKET();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Fixed_array_sizeContext* fixed_array_size();

  class  Attr_declContext : public antlr4::ParserRuleContext {
  public:
    Attr_declContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Readonly_attr_specContext *readonly_attr_spec();
    Attr_specContext *attr_spec();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Attr_declContext* attr_decl();

  class  Except_declContext : public antlr4::ParserRuleContext {
  public:
    Except_declContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *KW_EXCEPTION();
    antlr4::tree::TerminalNode *ID();
    antlr4::tree::TerminalNode *LEFT_BRACE();
    antlr4::tree::TerminalNode *RIGHT_BRACE();
    std::vector<MemberContext *> member();
    MemberContext* member(size_t i);

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Except_declContext* except_decl();

  class  Op_declContext : public antlr4::ParserRuleContext {
  public:
    Op_declContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Op_type_specContext *op_type_spec();
    antlr4::tree::TerminalNode *ID();
    Parameter_declsContext *parameter_decls();
    Op_attributeContext *op_attribute();
    Raises_exprContext *raises_expr();
    Context_exprContext *context_expr();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Op_declContext* op_decl();

  class  Op_attributeContext : public antlr4::ParserRuleContext {
  public:
    Op_attributeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *KW_ONEWAY();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Op_attributeContext* op_attribute();

  class  Op_type_specContext : public antlr4::ParserRuleContext {
  public:
    Op_type_specContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Param_type_specContext *param_type_spec();
    antlr4::tree::TerminalNode *KW_VOID();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Op_type_specContext* op_type_spec();

  class  Parameter_declsContext : public antlr4::ParserRuleContext {
  public:
    Parameter_declsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LEFT_BRACKET();
    std::vector<Param_declContext *> param_decl();
    Param_declContext* param_decl(size_t i);
    antlr4::tree::TerminalNode *RIGHT_BRACKET();
    std::vector<antlr4::tree::TerminalNode *> COMA();
    antlr4::tree::TerminalNode* COMA(size_t i);

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Parameter_declsContext* parameter_decls();

  class  Param_declContext : public antlr4::ParserRuleContext {
  public:
    Param_declContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Param_attributeContext *param_attribute();
    Param_type_specContext *param_type_spec();
    Simple_declaratorContext *simple_declarator();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Param_declContext* param_decl();

  class  Param_attributeContext : public antlr4::ParserRuleContext {
  public:
    Param_attributeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *KW_IN();
    antlr4::tree::TerminalNode *KW_OUT();
    antlr4::tree::TerminalNode *KW_INOUT();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Param_attributeContext* param_attribute();

  class  Raises_exprContext : public antlr4::ParserRuleContext {
  public:
    Raises_exprContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *KW_RAISES();
    antlr4::tree::TerminalNode *LEFT_BRACKET();
    std::vector<Scoped_nameContext *> scoped_name();
    Scoped_nameContext* scoped_name(size_t i);
    antlr4::tree::TerminalNode *RIGHT_BRACKET();
    std::vector<antlr4::tree::TerminalNode *> COMA();
    antlr4::tree::TerminalNode* COMA(size_t i);

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Raises_exprContext* raises_expr();

  class  Context_exprContext : public antlr4::ParserRuleContext {
  public:
    Context_exprContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *KW_CONTEXT();
    antlr4::tree::TerminalNode *LEFT_BRACKET();
    std::vector<antlr4::tree::TerminalNode *> STRING_LITERAL();
    antlr4::tree::TerminalNode* STRING_LITERAL(size_t i);
    antlr4::tree::TerminalNode *RIGHT_BRACKET();
    std::vector<antlr4::tree::TerminalNode *> COMA();
    antlr4::tree::TerminalNode* COMA(size_t i);

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Context_exprContext* context_expr();

  class  Param_type_specContext : public antlr4::ParserRuleContext {
  public:
    Param_type_specContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Base_type_specContext *base_type_spec();
    String_typeContext *string_type();
    Wide_string_typeContext *wide_string_type();
    Scoped_nameContext *scoped_name();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Param_type_specContext* param_type_spec();

  class  Fixed_pt_typeContext : public antlr4::ParserRuleContext {
  public:
    Fixed_pt_typeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *KW_FIXED();
    antlr4::tree::TerminalNode *LEFT_ANG_BRACKET();
    std::vector<Positive_int_constContext *> positive_int_const();
    Positive_int_constContext* positive_int_const(size_t i);
    antlr4::tree::TerminalNode *COMA();
    antlr4::tree::TerminalNode *RIGHT_ANG_BRACKET();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Fixed_pt_typeContext* fixed_pt_type();

  class  Fixed_pt_const_typeContext : public antlr4::ParserRuleContext {
  public:
    Fixed_pt_const_typeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *KW_FIXED();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Fixed_pt_const_typeContext* fixed_pt_const_type();

  class  Value_base_typeContext : public antlr4::ParserRuleContext {
  public:
    Value_base_typeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *KW_VALUEBASE();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Value_base_typeContext* value_base_type();

  class  Constr_forward_declContext : public antlr4::ParserRuleContext {
  public:
    Constr_forward_declContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *KW_STRUCT();
    antlr4::tree::TerminalNode *ID();
    antlr4::tree::TerminalNode *KW_UNION();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Constr_forward_declContext* constr_forward_decl();

  class  Import_declContext : public antlr4::ParserRuleContext {
  public:
    Import_declContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *KW_IMPORT();
    Imported_scopeContext *imported_scope();
    antlr4::tree::TerminalNode *SEMICOLON();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Import_declContext* import_decl();

  class  Imported_scopeContext : public antlr4::ParserRuleContext {
  public:
    Imported_scopeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Scoped_nameContext *scoped_name();
    antlr4::tree::TerminalNode *STRING_LITERAL();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Imported_scopeContext* imported_scope();

  class  Type_id_declContext : public antlr4::ParserRuleContext {
  public:
    Type_id_declContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *KW_TYPEID();
    Scoped_nameContext *scoped_name();
    antlr4::tree::TerminalNode *STRING_LITERAL();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Type_id_declContext* type_id_decl();

  class  Type_prefix_declContext : public antlr4::ParserRuleContext {
  public:
    Type_prefix_declContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *KW_TYPEPREFIX();
    Scoped_nameContext *scoped_name();
    antlr4::tree::TerminalNode *STRING_LITERAL();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Type_prefix_declContext* type_prefix_decl();

  class  Readonly_attr_specContext : public antlr4::ParserRuleContext {
  public:
    Readonly_attr_specContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *KW_READONLY();
    antlr4::tree::TerminalNode *KW_ATTRIBUTE();
    Param_type_specContext *param_type_spec();
    Readonly_attr_declaratorContext *readonly_attr_declarator();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Readonly_attr_specContext* readonly_attr_spec();

  class  Readonly_attr_declaratorContext : public antlr4::ParserRuleContext {
  public:
    Readonly_attr_declaratorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Simple_declaratorContext *> simple_declarator();
    Simple_declaratorContext* simple_declarator(size_t i);
    Raises_exprContext *raises_expr();
    std::vector<antlr4::tree::TerminalNode *> COMA();
    antlr4::tree::TerminalNode* COMA(size_t i);

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Readonly_attr_declaratorContext* readonly_attr_declarator();

  class  Attr_specContext : public antlr4::ParserRuleContext {
  public:
    Attr_specContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *KW_ATTRIBUTE();
    Param_type_specContext *param_type_spec();
    Attr_declaratorContext *attr_declarator();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Attr_specContext* attr_spec();

  class  Attr_declaratorContext : public antlr4::ParserRuleContext {
  public:
    Attr_declaratorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Simple_declaratorContext *> simple_declarator();
    Simple_declaratorContext* simple_declarator(size_t i);
    Attr_raises_exprContext *attr_raises_expr();
    std::vector<antlr4::tree::TerminalNode *> COMA();
    antlr4::tree::TerminalNode* COMA(size_t i);

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Attr_declaratorContext* attr_declarator();

  class  Attr_raises_exprContext : public antlr4::ParserRuleContext {
  public:
    Attr_raises_exprContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Get_excep_exprContext *get_excep_expr();
    Set_excep_exprContext *set_excep_expr();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Attr_raises_exprContext* attr_raises_expr();

  class  Get_excep_exprContext : public antlr4::ParserRuleContext {
  public:
    Get_excep_exprContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *KW_GETRAISES();
    Exception_listContext *exception_list();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Get_excep_exprContext* get_excep_expr();

  class  Set_excep_exprContext : public antlr4::ParserRuleContext {
  public:
    Set_excep_exprContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *KW_SETRAISES();
    Exception_listContext *exception_list();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Set_excep_exprContext* set_excep_expr();

  class  Exception_listContext : public antlr4::ParserRuleContext {
  public:
    Exception_listContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LEFT_BRACKET();
    std::vector<Scoped_nameContext *> scoped_name();
    Scoped_nameContext* scoped_name(size_t i);
    antlr4::tree::TerminalNode *RIGHT_BRACKET();
    std::vector<antlr4::tree::TerminalNode *> COMA();
    antlr4::tree::TerminalNode* COMA(size_t i);

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Exception_listContext* exception_list();

  class  ComponentContext : public antlr4::ParserRuleContext {
  public:
    ComponentContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Component_declContext *component_decl();
    Component_forward_declContext *component_forward_decl();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ComponentContext* component();

  class  Component_forward_declContext : public antlr4::ParserRuleContext {
  public:
    Component_forward_declContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *KW_COMPONENT();
    antlr4::tree::TerminalNode *ID();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Component_forward_declContext* component_forward_decl();

  class  Component_declContext : public antlr4::ParserRuleContext {
  public:
    Component_declContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Component_headerContext *component_header();
    antlr4::tree::TerminalNode *LEFT_BRACE();
    Component_bodyContext *component_body();
    antlr4::tree::TerminalNode *RIGHT_BRACE();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Component_declContext* component_decl();

  class  Component_headerContext : public antlr4::ParserRuleContext {
  public:
    Component_headerContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *KW_COMPONENT();
    antlr4::tree::TerminalNode *ID();
    Component_inheritance_specContext *component_inheritance_spec();
    Supported_interface_specContext *supported_interface_spec();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Component_headerContext* component_header();

  class  Supported_interface_specContext : public antlr4::ParserRuleContext {
  public:
    Supported_interface_specContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *KW_SUPPORTS();
    std::vector<Scoped_nameContext *> scoped_name();
    Scoped_nameContext* scoped_name(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMA();
    antlr4::tree::TerminalNode* COMA(size_t i);

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Supported_interface_specContext* supported_interface_spec();

  class  Component_inheritance_specContext : public antlr4::ParserRuleContext {
  public:
    Component_inheritance_specContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *COLON();
    Scoped_nameContext *scoped_name();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Component_inheritance_specContext* component_inheritance_spec();

  class  Component_bodyContext : public antlr4::ParserRuleContext {
  public:
    Component_bodyContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Component_exportContext *> component_export();
    Component_exportContext* component_export(size_t i);

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Component_bodyContext* component_body();

  class  Component_exportContext : public antlr4::ParserRuleContext {
  public:
    Component_exportContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Provides_declContext *provides_decl();
    antlr4::tree::TerminalNode *SEMICOLON();
    Uses_declContext *uses_decl();
    Emits_declContext *emits_decl();
    Publishes_declContext *publishes_decl();
    Consumes_declContext *consumes_decl();
    Attr_declContext *attr_decl();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Component_exportContext* component_export();

  class  Provides_declContext : public antlr4::ParserRuleContext {
  public:
    Provides_declContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *KW_PROVIDES();
    Interface_typeContext *interface_type();
    antlr4::tree::TerminalNode *ID();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Provides_declContext* provides_decl();

  class  Interface_typeContext : public antlr4::ParserRuleContext {
  public:
    Interface_typeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Scoped_nameContext *scoped_name();
    antlr4::tree::TerminalNode *KW_OBJECT();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Interface_typeContext* interface_type();

  class  Uses_declContext : public antlr4::ParserRuleContext {
  public:
    Uses_declContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *KW_USES();
    Interface_typeContext *interface_type();
    antlr4::tree::TerminalNode *ID();
    antlr4::tree::TerminalNode *KW_MULTIPLE();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Uses_declContext* uses_decl();

  class  Emits_declContext : public antlr4::ParserRuleContext {
  public:
    Emits_declContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *KW_EMITS();
    Scoped_nameContext *scoped_name();
    antlr4::tree::TerminalNode *ID();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Emits_declContext* emits_decl();

  class  Publishes_declContext : public antlr4::ParserRuleContext {
  public:
    Publishes_declContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *KW_PUBLISHES();
    Scoped_nameContext *scoped_name();
    antlr4::tree::TerminalNode *ID();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Publishes_declContext* publishes_decl();

  class  Consumes_declContext : public antlr4::ParserRuleContext {
  public:
    Consumes_declContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *KW_CONSUMES();
    Scoped_nameContext *scoped_name();
    antlr4::tree::TerminalNode *ID();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Consumes_declContext* consumes_decl();

  class  Home_declContext : public antlr4::ParserRuleContext {
  public:
    Home_declContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Home_headerContext *home_header();
    Home_bodyContext *home_body();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Home_declContext* home_decl();

  class  Home_headerContext : public antlr4::ParserRuleContext {
  public:
    Home_headerContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *KW_HOME();
    antlr4::tree::TerminalNode *ID();
    antlr4::tree::TerminalNode *KW_MANAGES();
    Scoped_nameContext *scoped_name();
    Home_inheritance_specContext *home_inheritance_spec();
    Supported_interface_specContext *supported_interface_spec();
    Primary_key_specContext *primary_key_spec();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Home_headerContext* home_header();

  class  Home_inheritance_specContext : public antlr4::ParserRuleContext {
  public:
    Home_inheritance_specContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *COLON();
    Scoped_nameContext *scoped_name();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Home_inheritance_specContext* home_inheritance_spec();

  class  Primary_key_specContext : public antlr4::ParserRuleContext {
  public:
    Primary_key_specContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *KW_PRIMARYKEY();
    Scoped_nameContext *scoped_name();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Primary_key_specContext* primary_key_spec();

  class  Home_bodyContext : public antlr4::ParserRuleContext {
  public:
    Home_bodyContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LEFT_BRACE();
    antlr4::tree::TerminalNode *RIGHT_BRACE();
    std::vector<Home_exportContext *> home_export();
    Home_exportContext* home_export(size_t i);

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Home_bodyContext* home_body();

  class  Home_exportContext : public antlr4::ParserRuleContext {
  public:
    Home_exportContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Idl_exportContext *idl_export();
    Factory_declContext *factory_decl();
    antlr4::tree::TerminalNode *SEMICOLON();
    Finder_declContext *finder_decl();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Home_exportContext* home_export();

  class  Factory_declContext : public antlr4::ParserRuleContext {
  public:
    Factory_declContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *KW_FACTORY();
    antlr4::tree::TerminalNode *ID();
    antlr4::tree::TerminalNode *LEFT_BRACKET();
    antlr4::tree::TerminalNode *RIGHT_BRACKET();
    Init_param_declsContext *init_param_decls();
    Raises_exprContext *raises_expr();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Factory_declContext* factory_decl();

  class  Finder_declContext : public antlr4::ParserRuleContext {
  public:
    Finder_declContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *KW_FINDER();
    antlr4::tree::TerminalNode *ID();
    antlr4::tree::TerminalNode *LEFT_BRACKET();
    antlr4::tree::TerminalNode *RIGHT_BRACKET();
    Init_param_declsContext *init_param_decls();
    Raises_exprContext *raises_expr();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Finder_declContext* finder_decl();

  class  EventContext : public antlr4::ParserRuleContext {
  public:
    EventContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Event_declContext *event_decl();
    Event_abs_declContext *event_abs_decl();
    Event_forward_declContext *event_forward_decl();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  EventContext* event();

  class  Event_forward_declContext : public antlr4::ParserRuleContext {
  public:
    Event_forward_declContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *KW_EVENTTYPE();
    antlr4::tree::TerminalNode *ID();
    antlr4::tree::TerminalNode *KW_ABSTRACT();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Event_forward_declContext* event_forward_decl();

  class  Event_abs_declContext : public antlr4::ParserRuleContext {
  public:
    Event_abs_declContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *KW_ABSTRACT();
    antlr4::tree::TerminalNode *KW_EVENTTYPE();
    antlr4::tree::TerminalNode *ID();
    Value_inheritance_specContext *value_inheritance_spec();
    antlr4::tree::TerminalNode *LEFT_BRACE();
    antlr4::tree::TerminalNode *RIGHT_BRACE();
    std::vector<Idl_exportContext *> idl_export();
    Idl_exportContext* idl_export(size_t i);

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Event_abs_declContext* event_abs_decl();

  class  Event_declContext : public antlr4::ParserRuleContext {
  public:
    Event_declContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Event_headerContext *event_header();
    antlr4::tree::TerminalNode *LEFT_BRACE();
    antlr4::tree::TerminalNode *RIGHT_BRACE();
    std::vector<Value_elementContext *> value_element();
    Value_elementContext* value_element(size_t i);

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Event_declContext* event_decl();

  class  Event_headerContext : public antlr4::ParserRuleContext {
  public:
    Event_headerContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *KW_EVENTTYPE();
    antlr4::tree::TerminalNode *ID();
    Value_inheritance_specContext *value_inheritance_spec();
    antlr4::tree::TerminalNode *KW_CUSTOM();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Event_headerContext* event_header();


private:
  static std::vector<antlr4::dfa::DFA> _decisionToDFA;
  static antlr4::atn::PredictionContextCache _sharedContextCache;
  static std::vector<std::string> _ruleNames;
  static std::vector<std::string> _tokenNames;

  static std::vector<std::string> _literalNames;
  static std::vector<std::string> _symbolicNames;
  static antlr4::dfa::Vocabulary _vocabulary;
  static antlr4::atn::ATN _atn;
  static std::vector<uint16_t> _serializedATN;


  struct Initializer {
    Initializer();
  };
  static Initializer _init;
};

}  // namespace idl
