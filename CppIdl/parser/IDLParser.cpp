
// Generated from IDL.g4 by ANTLR 4.7.1


#include "IDLVisitor.h"

#include "IDLParser.h"


using namespace antlrcpp;
using namespace idl;
using namespace antlr4;

IDLParser::IDLParser(TokenStream *input) : Parser(input) {
  _interpreter = new atn::ParserATNSimulator(this, _atn, _decisionToDFA, _sharedContextCache);
}

IDLParser::~IDLParser() {
  delete _interpreter;
}

std::string IDLParser::getGrammarFileName() const {
  return "IDL.g4";
}

const std::vector<std::string>& IDLParser::getRuleNames() const {
  return _ruleNames;
}

dfa::Vocabulary& IDLParser::getVocabulary() const {
  return _vocabulary;
}


//----------------- SpecificationContext ------------------------------------------------------------------

IDLParser::SpecificationContext::SpecificationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<IDLParser::Import_declContext *> IDLParser::SpecificationContext::import_decl() {
  return getRuleContexts<IDLParser::Import_declContext>();
}

IDLParser::Import_declContext* IDLParser::SpecificationContext::import_decl(size_t i) {
  return getRuleContext<IDLParser::Import_declContext>(i);
}

std::vector<IDLParser::DefinitionContext *> IDLParser::SpecificationContext::definition() {
  return getRuleContexts<IDLParser::DefinitionContext>();
}

IDLParser::DefinitionContext* IDLParser::SpecificationContext::definition(size_t i) {
  return getRuleContext<IDLParser::DefinitionContext>(i);
}


size_t IDLParser::SpecificationContext::getRuleIndex() const {
  return IDLParser::RuleSpecification;
}

antlrcpp::Any IDLParser::SpecificationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<IDLVisitor*>(visitor))
    return parserVisitor->visitSpecification(this);
  else
    return visitor->visitChildren(this);
}

IDLParser::SpecificationContext* IDLParser::specification() {
  SpecificationContext *_localctx = _tracker.createInstance<SpecificationContext>(_ctx, getState());
  enterRule(_localctx, 0, IDLParser::RuleSpecification);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(277);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == IDLParser::KW_IMPORT) {
      setState(274);
      import_decl();
      setState(279);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(281); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(280);
      definition();
      setState(283); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while (((((_la - 41) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 41)) & ((1ULL << (IDLParser::KW_TYPEDEF - 41))
      | (1ULL << (IDLParser::KW_CUSTOM - 41))
      | (1ULL << (IDLParser::KW_STRUCT - 41))
      | (1ULL << (IDLParser::KW_NATIVE - 41))
      | (1ULL << (IDLParser::KW_EVENTTYPE - 41))
      | (1ULL << (IDLParser::KW_ENUM - 41))
      | (1ULL << (IDLParser::KW_HOME - 41))
      | (1ULL << (IDLParser::KW_EXCEPTION - 41))
      | (1ULL << (IDLParser::KW_CONST - 41))
      | (1ULL << (IDLParser::KW_VALUETYPE - 41))
      | (1ULL << (IDLParser::KW_MODULE - 41))
      | (1ULL << (IDLParser::KW_UNION - 41))
      | (1ULL << (IDLParser::KW_ABSTRACT - 41))
      | (1ULL << (IDLParser::KW_TYPEPREFIX - 41))
      | (1ULL << (IDLParser::KW_TYPEID - 41))
      | (1ULL << (IDLParser::KW_LOCAL - 41))
      | (1ULL << (IDLParser::KW_INTERFACE - 41))
      | (1ULL << (IDLParser::KW_COMPONENT - 41)))) != 0));
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DefinitionContext ------------------------------------------------------------------

IDLParser::DefinitionContext::DefinitionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

IDLParser::Type_declContext* IDLParser::DefinitionContext::type_decl() {
  return getRuleContext<IDLParser::Type_declContext>(0);
}

tree::TerminalNode* IDLParser::DefinitionContext::SEMICOLON() {
  return getToken(IDLParser::SEMICOLON, 0);
}

IDLParser::Const_declContext* IDLParser::DefinitionContext::const_decl() {
  return getRuleContext<IDLParser::Const_declContext>(0);
}

IDLParser::Except_declContext* IDLParser::DefinitionContext::except_decl() {
  return getRuleContext<IDLParser::Except_declContext>(0);
}

IDLParser::Interface_or_forward_declContext* IDLParser::DefinitionContext::interface_or_forward_decl() {
  return getRuleContext<IDLParser::Interface_or_forward_declContext>(0);
}

IDLParser::ModuleContext* IDLParser::DefinitionContext::module() {
  return getRuleContext<IDLParser::ModuleContext>(0);
}

IDLParser::ValueContext* IDLParser::DefinitionContext::value() {
  return getRuleContext<IDLParser::ValueContext>(0);
}

IDLParser::Type_id_declContext* IDLParser::DefinitionContext::type_id_decl() {
  return getRuleContext<IDLParser::Type_id_declContext>(0);
}

IDLParser::Type_prefix_declContext* IDLParser::DefinitionContext::type_prefix_decl() {
  return getRuleContext<IDLParser::Type_prefix_declContext>(0);
}

IDLParser::EventContext* IDLParser::DefinitionContext::event() {
  return getRuleContext<IDLParser::EventContext>(0);
}

IDLParser::ComponentContext* IDLParser::DefinitionContext::component() {
  return getRuleContext<IDLParser::ComponentContext>(0);
}

IDLParser::Home_declContext* IDLParser::DefinitionContext::home_decl() {
  return getRuleContext<IDLParser::Home_declContext>(0);
}


size_t IDLParser::DefinitionContext::getRuleIndex() const {
  return IDLParser::RuleDefinition;
}

antlrcpp::Any IDLParser::DefinitionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<IDLVisitor*>(visitor))
    return parserVisitor->visitDefinition(this);
  else
    return visitor->visitChildren(this);
}

IDLParser::DefinitionContext* IDLParser::definition() {
  DefinitionContext *_localctx = _tracker.createInstance<DefinitionContext>(_ctx, getState());
  enterRule(_localctx, 2, IDLParser::RuleDefinition);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(318);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 2, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(285);
      type_decl();
      setState(286);
      match(IDLParser::SEMICOLON);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(288);
      const_decl();
      setState(289);
      match(IDLParser::SEMICOLON);
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(291);
      except_decl();
      setState(292);
      match(IDLParser::SEMICOLON);
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(294);
      interface_or_forward_decl();
      setState(295);
      match(IDLParser::SEMICOLON);
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(297);
      module();
      setState(298);
      match(IDLParser::SEMICOLON);
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(300);
      value();
      setState(301);
      match(IDLParser::SEMICOLON);
      break;
    }

    case 7: {
      enterOuterAlt(_localctx, 7);
      setState(303);
      type_id_decl();
      setState(304);
      match(IDLParser::SEMICOLON);
      break;
    }

    case 8: {
      enterOuterAlt(_localctx, 8);
      setState(306);
      type_prefix_decl();
      setState(307);
      match(IDLParser::SEMICOLON);
      break;
    }

    case 9: {
      enterOuterAlt(_localctx, 9);
      setState(309);
      event();
      setState(310);
      match(IDLParser::SEMICOLON);
      break;
    }

    case 10: {
      enterOuterAlt(_localctx, 10);
      setState(312);
      component();
      setState(313);
      match(IDLParser::SEMICOLON);
      break;
    }

    case 11: {
      enterOuterAlt(_localctx, 11);
      setState(315);
      home_decl();
      setState(316);
      match(IDLParser::SEMICOLON);
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ModuleContext ------------------------------------------------------------------

IDLParser::ModuleContext::ModuleContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* IDLParser::ModuleContext::KW_MODULE() {
  return getToken(IDLParser::KW_MODULE, 0);
}

tree::TerminalNode* IDLParser::ModuleContext::ID() {
  return getToken(IDLParser::ID, 0);
}

tree::TerminalNode* IDLParser::ModuleContext::LEFT_BRACE() {
  return getToken(IDLParser::LEFT_BRACE, 0);
}

tree::TerminalNode* IDLParser::ModuleContext::RIGHT_BRACE() {
  return getToken(IDLParser::RIGHT_BRACE, 0);
}

std::vector<IDLParser::DefinitionContext *> IDLParser::ModuleContext::definition() {
  return getRuleContexts<IDLParser::DefinitionContext>();
}

IDLParser::DefinitionContext* IDLParser::ModuleContext::definition(size_t i) {
  return getRuleContext<IDLParser::DefinitionContext>(i);
}


size_t IDLParser::ModuleContext::getRuleIndex() const {
  return IDLParser::RuleModule;
}

antlrcpp::Any IDLParser::ModuleContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<IDLVisitor*>(visitor))
    return parserVisitor->visitModule(this);
  else
    return visitor->visitChildren(this);
}

IDLParser::ModuleContext* IDLParser::module() {
  ModuleContext *_localctx = _tracker.createInstance<ModuleContext>(_ctx, getState());
  enterRule(_localctx, 4, IDLParser::RuleModule);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(320);
    match(IDLParser::KW_MODULE);
    setState(321);
    match(IDLParser::ID);
    setState(322);
    match(IDLParser::LEFT_BRACE);
    setState(324); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(323);
      definition();
      setState(326); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while (((((_la - 41) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 41)) & ((1ULL << (IDLParser::KW_TYPEDEF - 41))
      | (1ULL << (IDLParser::KW_CUSTOM - 41))
      | (1ULL << (IDLParser::KW_STRUCT - 41))
      | (1ULL << (IDLParser::KW_NATIVE - 41))
      | (1ULL << (IDLParser::KW_EVENTTYPE - 41))
      | (1ULL << (IDLParser::KW_ENUM - 41))
      | (1ULL << (IDLParser::KW_HOME - 41))
      | (1ULL << (IDLParser::KW_EXCEPTION - 41))
      | (1ULL << (IDLParser::KW_CONST - 41))
      | (1ULL << (IDLParser::KW_VALUETYPE - 41))
      | (1ULL << (IDLParser::KW_MODULE - 41))
      | (1ULL << (IDLParser::KW_UNION - 41))
      | (1ULL << (IDLParser::KW_ABSTRACT - 41))
      | (1ULL << (IDLParser::KW_TYPEPREFIX - 41))
      | (1ULL << (IDLParser::KW_TYPEID - 41))
      | (1ULL << (IDLParser::KW_LOCAL - 41))
      | (1ULL << (IDLParser::KW_INTERFACE - 41))
      | (1ULL << (IDLParser::KW_COMPONENT - 41)))) != 0));
    setState(328);
    match(IDLParser::RIGHT_BRACE);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Interface_or_forward_declContext ------------------------------------------------------------------

IDLParser::Interface_or_forward_declContext::Interface_or_forward_declContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

IDLParser::Interface_declContext* IDLParser::Interface_or_forward_declContext::interface_decl() {
  return getRuleContext<IDLParser::Interface_declContext>(0);
}

IDLParser::Forward_declContext* IDLParser::Interface_or_forward_declContext::forward_decl() {
  return getRuleContext<IDLParser::Forward_declContext>(0);
}


size_t IDLParser::Interface_or_forward_declContext::getRuleIndex() const {
  return IDLParser::RuleInterface_or_forward_decl;
}

antlrcpp::Any IDLParser::Interface_or_forward_declContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<IDLVisitor*>(visitor))
    return parserVisitor->visitInterface_or_forward_decl(this);
  else
    return visitor->visitChildren(this);
}

IDLParser::Interface_or_forward_declContext* IDLParser::interface_or_forward_decl() {
  Interface_or_forward_declContext *_localctx = _tracker.createInstance<Interface_or_forward_declContext>(_ctx, getState());
  enterRule(_localctx, 6, IDLParser::RuleInterface_or_forward_decl);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(332);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 4, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(330);
      interface_decl();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(331);
      forward_decl();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Interface_declContext ------------------------------------------------------------------

IDLParser::Interface_declContext::Interface_declContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

IDLParser::Interface_headerContext* IDLParser::Interface_declContext::interface_header() {
  return getRuleContext<IDLParser::Interface_headerContext>(0);
}

tree::TerminalNode* IDLParser::Interface_declContext::LEFT_BRACE() {
  return getToken(IDLParser::LEFT_BRACE, 0);
}

IDLParser::Interface_bodyContext* IDLParser::Interface_declContext::interface_body() {
  return getRuleContext<IDLParser::Interface_bodyContext>(0);
}

tree::TerminalNode* IDLParser::Interface_declContext::RIGHT_BRACE() {
  return getToken(IDLParser::RIGHT_BRACE, 0);
}


size_t IDLParser::Interface_declContext::getRuleIndex() const {
  return IDLParser::RuleInterface_decl;
}

antlrcpp::Any IDLParser::Interface_declContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<IDLVisitor*>(visitor))
    return parserVisitor->visitInterface_decl(this);
  else
    return visitor->visitChildren(this);
}

IDLParser::Interface_declContext* IDLParser::interface_decl() {
  Interface_declContext *_localctx = _tracker.createInstance<Interface_declContext>(_ctx, getState());
  enterRule(_localctx, 8, IDLParser::RuleInterface_decl);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(334);
    interface_header();
    setState(335);
    match(IDLParser::LEFT_BRACE);
    setState(336);
    interface_body();
    setState(337);
    match(IDLParser::RIGHT_BRACE);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Forward_declContext ------------------------------------------------------------------

IDLParser::Forward_declContext::Forward_declContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* IDLParser::Forward_declContext::KW_INTERFACE() {
  return getToken(IDLParser::KW_INTERFACE, 0);
}

tree::TerminalNode* IDLParser::Forward_declContext::ID() {
  return getToken(IDLParser::ID, 0);
}

tree::TerminalNode* IDLParser::Forward_declContext::KW_ABSTRACT() {
  return getToken(IDLParser::KW_ABSTRACT, 0);
}

tree::TerminalNode* IDLParser::Forward_declContext::KW_LOCAL() {
  return getToken(IDLParser::KW_LOCAL, 0);
}


size_t IDLParser::Forward_declContext::getRuleIndex() const {
  return IDLParser::RuleForward_decl;
}

antlrcpp::Any IDLParser::Forward_declContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<IDLVisitor*>(visitor))
    return parserVisitor->visitForward_decl(this);
  else
    return visitor->visitChildren(this);
}

IDLParser::Forward_declContext* IDLParser::forward_decl() {
  Forward_declContext *_localctx = _tracker.createInstance<Forward_declContext>(_ctx, getState());
  enterRule(_localctx, 10, IDLParser::RuleForward_decl);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(340);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == IDLParser::KW_ABSTRACT

    || _la == IDLParser::KW_LOCAL) {
      setState(339);
      _la = _input->LA(1);
      if (!(_la == IDLParser::KW_ABSTRACT

      || _la == IDLParser::KW_LOCAL)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
    }
    setState(342);
    match(IDLParser::KW_INTERFACE);
    setState(343);
    match(IDLParser::ID);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Interface_headerContext ------------------------------------------------------------------

IDLParser::Interface_headerContext::Interface_headerContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* IDLParser::Interface_headerContext::KW_INTERFACE() {
  return getToken(IDLParser::KW_INTERFACE, 0);
}

tree::TerminalNode* IDLParser::Interface_headerContext::ID() {
  return getToken(IDLParser::ID, 0);
}

IDLParser::Interface_inheritance_specContext* IDLParser::Interface_headerContext::interface_inheritance_spec() {
  return getRuleContext<IDLParser::Interface_inheritance_specContext>(0);
}

tree::TerminalNode* IDLParser::Interface_headerContext::KW_ABSTRACT() {
  return getToken(IDLParser::KW_ABSTRACT, 0);
}

tree::TerminalNode* IDLParser::Interface_headerContext::KW_LOCAL() {
  return getToken(IDLParser::KW_LOCAL, 0);
}


size_t IDLParser::Interface_headerContext::getRuleIndex() const {
  return IDLParser::RuleInterface_header;
}

antlrcpp::Any IDLParser::Interface_headerContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<IDLVisitor*>(visitor))
    return parserVisitor->visitInterface_header(this);
  else
    return visitor->visitChildren(this);
}

IDLParser::Interface_headerContext* IDLParser::interface_header() {
  Interface_headerContext *_localctx = _tracker.createInstance<Interface_headerContext>(_ctx, getState());
  enterRule(_localctx, 12, IDLParser::RuleInterface_header);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(346);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == IDLParser::KW_ABSTRACT

    || _la == IDLParser::KW_LOCAL) {
      setState(345);
      _la = _input->LA(1);
      if (!(_la == IDLParser::KW_ABSTRACT

      || _la == IDLParser::KW_LOCAL)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
    }
    setState(348);
    match(IDLParser::KW_INTERFACE);
    setState(349);
    match(IDLParser::ID);
    setState(351);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == IDLParser::COLON) {
      setState(350);
      interface_inheritance_spec();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Interface_bodyContext ------------------------------------------------------------------

IDLParser::Interface_bodyContext::Interface_bodyContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<IDLParser::Idl_exportContext *> IDLParser::Interface_bodyContext::idl_export() {
  return getRuleContexts<IDLParser::Idl_exportContext>();
}

IDLParser::Idl_exportContext* IDLParser::Interface_bodyContext::idl_export(size_t i) {
  return getRuleContext<IDLParser::Idl_exportContext>(i);
}


size_t IDLParser::Interface_bodyContext::getRuleIndex() const {
  return IDLParser::RuleInterface_body;
}

antlrcpp::Any IDLParser::Interface_bodyContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<IDLVisitor*>(visitor))
    return parserVisitor->visitInterface_body(this);
  else
    return visitor->visitChildren(this);
}

IDLParser::Interface_bodyContext* IDLParser::interface_body() {
  Interface_bodyContext *_localctx = _tracker.createInstance<Interface_bodyContext>(_ctx, getState());
  enterRule(_localctx, 14, IDLParser::RuleInterface_body);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(356);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << IDLParser::DOUBLE_COLON)
      | (1ULL << IDLParser::KW_STRING)
      | (1ULL << IDLParser::KW_TYPEDEF)
      | (1ULL << IDLParser::KW_OCTET)
      | (1ULL << IDLParser::KW_STRUCT)
      | (1ULL << IDLParser::KW_NATIVE)
      | (1ULL << IDLParser::KW_READONLY)
      | (1ULL << IDLParser::KW_VOID)
      | (1ULL << IDLParser::KW_WCHAR)
      | (1ULL << IDLParser::KW_SHORT)
      | (1ULL << IDLParser::KW_LONG)
      | (1ULL << IDLParser::KW_ENUM)
      | (1ULL << IDLParser::KW_WSTRING))) != 0) || ((((_la - 67) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 67)) & ((1ULL << (IDLParser::KW_EXCEPTION - 67))
      | (1ULL << (IDLParser::KW_CONST - 67))
      | (1ULL << (IDLParser::KW_VALUEBASE - 67))
      | (1ULL << (IDLParser::KW_OBJECT - 67))
      | (1ULL << (IDLParser::KW_UNSIGNED - 67))
      | (1ULL << (IDLParser::KW_UNION - 67))
      | (1ULL << (IDLParser::KW_ONEWAY - 67))
      | (1ULL << (IDLParser::KW_ANY - 67))
      | (1ULL << (IDLParser::KW_CHAR - 67))
      | (1ULL << (IDLParser::KW_FLOAT - 67))
      | (1ULL << (IDLParser::KW_BOOLEAN - 67))
      | (1ULL << (IDLParser::KW_DOUBLE - 67))
      | (1ULL << (IDLParser::KW_TYPEPREFIX - 67))
      | (1ULL << (IDLParser::KW_TYPEID - 67))
      | (1ULL << (IDLParser::KW_ATTRIBUTE - 67))
      | (1ULL << (IDLParser::ID - 67)))) != 0)) {
      setState(353);
      idl_export();
      setState(358);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Idl_exportContext ------------------------------------------------------------------

IDLParser::Idl_exportContext::Idl_exportContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

IDLParser::Type_declContext* IDLParser::Idl_exportContext::type_decl() {
  return getRuleContext<IDLParser::Type_declContext>(0);
}

tree::TerminalNode* IDLParser::Idl_exportContext::SEMICOLON() {
  return getToken(IDLParser::SEMICOLON, 0);
}

IDLParser::Const_declContext* IDLParser::Idl_exportContext::const_decl() {
  return getRuleContext<IDLParser::Const_declContext>(0);
}

IDLParser::Except_declContext* IDLParser::Idl_exportContext::except_decl() {
  return getRuleContext<IDLParser::Except_declContext>(0);
}

IDLParser::Attr_declContext* IDLParser::Idl_exportContext::attr_decl() {
  return getRuleContext<IDLParser::Attr_declContext>(0);
}

IDLParser::Op_declContext* IDLParser::Idl_exportContext::op_decl() {
  return getRuleContext<IDLParser::Op_declContext>(0);
}

IDLParser::Type_id_declContext* IDLParser::Idl_exportContext::type_id_decl() {
  return getRuleContext<IDLParser::Type_id_declContext>(0);
}

IDLParser::Type_prefix_declContext* IDLParser::Idl_exportContext::type_prefix_decl() {
  return getRuleContext<IDLParser::Type_prefix_declContext>(0);
}


size_t IDLParser::Idl_exportContext::getRuleIndex() const {
  return IDLParser::RuleIdl_export;
}

antlrcpp::Any IDLParser::Idl_exportContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<IDLVisitor*>(visitor))
    return parserVisitor->visitIdl_export(this);
  else
    return visitor->visitChildren(this);
}

IDLParser::Idl_exportContext* IDLParser::idl_export() {
  Idl_exportContext *_localctx = _tracker.createInstance<Idl_exportContext>(_ctx, getState());
  enterRule(_localctx, 16, IDLParser::RuleIdl_export);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(380);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case IDLParser::KW_TYPEDEF:
      case IDLParser::KW_STRUCT:
      case IDLParser::KW_NATIVE:
      case IDLParser::KW_ENUM:
      case IDLParser::KW_UNION: {
        enterOuterAlt(_localctx, 1);
        setState(359);
        type_decl();
        setState(360);
        match(IDLParser::SEMICOLON);
        break;
      }

      case IDLParser::KW_CONST: {
        enterOuterAlt(_localctx, 2);
        setState(362);
        const_decl();
        setState(363);
        match(IDLParser::SEMICOLON);
        break;
      }

      case IDLParser::KW_EXCEPTION: {
        enterOuterAlt(_localctx, 3);
        setState(365);
        except_decl();
        setState(366);
        match(IDLParser::SEMICOLON);
        break;
      }

      case IDLParser::KW_READONLY:
      case IDLParser::KW_ATTRIBUTE: {
        enterOuterAlt(_localctx, 4);
        setState(368);
        attr_decl();
        setState(369);
        match(IDLParser::SEMICOLON);
        break;
      }

      case IDLParser::DOUBLE_COLON:
      case IDLParser::KW_STRING:
      case IDLParser::KW_OCTET:
      case IDLParser::KW_VOID:
      case IDLParser::KW_WCHAR:
      case IDLParser::KW_SHORT:
      case IDLParser::KW_LONG:
      case IDLParser::KW_WSTRING:
      case IDLParser::KW_VALUEBASE:
      case IDLParser::KW_OBJECT:
      case IDLParser::KW_UNSIGNED:
      case IDLParser::KW_ONEWAY:
      case IDLParser::KW_ANY:
      case IDLParser::KW_CHAR:
      case IDLParser::KW_FLOAT:
      case IDLParser::KW_BOOLEAN:
      case IDLParser::KW_DOUBLE:
      case IDLParser::ID: {
        enterOuterAlt(_localctx, 5);
        setState(371);
        op_decl();
        setState(372);
        match(IDLParser::SEMICOLON);
        break;
      }

      case IDLParser::KW_TYPEID: {
        enterOuterAlt(_localctx, 6);
        setState(374);
        type_id_decl();
        setState(375);
        match(IDLParser::SEMICOLON);
        break;
      }

      case IDLParser::KW_TYPEPREFIX: {
        enterOuterAlt(_localctx, 7);
        setState(377);
        type_prefix_decl();
        setState(378);
        match(IDLParser::SEMICOLON);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Interface_inheritance_specContext ------------------------------------------------------------------

IDLParser::Interface_inheritance_specContext::Interface_inheritance_specContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* IDLParser::Interface_inheritance_specContext::COLON() {
  return getToken(IDLParser::COLON, 0);
}

std::vector<IDLParser::Interface_nameContext *> IDLParser::Interface_inheritance_specContext::interface_name() {
  return getRuleContexts<IDLParser::Interface_nameContext>();
}

IDLParser::Interface_nameContext* IDLParser::Interface_inheritance_specContext::interface_name(size_t i) {
  return getRuleContext<IDLParser::Interface_nameContext>(i);
}

std::vector<tree::TerminalNode *> IDLParser::Interface_inheritance_specContext::COMA() {
  return getTokens(IDLParser::COMA);
}

tree::TerminalNode* IDLParser::Interface_inheritance_specContext::COMA(size_t i) {
  return getToken(IDLParser::COMA, i);
}


size_t IDLParser::Interface_inheritance_specContext::getRuleIndex() const {
  return IDLParser::RuleInterface_inheritance_spec;
}

antlrcpp::Any IDLParser::Interface_inheritance_specContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<IDLVisitor*>(visitor))
    return parserVisitor->visitInterface_inheritance_spec(this);
  else
    return visitor->visitChildren(this);
}

IDLParser::Interface_inheritance_specContext* IDLParser::interface_inheritance_spec() {
  Interface_inheritance_specContext *_localctx = _tracker.createInstance<Interface_inheritance_specContext>(_ctx, getState());
  enterRule(_localctx, 18, IDLParser::RuleInterface_inheritance_spec);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(382);
    match(IDLParser::COLON);
    setState(383);
    interface_name();
    setState(388);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == IDLParser::COMA) {
      setState(384);
      match(IDLParser::COMA);
      setState(385);
      interface_name();
      setState(390);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Interface_nameContext ------------------------------------------------------------------

IDLParser::Interface_nameContext::Interface_nameContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

IDLParser::Scoped_nameContext* IDLParser::Interface_nameContext::scoped_name() {
  return getRuleContext<IDLParser::Scoped_nameContext>(0);
}


size_t IDLParser::Interface_nameContext::getRuleIndex() const {
  return IDLParser::RuleInterface_name;
}

antlrcpp::Any IDLParser::Interface_nameContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<IDLVisitor*>(visitor))
    return parserVisitor->visitInterface_name(this);
  else
    return visitor->visitChildren(this);
}

IDLParser::Interface_nameContext* IDLParser::interface_name() {
  Interface_nameContext *_localctx = _tracker.createInstance<Interface_nameContext>(_ctx, getState());
  enterRule(_localctx, 20, IDLParser::RuleInterface_name);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(391);
    scoped_name();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Scoped_nameContext ------------------------------------------------------------------

IDLParser::Scoped_nameContext::Scoped_nameContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> IDLParser::Scoped_nameContext::ID() {
  return getTokens(IDLParser::ID);
}

tree::TerminalNode* IDLParser::Scoped_nameContext::ID(size_t i) {
  return getToken(IDLParser::ID, i);
}

std::vector<tree::TerminalNode *> IDLParser::Scoped_nameContext::DOUBLE_COLON() {
  return getTokens(IDLParser::DOUBLE_COLON);
}

tree::TerminalNode* IDLParser::Scoped_nameContext::DOUBLE_COLON(size_t i) {
  return getToken(IDLParser::DOUBLE_COLON, i);
}


size_t IDLParser::Scoped_nameContext::getRuleIndex() const {
  return IDLParser::RuleScoped_name;
}

antlrcpp::Any IDLParser::Scoped_nameContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<IDLVisitor*>(visitor))
    return parserVisitor->visitScoped_name(this);
  else
    return visitor->visitChildren(this);
}

IDLParser::Scoped_nameContext* IDLParser::scoped_name() {
  Scoped_nameContext *_localctx = _tracker.createInstance<Scoped_nameContext>(_ctx, getState());
  enterRule(_localctx, 22, IDLParser::RuleScoped_name);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(394);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == IDLParser::DOUBLE_COLON) {
      setState(393);
      match(IDLParser::DOUBLE_COLON);
    }
    setState(396);
    match(IDLParser::ID);
    setState(401);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == IDLParser::DOUBLE_COLON) {
      setState(397);
      match(IDLParser::DOUBLE_COLON);
      setState(398);
      match(IDLParser::ID);
      setState(403);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ValueContext ------------------------------------------------------------------

IDLParser::ValueContext::ValueContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

IDLParser::Value_declContext* IDLParser::ValueContext::value_decl() {
  return getRuleContext<IDLParser::Value_declContext>(0);
}

IDLParser::Value_abs_declContext* IDLParser::ValueContext::value_abs_decl() {
  return getRuleContext<IDLParser::Value_abs_declContext>(0);
}

IDLParser::Value_box_declContext* IDLParser::ValueContext::value_box_decl() {
  return getRuleContext<IDLParser::Value_box_declContext>(0);
}

IDLParser::Value_forward_declContext* IDLParser::ValueContext::value_forward_decl() {
  return getRuleContext<IDLParser::Value_forward_declContext>(0);
}


size_t IDLParser::ValueContext::getRuleIndex() const {
  return IDLParser::RuleValue;
}

antlrcpp::Any IDLParser::ValueContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<IDLVisitor*>(visitor))
    return parserVisitor->visitValue(this);
  else
    return visitor->visitChildren(this);
}

IDLParser::ValueContext* IDLParser::value() {
  ValueContext *_localctx = _tracker.createInstance<ValueContext>(_ctx, getState());
  enterRule(_localctx, 24, IDLParser::RuleValue);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(408);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 13, _ctx)) {
    case 1: {
      setState(404);
      value_decl();
      break;
    }

    case 2: {
      setState(405);
      value_abs_decl();
      break;
    }

    case 3: {
      setState(406);
      value_box_decl();
      break;
    }

    case 4: {
      setState(407);
      value_forward_decl();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Value_forward_declContext ------------------------------------------------------------------

IDLParser::Value_forward_declContext::Value_forward_declContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* IDLParser::Value_forward_declContext::KW_VALUETYPE() {
  return getToken(IDLParser::KW_VALUETYPE, 0);
}

tree::TerminalNode* IDLParser::Value_forward_declContext::ID() {
  return getToken(IDLParser::ID, 0);
}

tree::TerminalNode* IDLParser::Value_forward_declContext::KW_ABSTRACT() {
  return getToken(IDLParser::KW_ABSTRACT, 0);
}


size_t IDLParser::Value_forward_declContext::getRuleIndex() const {
  return IDLParser::RuleValue_forward_decl;
}

antlrcpp::Any IDLParser::Value_forward_declContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<IDLVisitor*>(visitor))
    return parserVisitor->visitValue_forward_decl(this);
  else
    return visitor->visitChildren(this);
}

IDLParser::Value_forward_declContext* IDLParser::value_forward_decl() {
  Value_forward_declContext *_localctx = _tracker.createInstance<Value_forward_declContext>(_ctx, getState());
  enterRule(_localctx, 26, IDLParser::RuleValue_forward_decl);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(411);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == IDLParser::KW_ABSTRACT) {
      setState(410);
      match(IDLParser::KW_ABSTRACT);
    }
    setState(413);
    match(IDLParser::KW_VALUETYPE);
    setState(414);
    match(IDLParser::ID);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Value_box_declContext ------------------------------------------------------------------

IDLParser::Value_box_declContext::Value_box_declContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* IDLParser::Value_box_declContext::KW_VALUETYPE() {
  return getToken(IDLParser::KW_VALUETYPE, 0);
}

tree::TerminalNode* IDLParser::Value_box_declContext::ID() {
  return getToken(IDLParser::ID, 0);
}

IDLParser::Type_specContext* IDLParser::Value_box_declContext::type_spec() {
  return getRuleContext<IDLParser::Type_specContext>(0);
}


size_t IDLParser::Value_box_declContext::getRuleIndex() const {
  return IDLParser::RuleValue_box_decl;
}

antlrcpp::Any IDLParser::Value_box_declContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<IDLVisitor*>(visitor))
    return parserVisitor->visitValue_box_decl(this);
  else
    return visitor->visitChildren(this);
}

IDLParser::Value_box_declContext* IDLParser::value_box_decl() {
  Value_box_declContext *_localctx = _tracker.createInstance<Value_box_declContext>(_ctx, getState());
  enterRule(_localctx, 28, IDLParser::RuleValue_box_decl);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(416);
    match(IDLParser::KW_VALUETYPE);
    setState(417);
    match(IDLParser::ID);
    setState(418);
    type_spec();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Value_abs_declContext ------------------------------------------------------------------

IDLParser::Value_abs_declContext::Value_abs_declContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* IDLParser::Value_abs_declContext::KW_ABSTRACT() {
  return getToken(IDLParser::KW_ABSTRACT, 0);
}

tree::TerminalNode* IDLParser::Value_abs_declContext::KW_VALUETYPE() {
  return getToken(IDLParser::KW_VALUETYPE, 0);
}

tree::TerminalNode* IDLParser::Value_abs_declContext::ID() {
  return getToken(IDLParser::ID, 0);
}

IDLParser::Value_inheritance_specContext* IDLParser::Value_abs_declContext::value_inheritance_spec() {
  return getRuleContext<IDLParser::Value_inheritance_specContext>(0);
}

tree::TerminalNode* IDLParser::Value_abs_declContext::LEFT_BRACE() {
  return getToken(IDLParser::LEFT_BRACE, 0);
}

tree::TerminalNode* IDLParser::Value_abs_declContext::RIGHT_BRACE() {
  return getToken(IDLParser::RIGHT_BRACE, 0);
}

std::vector<IDLParser::Idl_exportContext *> IDLParser::Value_abs_declContext::idl_export() {
  return getRuleContexts<IDLParser::Idl_exportContext>();
}

IDLParser::Idl_exportContext* IDLParser::Value_abs_declContext::idl_export(size_t i) {
  return getRuleContext<IDLParser::Idl_exportContext>(i);
}


size_t IDLParser::Value_abs_declContext::getRuleIndex() const {
  return IDLParser::RuleValue_abs_decl;
}

antlrcpp::Any IDLParser::Value_abs_declContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<IDLVisitor*>(visitor))
    return parserVisitor->visitValue_abs_decl(this);
  else
    return visitor->visitChildren(this);
}

IDLParser::Value_abs_declContext* IDLParser::value_abs_decl() {
  Value_abs_declContext *_localctx = _tracker.createInstance<Value_abs_declContext>(_ctx, getState());
  enterRule(_localctx, 30, IDLParser::RuleValue_abs_decl);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(420);
    match(IDLParser::KW_ABSTRACT);
    setState(421);
    match(IDLParser::KW_VALUETYPE);
    setState(422);
    match(IDLParser::ID);
    setState(423);
    value_inheritance_spec();
    setState(424);
    match(IDLParser::LEFT_BRACE);
    setState(428);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << IDLParser::DOUBLE_COLON)
      | (1ULL << IDLParser::KW_STRING)
      | (1ULL << IDLParser::KW_TYPEDEF)
      | (1ULL << IDLParser::KW_OCTET)
      | (1ULL << IDLParser::KW_STRUCT)
      | (1ULL << IDLParser::KW_NATIVE)
      | (1ULL << IDLParser::KW_READONLY)
      | (1ULL << IDLParser::KW_VOID)
      | (1ULL << IDLParser::KW_WCHAR)
      | (1ULL << IDLParser::KW_SHORT)
      | (1ULL << IDLParser::KW_LONG)
      | (1ULL << IDLParser::KW_ENUM)
      | (1ULL << IDLParser::KW_WSTRING))) != 0) || ((((_la - 67) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 67)) & ((1ULL << (IDLParser::KW_EXCEPTION - 67))
      | (1ULL << (IDLParser::KW_CONST - 67))
      | (1ULL << (IDLParser::KW_VALUEBASE - 67))
      | (1ULL << (IDLParser::KW_OBJECT - 67))
      | (1ULL << (IDLParser::KW_UNSIGNED - 67))
      | (1ULL << (IDLParser::KW_UNION - 67))
      | (1ULL << (IDLParser::KW_ONEWAY - 67))
      | (1ULL << (IDLParser::KW_ANY - 67))
      | (1ULL << (IDLParser::KW_CHAR - 67))
      | (1ULL << (IDLParser::KW_FLOAT - 67))
      | (1ULL << (IDLParser::KW_BOOLEAN - 67))
      | (1ULL << (IDLParser::KW_DOUBLE - 67))
      | (1ULL << (IDLParser::KW_TYPEPREFIX - 67))
      | (1ULL << (IDLParser::KW_TYPEID - 67))
      | (1ULL << (IDLParser::KW_ATTRIBUTE - 67))
      | (1ULL << (IDLParser::ID - 67)))) != 0)) {
      setState(425);
      idl_export();
      setState(430);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(431);
    match(IDLParser::RIGHT_BRACE);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Value_declContext ------------------------------------------------------------------

IDLParser::Value_declContext::Value_declContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

IDLParser::Value_headerContext* IDLParser::Value_declContext::value_header() {
  return getRuleContext<IDLParser::Value_headerContext>(0);
}

tree::TerminalNode* IDLParser::Value_declContext::LEFT_BRACE() {
  return getToken(IDLParser::LEFT_BRACE, 0);
}

tree::TerminalNode* IDLParser::Value_declContext::RIGHT_BRACE() {
  return getToken(IDLParser::RIGHT_BRACE, 0);
}

std::vector<IDLParser::Value_elementContext *> IDLParser::Value_declContext::value_element() {
  return getRuleContexts<IDLParser::Value_elementContext>();
}

IDLParser::Value_elementContext* IDLParser::Value_declContext::value_element(size_t i) {
  return getRuleContext<IDLParser::Value_elementContext>(i);
}


size_t IDLParser::Value_declContext::getRuleIndex() const {
  return IDLParser::RuleValue_decl;
}

antlrcpp::Any IDLParser::Value_declContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<IDLVisitor*>(visitor))
    return parserVisitor->visitValue_decl(this);
  else
    return visitor->visitChildren(this);
}

IDLParser::Value_declContext* IDLParser::value_decl() {
  Value_declContext *_localctx = _tracker.createInstance<Value_declContext>(_ctx, getState());
  enterRule(_localctx, 32, IDLParser::RuleValue_decl);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(433);
    value_header();
    setState(434);
    match(IDLParser::LEFT_BRACE);
    setState(438);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << IDLParser::DOUBLE_COLON)
      | (1ULL << IDLParser::KW_STRING)
      | (1ULL << IDLParser::KW_TYPEDEF)
      | (1ULL << IDLParser::KW_OCTET)
      | (1ULL << IDLParser::KW_STRUCT)
      | (1ULL << IDLParser::KW_NATIVE)
      | (1ULL << IDLParser::KW_READONLY)
      | (1ULL << IDLParser::KW_VOID)
      | (1ULL << IDLParser::KW_PRIVATE)
      | (1ULL << IDLParser::KW_WCHAR)
      | (1ULL << IDLParser::KW_PUBLIC)
      | (1ULL << IDLParser::KW_SHORT)
      | (1ULL << IDLParser::KW_LONG)
      | (1ULL << IDLParser::KW_ENUM)
      | (1ULL << IDLParser::KW_WSTRING))) != 0) || ((((_la - 66) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 66)) & ((1ULL << (IDLParser::KW_FACTORY - 66))
      | (1ULL << (IDLParser::KW_EXCEPTION - 66))
      | (1ULL << (IDLParser::KW_CONST - 66))
      | (1ULL << (IDLParser::KW_VALUEBASE - 66))
      | (1ULL << (IDLParser::KW_OBJECT - 66))
      | (1ULL << (IDLParser::KW_UNSIGNED - 66))
      | (1ULL << (IDLParser::KW_UNION - 66))
      | (1ULL << (IDLParser::KW_ONEWAY - 66))
      | (1ULL << (IDLParser::KW_ANY - 66))
      | (1ULL << (IDLParser::KW_CHAR - 66))
      | (1ULL << (IDLParser::KW_FLOAT - 66))
      | (1ULL << (IDLParser::KW_BOOLEAN - 66))
      | (1ULL << (IDLParser::KW_DOUBLE - 66))
      | (1ULL << (IDLParser::KW_TYPEPREFIX - 66))
      | (1ULL << (IDLParser::KW_TYPEID - 66))
      | (1ULL << (IDLParser::KW_ATTRIBUTE - 66))
      | (1ULL << (IDLParser::ID - 66)))) != 0)) {
      setState(435);
      value_element();
      setState(440);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(441);
    match(IDLParser::RIGHT_BRACE);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Value_headerContext ------------------------------------------------------------------

IDLParser::Value_headerContext::Value_headerContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* IDLParser::Value_headerContext::KW_VALUETYPE() {
  return getToken(IDLParser::KW_VALUETYPE, 0);
}

tree::TerminalNode* IDLParser::Value_headerContext::ID() {
  return getToken(IDLParser::ID, 0);
}

IDLParser::Value_inheritance_specContext* IDLParser::Value_headerContext::value_inheritance_spec() {
  return getRuleContext<IDLParser::Value_inheritance_specContext>(0);
}

tree::TerminalNode* IDLParser::Value_headerContext::KW_CUSTOM() {
  return getToken(IDLParser::KW_CUSTOM, 0);
}


size_t IDLParser::Value_headerContext::getRuleIndex() const {
  return IDLParser::RuleValue_header;
}

antlrcpp::Any IDLParser::Value_headerContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<IDLVisitor*>(visitor))
    return parserVisitor->visitValue_header(this);
  else
    return visitor->visitChildren(this);
}

IDLParser::Value_headerContext* IDLParser::value_header() {
  Value_headerContext *_localctx = _tracker.createInstance<Value_headerContext>(_ctx, getState());
  enterRule(_localctx, 34, IDLParser::RuleValue_header);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(444);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == IDLParser::KW_CUSTOM) {
      setState(443);
      match(IDLParser::KW_CUSTOM);
    }
    setState(446);
    match(IDLParser::KW_VALUETYPE);
    setState(447);
    match(IDLParser::ID);
    setState(448);
    value_inheritance_spec();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Value_inheritance_specContext ------------------------------------------------------------------

IDLParser::Value_inheritance_specContext::Value_inheritance_specContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* IDLParser::Value_inheritance_specContext::COLON() {
  return getToken(IDLParser::COLON, 0);
}

std::vector<IDLParser::Value_nameContext *> IDLParser::Value_inheritance_specContext::value_name() {
  return getRuleContexts<IDLParser::Value_nameContext>();
}

IDLParser::Value_nameContext* IDLParser::Value_inheritance_specContext::value_name(size_t i) {
  return getRuleContext<IDLParser::Value_nameContext>(i);
}

tree::TerminalNode* IDLParser::Value_inheritance_specContext::KW_SUPPORTS() {
  return getToken(IDLParser::KW_SUPPORTS, 0);
}

std::vector<IDLParser::Interface_nameContext *> IDLParser::Value_inheritance_specContext::interface_name() {
  return getRuleContexts<IDLParser::Interface_nameContext>();
}

IDLParser::Interface_nameContext* IDLParser::Value_inheritance_specContext::interface_name(size_t i) {
  return getRuleContext<IDLParser::Interface_nameContext>(i);
}

tree::TerminalNode* IDLParser::Value_inheritance_specContext::KW_TRUNCATABLE() {
  return getToken(IDLParser::KW_TRUNCATABLE, 0);
}

std::vector<tree::TerminalNode *> IDLParser::Value_inheritance_specContext::COMA() {
  return getTokens(IDLParser::COMA);
}

tree::TerminalNode* IDLParser::Value_inheritance_specContext::COMA(size_t i) {
  return getToken(IDLParser::COMA, i);
}


size_t IDLParser::Value_inheritance_specContext::getRuleIndex() const {
  return IDLParser::RuleValue_inheritance_spec;
}

antlrcpp::Any IDLParser::Value_inheritance_specContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<IDLVisitor*>(visitor))
    return parserVisitor->visitValue_inheritance_spec(this);
  else
    return visitor->visitChildren(this);
}

IDLParser::Value_inheritance_specContext* IDLParser::value_inheritance_spec() {
  Value_inheritance_specContext *_localctx = _tracker.createInstance<Value_inheritance_specContext>(_ctx, getState());
  enterRule(_localctx, 36, IDLParser::RuleValue_inheritance_spec);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(462);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == IDLParser::COLON) {
      setState(450);
      match(IDLParser::COLON);
      setState(452);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == IDLParser::KW_TRUNCATABLE) {
        setState(451);
        match(IDLParser::KW_TRUNCATABLE);
      }
      setState(454);
      value_name();
      setState(459);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == IDLParser::COMA) {
        setState(455);
        match(IDLParser::COMA);
        setState(456);
        value_name();
        setState(461);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
    }
    setState(473);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == IDLParser::KW_SUPPORTS) {
      setState(464);
      match(IDLParser::KW_SUPPORTS);
      setState(465);
      interface_name();
      setState(470);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == IDLParser::COMA) {
        setState(466);
        match(IDLParser::COMA);
        setState(467);
        interface_name();
        setState(472);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Value_nameContext ------------------------------------------------------------------

IDLParser::Value_nameContext::Value_nameContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

IDLParser::Scoped_nameContext* IDLParser::Value_nameContext::scoped_name() {
  return getRuleContext<IDLParser::Scoped_nameContext>(0);
}


size_t IDLParser::Value_nameContext::getRuleIndex() const {
  return IDLParser::RuleValue_name;
}

antlrcpp::Any IDLParser::Value_nameContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<IDLVisitor*>(visitor))
    return parserVisitor->visitValue_name(this);
  else
    return visitor->visitChildren(this);
}

IDLParser::Value_nameContext* IDLParser::value_name() {
  Value_nameContext *_localctx = _tracker.createInstance<Value_nameContext>(_ctx, getState());
  enterRule(_localctx, 38, IDLParser::RuleValue_name);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(475);
    scoped_name();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Value_elementContext ------------------------------------------------------------------

IDLParser::Value_elementContext::Value_elementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

IDLParser::Idl_exportContext* IDLParser::Value_elementContext::idl_export() {
  return getRuleContext<IDLParser::Idl_exportContext>(0);
}

IDLParser::State_memberContext* IDLParser::Value_elementContext::state_member() {
  return getRuleContext<IDLParser::State_memberContext>(0);
}

IDLParser::Init_declContext* IDLParser::Value_elementContext::init_decl() {
  return getRuleContext<IDLParser::Init_declContext>(0);
}


size_t IDLParser::Value_elementContext::getRuleIndex() const {
  return IDLParser::RuleValue_element;
}

antlrcpp::Any IDLParser::Value_elementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<IDLVisitor*>(visitor))
    return parserVisitor->visitValue_element(this);
  else
    return visitor->visitChildren(this);
}

IDLParser::Value_elementContext* IDLParser::value_element() {
  Value_elementContext *_localctx = _tracker.createInstance<Value_elementContext>(_ctx, getState());
  enterRule(_localctx, 40, IDLParser::RuleValue_element);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(480);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case IDLParser::DOUBLE_COLON:
      case IDLParser::KW_STRING:
      case IDLParser::KW_TYPEDEF:
      case IDLParser::KW_OCTET:
      case IDLParser::KW_STRUCT:
      case IDLParser::KW_NATIVE:
      case IDLParser::KW_READONLY:
      case IDLParser::KW_VOID:
      case IDLParser::KW_WCHAR:
      case IDLParser::KW_SHORT:
      case IDLParser::KW_LONG:
      case IDLParser::KW_ENUM:
      case IDLParser::KW_WSTRING:
      case IDLParser::KW_EXCEPTION:
      case IDLParser::KW_CONST:
      case IDLParser::KW_VALUEBASE:
      case IDLParser::KW_OBJECT:
      case IDLParser::KW_UNSIGNED:
      case IDLParser::KW_UNION:
      case IDLParser::KW_ONEWAY:
      case IDLParser::KW_ANY:
      case IDLParser::KW_CHAR:
      case IDLParser::KW_FLOAT:
      case IDLParser::KW_BOOLEAN:
      case IDLParser::KW_DOUBLE:
      case IDLParser::KW_TYPEPREFIX:
      case IDLParser::KW_TYPEID:
      case IDLParser::KW_ATTRIBUTE:
      case IDLParser::ID: {
        setState(477);
        idl_export();
        break;
      }

      case IDLParser::KW_PRIVATE:
      case IDLParser::KW_PUBLIC: {
        setState(478);
        state_member();
        break;
      }

      case IDLParser::KW_FACTORY: {
        setState(479);
        init_decl();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- State_memberContext ------------------------------------------------------------------

IDLParser::State_memberContext::State_memberContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

IDLParser::Type_specContext* IDLParser::State_memberContext::type_spec() {
  return getRuleContext<IDLParser::Type_specContext>(0);
}

IDLParser::DeclaratorsContext* IDLParser::State_memberContext::declarators() {
  return getRuleContext<IDLParser::DeclaratorsContext>(0);
}

tree::TerminalNode* IDLParser::State_memberContext::SEMICOLON() {
  return getToken(IDLParser::SEMICOLON, 0);
}

tree::TerminalNode* IDLParser::State_memberContext::KW_PUBLIC() {
  return getToken(IDLParser::KW_PUBLIC, 0);
}

tree::TerminalNode* IDLParser::State_memberContext::KW_PRIVATE() {
  return getToken(IDLParser::KW_PRIVATE, 0);
}


size_t IDLParser::State_memberContext::getRuleIndex() const {
  return IDLParser::RuleState_member;
}

antlrcpp::Any IDLParser::State_memberContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<IDLVisitor*>(visitor))
    return parserVisitor->visitState_member(this);
  else
    return visitor->visitChildren(this);
}

IDLParser::State_memberContext* IDLParser::state_member() {
  State_memberContext *_localctx = _tracker.createInstance<State_memberContext>(_ctx, getState());
  enterRule(_localctx, 42, IDLParser::RuleState_member);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(482);
    _la = _input->LA(1);
    if (!(_la == IDLParser::KW_PRIVATE

    || _la == IDLParser::KW_PUBLIC)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
    setState(483);
    type_spec();
    setState(484);
    declarators();
    setState(485);
    match(IDLParser::SEMICOLON);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Init_declContext ------------------------------------------------------------------

IDLParser::Init_declContext::Init_declContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* IDLParser::Init_declContext::KW_FACTORY() {
  return getToken(IDLParser::KW_FACTORY, 0);
}

tree::TerminalNode* IDLParser::Init_declContext::ID() {
  return getToken(IDLParser::ID, 0);
}

tree::TerminalNode* IDLParser::Init_declContext::LEFT_BRACKET() {
  return getToken(IDLParser::LEFT_BRACKET, 0);
}

tree::TerminalNode* IDLParser::Init_declContext::RIGHT_BRACKET() {
  return getToken(IDLParser::RIGHT_BRACKET, 0);
}

tree::TerminalNode* IDLParser::Init_declContext::SEMICOLON() {
  return getToken(IDLParser::SEMICOLON, 0);
}

IDLParser::Init_param_declsContext* IDLParser::Init_declContext::init_param_decls() {
  return getRuleContext<IDLParser::Init_param_declsContext>(0);
}

IDLParser::Raises_exprContext* IDLParser::Init_declContext::raises_expr() {
  return getRuleContext<IDLParser::Raises_exprContext>(0);
}


size_t IDLParser::Init_declContext::getRuleIndex() const {
  return IDLParser::RuleInit_decl;
}

antlrcpp::Any IDLParser::Init_declContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<IDLVisitor*>(visitor))
    return parserVisitor->visitInit_decl(this);
  else
    return visitor->visitChildren(this);
}

IDLParser::Init_declContext* IDLParser::init_decl() {
  Init_declContext *_localctx = _tracker.createInstance<Init_declContext>(_ctx, getState());
  enterRule(_localctx, 44, IDLParser::RuleInit_decl);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(487);
    match(IDLParser::KW_FACTORY);
    setState(488);
    match(IDLParser::ID);
    setState(489);
    match(IDLParser::LEFT_BRACKET);
    setState(491);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == IDLParser::KW_IN) {
      setState(490);
      init_param_decls();
    }
    setState(493);
    match(IDLParser::RIGHT_BRACKET);
    setState(495);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == IDLParser::KW_RAISES) {
      setState(494);
      raises_expr();
    }
    setState(497);
    match(IDLParser::SEMICOLON);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Init_param_declsContext ------------------------------------------------------------------

IDLParser::Init_param_declsContext::Init_param_declsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<IDLParser::Init_param_declContext *> IDLParser::Init_param_declsContext::init_param_decl() {
  return getRuleContexts<IDLParser::Init_param_declContext>();
}

IDLParser::Init_param_declContext* IDLParser::Init_param_declsContext::init_param_decl(size_t i) {
  return getRuleContext<IDLParser::Init_param_declContext>(i);
}

std::vector<tree::TerminalNode *> IDLParser::Init_param_declsContext::COMA() {
  return getTokens(IDLParser::COMA);
}

tree::TerminalNode* IDLParser::Init_param_declsContext::COMA(size_t i) {
  return getToken(IDLParser::COMA, i);
}


size_t IDLParser::Init_param_declsContext::getRuleIndex() const {
  return IDLParser::RuleInit_param_decls;
}

antlrcpp::Any IDLParser::Init_param_declsContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<IDLVisitor*>(visitor))
    return parserVisitor->visitInit_param_decls(this);
  else
    return visitor->visitChildren(this);
}

IDLParser::Init_param_declsContext* IDLParser::init_param_decls() {
  Init_param_declsContext *_localctx = _tracker.createInstance<Init_param_declsContext>(_ctx, getState());
  enterRule(_localctx, 46, IDLParser::RuleInit_param_decls);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(499);
    init_param_decl();
    setState(504);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == IDLParser::COMA) {
      setState(500);
      match(IDLParser::COMA);
      setState(501);
      init_param_decl();
      setState(506);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Init_param_declContext ------------------------------------------------------------------

IDLParser::Init_param_declContext::Init_param_declContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

IDLParser::Init_param_attributeContext* IDLParser::Init_param_declContext::init_param_attribute() {
  return getRuleContext<IDLParser::Init_param_attributeContext>(0);
}

IDLParser::Param_type_specContext* IDLParser::Init_param_declContext::param_type_spec() {
  return getRuleContext<IDLParser::Param_type_specContext>(0);
}

IDLParser::Simple_declaratorContext* IDLParser::Init_param_declContext::simple_declarator() {
  return getRuleContext<IDLParser::Simple_declaratorContext>(0);
}


size_t IDLParser::Init_param_declContext::getRuleIndex() const {
  return IDLParser::RuleInit_param_decl;
}

antlrcpp::Any IDLParser::Init_param_declContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<IDLVisitor*>(visitor))
    return parserVisitor->visitInit_param_decl(this);
  else
    return visitor->visitChildren(this);
}

IDLParser::Init_param_declContext* IDLParser::init_param_decl() {
  Init_param_declContext *_localctx = _tracker.createInstance<Init_param_declContext>(_ctx, getState());
  enterRule(_localctx, 48, IDLParser::RuleInit_param_decl);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(507);
    init_param_attribute();
    setState(508);
    param_type_spec();
    setState(509);
    simple_declarator();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Init_param_attributeContext ------------------------------------------------------------------

IDLParser::Init_param_attributeContext::Init_param_attributeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* IDLParser::Init_param_attributeContext::KW_IN() {
  return getToken(IDLParser::KW_IN, 0);
}


size_t IDLParser::Init_param_attributeContext::getRuleIndex() const {
  return IDLParser::RuleInit_param_attribute;
}

antlrcpp::Any IDLParser::Init_param_attributeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<IDLVisitor*>(visitor))
    return parserVisitor->visitInit_param_attribute(this);
  else
    return visitor->visitChildren(this);
}

IDLParser::Init_param_attributeContext* IDLParser::init_param_attribute() {
  Init_param_attributeContext *_localctx = _tracker.createInstance<Init_param_attributeContext>(_ctx, getState());
  enterRule(_localctx, 50, IDLParser::RuleInit_param_attribute);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(511);
    match(IDLParser::KW_IN);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Const_declContext ------------------------------------------------------------------

IDLParser::Const_declContext::Const_declContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* IDLParser::Const_declContext::KW_CONST() {
  return getToken(IDLParser::KW_CONST, 0);
}

IDLParser::Const_typeContext* IDLParser::Const_declContext::const_type() {
  return getRuleContext<IDLParser::Const_typeContext>(0);
}

tree::TerminalNode* IDLParser::Const_declContext::ID() {
  return getToken(IDLParser::ID, 0);
}

tree::TerminalNode* IDLParser::Const_declContext::EQUAL() {
  return getToken(IDLParser::EQUAL, 0);
}

IDLParser::Const_expContext* IDLParser::Const_declContext::const_exp() {
  return getRuleContext<IDLParser::Const_expContext>(0);
}


size_t IDLParser::Const_declContext::getRuleIndex() const {
  return IDLParser::RuleConst_decl;
}

antlrcpp::Any IDLParser::Const_declContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<IDLVisitor*>(visitor))
    return parserVisitor->visitConst_decl(this);
  else
    return visitor->visitChildren(this);
}

IDLParser::Const_declContext* IDLParser::const_decl() {
  Const_declContext *_localctx = _tracker.createInstance<Const_declContext>(_ctx, getState());
  enterRule(_localctx, 52, IDLParser::RuleConst_decl);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(513);
    match(IDLParser::KW_CONST);
    setState(514);
    const_type();
    setState(515);
    match(IDLParser::ID);
    setState(516);
    match(IDLParser::EQUAL);
    setState(517);
    const_exp();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Const_typeContext ------------------------------------------------------------------

IDLParser::Const_typeContext::Const_typeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

IDLParser::Integer_typeContext* IDLParser::Const_typeContext::integer_type() {
  return getRuleContext<IDLParser::Integer_typeContext>(0);
}

IDLParser::Char_typeContext* IDLParser::Const_typeContext::char_type() {
  return getRuleContext<IDLParser::Char_typeContext>(0);
}

IDLParser::Wide_char_typeContext* IDLParser::Const_typeContext::wide_char_type() {
  return getRuleContext<IDLParser::Wide_char_typeContext>(0);
}

IDLParser::Boolean_typeContext* IDLParser::Const_typeContext::boolean_type() {
  return getRuleContext<IDLParser::Boolean_typeContext>(0);
}

IDLParser::Floating_pt_typeContext* IDLParser::Const_typeContext::floating_pt_type() {
  return getRuleContext<IDLParser::Floating_pt_typeContext>(0);
}

IDLParser::String_typeContext* IDLParser::Const_typeContext::string_type() {
  return getRuleContext<IDLParser::String_typeContext>(0);
}

IDLParser::Wide_string_typeContext* IDLParser::Const_typeContext::wide_string_type() {
  return getRuleContext<IDLParser::Wide_string_typeContext>(0);
}

IDLParser::Fixed_pt_const_typeContext* IDLParser::Const_typeContext::fixed_pt_const_type() {
  return getRuleContext<IDLParser::Fixed_pt_const_typeContext>(0);
}

IDLParser::Scoped_nameContext* IDLParser::Const_typeContext::scoped_name() {
  return getRuleContext<IDLParser::Scoped_nameContext>(0);
}

IDLParser::Octet_typeContext* IDLParser::Const_typeContext::octet_type() {
  return getRuleContext<IDLParser::Octet_typeContext>(0);
}


size_t IDLParser::Const_typeContext::getRuleIndex() const {
  return IDLParser::RuleConst_type;
}

antlrcpp::Any IDLParser::Const_typeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<IDLVisitor*>(visitor))
    return parserVisitor->visitConst_type(this);
  else
    return visitor->visitChildren(this);
}

IDLParser::Const_typeContext* IDLParser::const_type() {
  Const_typeContext *_localctx = _tracker.createInstance<Const_typeContext>(_ctx, getState());
  enterRule(_localctx, 54, IDLParser::RuleConst_type);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(529);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 27, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(519);
      integer_type();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(520);
      char_type();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(521);
      wide_char_type();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(522);
      boolean_type();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(523);
      floating_pt_type();
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(524);
      string_type();
      break;
    }

    case 7: {
      enterOuterAlt(_localctx, 7);
      setState(525);
      wide_string_type();
      break;
    }

    case 8: {
      enterOuterAlt(_localctx, 8);
      setState(526);
      fixed_pt_const_type();
      break;
    }

    case 9: {
      enterOuterAlt(_localctx, 9);
      setState(527);
      scoped_name();
      break;
    }

    case 10: {
      enterOuterAlt(_localctx, 10);
      setState(528);
      octet_type();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Const_expContext ------------------------------------------------------------------

IDLParser::Const_expContext::Const_expContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

IDLParser::Or_exprContext* IDLParser::Const_expContext::or_expr() {
  return getRuleContext<IDLParser::Or_exprContext>(0);
}


size_t IDLParser::Const_expContext::getRuleIndex() const {
  return IDLParser::RuleConst_exp;
}

antlrcpp::Any IDLParser::Const_expContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<IDLVisitor*>(visitor))
    return parserVisitor->visitConst_exp(this);
  else
    return visitor->visitChildren(this);
}

IDLParser::Const_expContext* IDLParser::const_exp() {
  Const_expContext *_localctx = _tracker.createInstance<Const_expContext>(_ctx, getState());
  enterRule(_localctx, 56, IDLParser::RuleConst_exp);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(531);
    or_expr();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Or_exprContext ------------------------------------------------------------------

IDLParser::Or_exprContext::Or_exprContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<IDLParser::Xor_exprContext *> IDLParser::Or_exprContext::xor_expr() {
  return getRuleContexts<IDLParser::Xor_exprContext>();
}

IDLParser::Xor_exprContext* IDLParser::Or_exprContext::xor_expr(size_t i) {
  return getRuleContext<IDLParser::Xor_exprContext>(i);
}

std::vector<tree::TerminalNode *> IDLParser::Or_exprContext::PIPE() {
  return getTokens(IDLParser::PIPE);
}

tree::TerminalNode* IDLParser::Or_exprContext::PIPE(size_t i) {
  return getToken(IDLParser::PIPE, i);
}


size_t IDLParser::Or_exprContext::getRuleIndex() const {
  return IDLParser::RuleOr_expr;
}

antlrcpp::Any IDLParser::Or_exprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<IDLVisitor*>(visitor))
    return parserVisitor->visitOr_expr(this);
  else
    return visitor->visitChildren(this);
}

IDLParser::Or_exprContext* IDLParser::or_expr() {
  Or_exprContext *_localctx = _tracker.createInstance<Or_exprContext>(_ctx, getState());
  enterRule(_localctx, 58, IDLParser::RuleOr_expr);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(533);
    xor_expr();
    setState(538);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == IDLParser::PIPE) {
      setState(534);
      match(IDLParser::PIPE);
      setState(535);
      xor_expr();
      setState(540);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Xor_exprContext ------------------------------------------------------------------

IDLParser::Xor_exprContext::Xor_exprContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<IDLParser::And_exprContext *> IDLParser::Xor_exprContext::and_expr() {
  return getRuleContexts<IDLParser::And_exprContext>();
}

IDLParser::And_exprContext* IDLParser::Xor_exprContext::and_expr(size_t i) {
  return getRuleContext<IDLParser::And_exprContext>(i);
}

std::vector<tree::TerminalNode *> IDLParser::Xor_exprContext::CARET() {
  return getTokens(IDLParser::CARET);
}

tree::TerminalNode* IDLParser::Xor_exprContext::CARET(size_t i) {
  return getToken(IDLParser::CARET, i);
}


size_t IDLParser::Xor_exprContext::getRuleIndex() const {
  return IDLParser::RuleXor_expr;
}

antlrcpp::Any IDLParser::Xor_exprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<IDLVisitor*>(visitor))
    return parserVisitor->visitXor_expr(this);
  else
    return visitor->visitChildren(this);
}

IDLParser::Xor_exprContext* IDLParser::xor_expr() {
  Xor_exprContext *_localctx = _tracker.createInstance<Xor_exprContext>(_ctx, getState());
  enterRule(_localctx, 60, IDLParser::RuleXor_expr);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(541);
    and_expr();
    setState(546);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == IDLParser::CARET) {
      setState(542);
      match(IDLParser::CARET);
      setState(543);
      and_expr();
      setState(548);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- And_exprContext ------------------------------------------------------------------

IDLParser::And_exprContext::And_exprContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<IDLParser::Shift_exprContext *> IDLParser::And_exprContext::shift_expr() {
  return getRuleContexts<IDLParser::Shift_exprContext>();
}

IDLParser::Shift_exprContext* IDLParser::And_exprContext::shift_expr(size_t i) {
  return getRuleContext<IDLParser::Shift_exprContext>(i);
}

std::vector<tree::TerminalNode *> IDLParser::And_exprContext::AMPERSAND() {
  return getTokens(IDLParser::AMPERSAND);
}

tree::TerminalNode* IDLParser::And_exprContext::AMPERSAND(size_t i) {
  return getToken(IDLParser::AMPERSAND, i);
}


size_t IDLParser::And_exprContext::getRuleIndex() const {
  return IDLParser::RuleAnd_expr;
}

antlrcpp::Any IDLParser::And_exprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<IDLVisitor*>(visitor))
    return parserVisitor->visitAnd_expr(this);
  else
    return visitor->visitChildren(this);
}

IDLParser::And_exprContext* IDLParser::and_expr() {
  And_exprContext *_localctx = _tracker.createInstance<And_exprContext>(_ctx, getState());
  enterRule(_localctx, 62, IDLParser::RuleAnd_expr);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(549);
    shift_expr();
    setState(554);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == IDLParser::AMPERSAND) {
      setState(550);
      match(IDLParser::AMPERSAND);
      setState(551);
      shift_expr();
      setState(556);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Shift_exprContext ------------------------------------------------------------------

IDLParser::Shift_exprContext::Shift_exprContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<IDLParser::Add_exprContext *> IDLParser::Shift_exprContext::add_expr() {
  return getRuleContexts<IDLParser::Add_exprContext>();
}

IDLParser::Add_exprContext* IDLParser::Shift_exprContext::add_expr(size_t i) {
  return getRuleContext<IDLParser::Add_exprContext>(i);
}

std::vector<tree::TerminalNode *> IDLParser::Shift_exprContext::RIGHT_SHIFT() {
  return getTokens(IDLParser::RIGHT_SHIFT);
}

tree::TerminalNode* IDLParser::Shift_exprContext::RIGHT_SHIFT(size_t i) {
  return getToken(IDLParser::RIGHT_SHIFT, i);
}

std::vector<tree::TerminalNode *> IDLParser::Shift_exprContext::LEFT_SHIFT() {
  return getTokens(IDLParser::LEFT_SHIFT);
}

tree::TerminalNode* IDLParser::Shift_exprContext::LEFT_SHIFT(size_t i) {
  return getToken(IDLParser::LEFT_SHIFT, i);
}


size_t IDLParser::Shift_exprContext::getRuleIndex() const {
  return IDLParser::RuleShift_expr;
}

antlrcpp::Any IDLParser::Shift_exprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<IDLVisitor*>(visitor))
    return parserVisitor->visitShift_expr(this);
  else
    return visitor->visitChildren(this);
}

IDLParser::Shift_exprContext* IDLParser::shift_expr() {
  Shift_exprContext *_localctx = _tracker.createInstance<Shift_exprContext>(_ctx, getState());
  enterRule(_localctx, 64, IDLParser::RuleShift_expr);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(557);
    add_expr();
    setState(562);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == IDLParser::RIGHT_SHIFT

    || _la == IDLParser::LEFT_SHIFT) {
      setState(558);
      _la = _input->LA(1);
      if (!(_la == IDLParser::RIGHT_SHIFT

      || _la == IDLParser::LEFT_SHIFT)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(559);
      add_expr();
      setState(564);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Add_exprContext ------------------------------------------------------------------

IDLParser::Add_exprContext::Add_exprContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<IDLParser::Mult_exprContext *> IDLParser::Add_exprContext::mult_expr() {
  return getRuleContexts<IDLParser::Mult_exprContext>();
}

IDLParser::Mult_exprContext* IDLParser::Add_exprContext::mult_expr(size_t i) {
  return getRuleContext<IDLParser::Mult_exprContext>(i);
}

std::vector<tree::TerminalNode *> IDLParser::Add_exprContext::PLUS() {
  return getTokens(IDLParser::PLUS);
}

tree::TerminalNode* IDLParser::Add_exprContext::PLUS(size_t i) {
  return getToken(IDLParser::PLUS, i);
}

std::vector<tree::TerminalNode *> IDLParser::Add_exprContext::MINUS() {
  return getTokens(IDLParser::MINUS);
}

tree::TerminalNode* IDLParser::Add_exprContext::MINUS(size_t i) {
  return getToken(IDLParser::MINUS, i);
}


size_t IDLParser::Add_exprContext::getRuleIndex() const {
  return IDLParser::RuleAdd_expr;
}

antlrcpp::Any IDLParser::Add_exprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<IDLVisitor*>(visitor))
    return parserVisitor->visitAdd_expr(this);
  else
    return visitor->visitChildren(this);
}

IDLParser::Add_exprContext* IDLParser::add_expr() {
  Add_exprContext *_localctx = _tracker.createInstance<Add_exprContext>(_ctx, getState());
  enterRule(_localctx, 66, IDLParser::RuleAdd_expr);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(565);
    mult_expr();
    setState(570);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == IDLParser::PLUS

    || _la == IDLParser::MINUS) {
      setState(566);
      _la = _input->LA(1);
      if (!(_la == IDLParser::PLUS

      || _la == IDLParser::MINUS)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(567);
      mult_expr();
      setState(572);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Mult_exprContext ------------------------------------------------------------------

IDLParser::Mult_exprContext::Mult_exprContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<IDLParser::Unary_exprContext *> IDLParser::Mult_exprContext::unary_expr() {
  return getRuleContexts<IDLParser::Unary_exprContext>();
}

IDLParser::Unary_exprContext* IDLParser::Mult_exprContext::unary_expr(size_t i) {
  return getRuleContext<IDLParser::Unary_exprContext>(i);
}

std::vector<tree::TerminalNode *> IDLParser::Mult_exprContext::SLASH() {
  return getTokens(IDLParser::SLASH);
}

tree::TerminalNode* IDLParser::Mult_exprContext::SLASH(size_t i) {
  return getToken(IDLParser::SLASH, i);
}

std::vector<tree::TerminalNode *> IDLParser::Mult_exprContext::PERCENT() {
  return getTokens(IDLParser::PERCENT);
}

tree::TerminalNode* IDLParser::Mult_exprContext::PERCENT(size_t i) {
  return getToken(IDLParser::PERCENT, i);
}


size_t IDLParser::Mult_exprContext::getRuleIndex() const {
  return IDLParser::RuleMult_expr;
}

antlrcpp::Any IDLParser::Mult_exprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<IDLVisitor*>(visitor))
    return parserVisitor->visitMult_expr(this);
  else
    return visitor->visitChildren(this);
}

IDLParser::Mult_exprContext* IDLParser::mult_expr() {
  Mult_exprContext *_localctx = _tracker.createInstance<Mult_exprContext>(_ctx, getState());
  enterRule(_localctx, 68, IDLParser::RuleMult_expr);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(573);
    unary_expr();
    setState(578);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << IDLParser::SLASH)
      | (1ULL << IDLParser::STAR)
      | (1ULL << IDLParser::PERCENT))) != 0)) {
      setState(574);
      _la = _input->LA(1);
      if (!((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << IDLParser::SLASH)
        | (1ULL << IDLParser::STAR)
        | (1ULL << IDLParser::PERCENT))) != 0))) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(575);
      unary_expr();
      setState(580);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Unary_exprContext ------------------------------------------------------------------

IDLParser::Unary_exprContext::Unary_exprContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

IDLParser::Unary_operatorContext* IDLParser::Unary_exprContext::unary_operator() {
  return getRuleContext<IDLParser::Unary_operatorContext>(0);
}

IDLParser::Primary_exprContext* IDLParser::Unary_exprContext::primary_expr() {
  return getRuleContext<IDLParser::Primary_exprContext>(0);
}


size_t IDLParser::Unary_exprContext::getRuleIndex() const {
  return IDLParser::RuleUnary_expr;
}

antlrcpp::Any IDLParser::Unary_exprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<IDLVisitor*>(visitor))
    return parserVisitor->visitUnary_expr(this);
  else
    return visitor->visitChildren(this);
}

IDLParser::Unary_exprContext* IDLParser::unary_expr() {
  Unary_exprContext *_localctx = _tracker.createInstance<Unary_exprContext>(_ctx, getState());
  enterRule(_localctx, 70, IDLParser::RuleUnary_expr);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(585);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case IDLParser::TILDE:
      case IDLParser::PLUS:
      case IDLParser::MINUS: {
        enterOuterAlt(_localctx, 1);
        setState(581);
        unary_operator();
        setState(582);
        primary_expr();
        break;
      }

      case IDLParser::INTEGER_LITERAL:
      case IDLParser::HEX_LITERAL:
      case IDLParser::FLOATING_PT_LITERAL:
      case IDLParser::FIXED_PT_LITERAL:
      case IDLParser::WIDE_CHARACTER_LITERAL:
      case IDLParser::CHARACTER_LITERAL:
      case IDLParser::WIDE_STRING_LITERAL:
      case IDLParser::STRING_LITERAL:
      case IDLParser::BOOLEAN_LITERAL:
      case IDLParser::LEFT_BRACKET:
      case IDLParser::DOUBLE_COLON:
      case IDLParser::ID: {
        enterOuterAlt(_localctx, 2);
        setState(584);
        primary_expr();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Unary_operatorContext ------------------------------------------------------------------

IDLParser::Unary_operatorContext::Unary_operatorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* IDLParser::Unary_operatorContext::MINUS() {
  return getToken(IDLParser::MINUS, 0);
}

tree::TerminalNode* IDLParser::Unary_operatorContext::PLUS() {
  return getToken(IDLParser::PLUS, 0);
}

tree::TerminalNode* IDLParser::Unary_operatorContext::TILDE() {
  return getToken(IDLParser::TILDE, 0);
}


size_t IDLParser::Unary_operatorContext::getRuleIndex() const {
  return IDLParser::RuleUnary_operator;
}

antlrcpp::Any IDLParser::Unary_operatorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<IDLVisitor*>(visitor))
    return parserVisitor->visitUnary_operator(this);
  else
    return visitor->visitChildren(this);
}

IDLParser::Unary_operatorContext* IDLParser::unary_operator() {
  Unary_operatorContext *_localctx = _tracker.createInstance<Unary_operatorContext>(_ctx, getState());
  enterRule(_localctx, 72, IDLParser::RuleUnary_operator);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(587);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << IDLParser::TILDE)
      | (1ULL << IDLParser::PLUS)
      | (1ULL << IDLParser::MINUS))) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Primary_exprContext ------------------------------------------------------------------

IDLParser::Primary_exprContext::Primary_exprContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

IDLParser::Scoped_nameContext* IDLParser::Primary_exprContext::scoped_name() {
  return getRuleContext<IDLParser::Scoped_nameContext>(0);
}

IDLParser::LiteralContext* IDLParser::Primary_exprContext::literal() {
  return getRuleContext<IDLParser::LiteralContext>(0);
}

tree::TerminalNode* IDLParser::Primary_exprContext::LEFT_BRACKET() {
  return getToken(IDLParser::LEFT_BRACKET, 0);
}

IDLParser::Const_expContext* IDLParser::Primary_exprContext::const_exp() {
  return getRuleContext<IDLParser::Const_expContext>(0);
}

tree::TerminalNode* IDLParser::Primary_exprContext::RIGHT_BRACKET() {
  return getToken(IDLParser::RIGHT_BRACKET, 0);
}


size_t IDLParser::Primary_exprContext::getRuleIndex() const {
  return IDLParser::RulePrimary_expr;
}

antlrcpp::Any IDLParser::Primary_exprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<IDLVisitor*>(visitor))
    return parserVisitor->visitPrimary_expr(this);
  else
    return visitor->visitChildren(this);
}

IDLParser::Primary_exprContext* IDLParser::primary_expr() {
  Primary_exprContext *_localctx = _tracker.createInstance<Primary_exprContext>(_ctx, getState());
  enterRule(_localctx, 74, IDLParser::RulePrimary_expr);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(595);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case IDLParser::DOUBLE_COLON:
      case IDLParser::ID: {
        enterOuterAlt(_localctx, 1);
        setState(589);
        scoped_name();
        break;
      }

      case IDLParser::INTEGER_LITERAL:
      case IDLParser::HEX_LITERAL:
      case IDLParser::FLOATING_PT_LITERAL:
      case IDLParser::FIXED_PT_LITERAL:
      case IDLParser::WIDE_CHARACTER_LITERAL:
      case IDLParser::CHARACTER_LITERAL:
      case IDLParser::WIDE_STRING_LITERAL:
      case IDLParser::STRING_LITERAL:
      case IDLParser::BOOLEAN_LITERAL: {
        enterOuterAlt(_localctx, 2);
        setState(590);
        literal();
        break;
      }

      case IDLParser::LEFT_BRACKET: {
        enterOuterAlt(_localctx, 3);
        setState(591);
        match(IDLParser::LEFT_BRACKET);
        setState(592);
        const_exp();
        setState(593);
        match(IDLParser::RIGHT_BRACKET);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- LiteralContext ------------------------------------------------------------------

IDLParser::LiteralContext::LiteralContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* IDLParser::LiteralContext::HEX_LITERAL() {
  return getToken(IDLParser::HEX_LITERAL, 0);
}

tree::TerminalNode* IDLParser::LiteralContext::INTEGER_LITERAL() {
  return getToken(IDLParser::INTEGER_LITERAL, 0);
}

tree::TerminalNode* IDLParser::LiteralContext::STRING_LITERAL() {
  return getToken(IDLParser::STRING_LITERAL, 0);
}

tree::TerminalNode* IDLParser::LiteralContext::WIDE_STRING_LITERAL() {
  return getToken(IDLParser::WIDE_STRING_LITERAL, 0);
}

tree::TerminalNode* IDLParser::LiteralContext::CHARACTER_LITERAL() {
  return getToken(IDLParser::CHARACTER_LITERAL, 0);
}

tree::TerminalNode* IDLParser::LiteralContext::WIDE_CHARACTER_LITERAL() {
  return getToken(IDLParser::WIDE_CHARACTER_LITERAL, 0);
}

tree::TerminalNode* IDLParser::LiteralContext::FIXED_PT_LITERAL() {
  return getToken(IDLParser::FIXED_PT_LITERAL, 0);
}

tree::TerminalNode* IDLParser::LiteralContext::FLOATING_PT_LITERAL() {
  return getToken(IDLParser::FLOATING_PT_LITERAL, 0);
}

tree::TerminalNode* IDLParser::LiteralContext::BOOLEAN_LITERAL() {
  return getToken(IDLParser::BOOLEAN_LITERAL, 0);
}


size_t IDLParser::LiteralContext::getRuleIndex() const {
  return IDLParser::RuleLiteral;
}

antlrcpp::Any IDLParser::LiteralContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<IDLVisitor*>(visitor))
    return parserVisitor->visitLiteral(this);
  else
    return visitor->visitChildren(this);
}

IDLParser::LiteralContext* IDLParser::literal() {
  LiteralContext *_localctx = _tracker.createInstance<LiteralContext>(_ctx, getState());
  enterRule(_localctx, 76, IDLParser::RuleLiteral);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(597);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << IDLParser::INTEGER_LITERAL)
      | (1ULL << IDLParser::HEX_LITERAL)
      | (1ULL << IDLParser::FLOATING_PT_LITERAL)
      | (1ULL << IDLParser::FIXED_PT_LITERAL)
      | (1ULL << IDLParser::WIDE_CHARACTER_LITERAL)
      | (1ULL << IDLParser::CHARACTER_LITERAL)
      | (1ULL << IDLParser::WIDE_STRING_LITERAL)
      | (1ULL << IDLParser::STRING_LITERAL)
      | (1ULL << IDLParser::BOOLEAN_LITERAL))) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Positive_int_constContext ------------------------------------------------------------------

IDLParser::Positive_int_constContext::Positive_int_constContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

IDLParser::Const_expContext* IDLParser::Positive_int_constContext::const_exp() {
  return getRuleContext<IDLParser::Const_expContext>(0);
}


size_t IDLParser::Positive_int_constContext::getRuleIndex() const {
  return IDLParser::RulePositive_int_const;
}

antlrcpp::Any IDLParser::Positive_int_constContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<IDLVisitor*>(visitor))
    return parserVisitor->visitPositive_int_const(this);
  else
    return visitor->visitChildren(this);
}

IDLParser::Positive_int_constContext* IDLParser::positive_int_const() {
  Positive_int_constContext *_localctx = _tracker.createInstance<Positive_int_constContext>(_ctx, getState());
  enterRule(_localctx, 78, IDLParser::RulePositive_int_const);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(599);
    const_exp();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Type_declContext ------------------------------------------------------------------

IDLParser::Type_declContext::Type_declContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* IDLParser::Type_declContext::KW_TYPEDEF() {
  return getToken(IDLParser::KW_TYPEDEF, 0);
}

IDLParser::Type_declaratorContext* IDLParser::Type_declContext::type_declarator() {
  return getRuleContext<IDLParser::Type_declaratorContext>(0);
}

IDLParser::Struct_typeContext* IDLParser::Type_declContext::struct_type() {
  return getRuleContext<IDLParser::Struct_typeContext>(0);
}

IDLParser::Union_typeContext* IDLParser::Type_declContext::union_type() {
  return getRuleContext<IDLParser::Union_typeContext>(0);
}

IDLParser::Enum_typeContext* IDLParser::Type_declContext::enum_type() {
  return getRuleContext<IDLParser::Enum_typeContext>(0);
}

tree::TerminalNode* IDLParser::Type_declContext::KW_NATIVE() {
  return getToken(IDLParser::KW_NATIVE, 0);
}

IDLParser::Simple_declaratorContext* IDLParser::Type_declContext::simple_declarator() {
  return getRuleContext<IDLParser::Simple_declaratorContext>(0);
}

IDLParser::Constr_forward_declContext* IDLParser::Type_declContext::constr_forward_decl() {
  return getRuleContext<IDLParser::Constr_forward_declContext>(0);
}


size_t IDLParser::Type_declContext::getRuleIndex() const {
  return IDLParser::RuleType_decl;
}

antlrcpp::Any IDLParser::Type_declContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<IDLVisitor*>(visitor))
    return parserVisitor->visitType_decl(this);
  else
    return visitor->visitChildren(this);
}

IDLParser::Type_declContext* IDLParser::type_decl() {
  Type_declContext *_localctx = _tracker.createInstance<Type_declContext>(_ctx, getState());
  enterRule(_localctx, 80, IDLParser::RuleType_decl);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(609);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 36, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(601);
      match(IDLParser::KW_TYPEDEF);
      setState(602);
      type_declarator();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(603);
      struct_type();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(604);
      union_type();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(605);
      enum_type();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(606);
      match(IDLParser::KW_NATIVE);
      setState(607);
      simple_declarator();
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(608);
      constr_forward_decl();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Type_declaratorContext ------------------------------------------------------------------

IDLParser::Type_declaratorContext::Type_declaratorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

IDLParser::Type_specContext* IDLParser::Type_declaratorContext::type_spec() {
  return getRuleContext<IDLParser::Type_specContext>(0);
}

IDLParser::DeclaratorsContext* IDLParser::Type_declaratorContext::declarators() {
  return getRuleContext<IDLParser::DeclaratorsContext>(0);
}


size_t IDLParser::Type_declaratorContext::getRuleIndex() const {
  return IDLParser::RuleType_declarator;
}

antlrcpp::Any IDLParser::Type_declaratorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<IDLVisitor*>(visitor))
    return parserVisitor->visitType_declarator(this);
  else
    return visitor->visitChildren(this);
}

IDLParser::Type_declaratorContext* IDLParser::type_declarator() {
  Type_declaratorContext *_localctx = _tracker.createInstance<Type_declaratorContext>(_ctx, getState());
  enterRule(_localctx, 82, IDLParser::RuleType_declarator);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(611);
    type_spec();
    setState(612);
    declarators();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Type_specContext ------------------------------------------------------------------

IDLParser::Type_specContext::Type_specContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

IDLParser::Simple_type_specContext* IDLParser::Type_specContext::simple_type_spec() {
  return getRuleContext<IDLParser::Simple_type_specContext>(0);
}

IDLParser::Constr_type_specContext* IDLParser::Type_specContext::constr_type_spec() {
  return getRuleContext<IDLParser::Constr_type_specContext>(0);
}


size_t IDLParser::Type_specContext::getRuleIndex() const {
  return IDLParser::RuleType_spec;
}

antlrcpp::Any IDLParser::Type_specContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<IDLVisitor*>(visitor))
    return parserVisitor->visitType_spec(this);
  else
    return visitor->visitChildren(this);
}

IDLParser::Type_specContext* IDLParser::type_spec() {
  Type_specContext *_localctx = _tracker.createInstance<Type_specContext>(_ctx, getState());
  enterRule(_localctx, 84, IDLParser::RuleType_spec);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(616);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case IDLParser::DOUBLE_COLON:
      case IDLParser::KW_STRING:
      case IDLParser::KW_OCTET:
      case IDLParser::KW_SEQUENCE:
      case IDLParser::KW_WCHAR:
      case IDLParser::KW_SHORT:
      case IDLParser::KW_LONG:
      case IDLParser::KW_WSTRING:
      case IDLParser::KW_VALUEBASE:
      case IDLParser::KW_OBJECT:
      case IDLParser::KW_UNSIGNED:
      case IDLParser::KW_FIXED:
      case IDLParser::KW_ANY:
      case IDLParser::KW_CHAR:
      case IDLParser::KW_FLOAT:
      case IDLParser::KW_BOOLEAN:
      case IDLParser::KW_DOUBLE:
      case IDLParser::ID: {
        enterOuterAlt(_localctx, 1);
        setState(614);
        simple_type_spec();
        break;
      }

      case IDLParser::KW_STRUCT:
      case IDLParser::KW_ENUM:
      case IDLParser::KW_UNION: {
        enterOuterAlt(_localctx, 2);
        setState(615);
        constr_type_spec();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Simple_type_specContext ------------------------------------------------------------------

IDLParser::Simple_type_specContext::Simple_type_specContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

IDLParser::Base_type_specContext* IDLParser::Simple_type_specContext::base_type_spec() {
  return getRuleContext<IDLParser::Base_type_specContext>(0);
}

IDLParser::Template_type_specContext* IDLParser::Simple_type_specContext::template_type_spec() {
  return getRuleContext<IDLParser::Template_type_specContext>(0);
}

IDLParser::Scoped_nameContext* IDLParser::Simple_type_specContext::scoped_name() {
  return getRuleContext<IDLParser::Scoped_nameContext>(0);
}


size_t IDLParser::Simple_type_specContext::getRuleIndex() const {
  return IDLParser::RuleSimple_type_spec;
}

antlrcpp::Any IDLParser::Simple_type_specContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<IDLVisitor*>(visitor))
    return parserVisitor->visitSimple_type_spec(this);
  else
    return visitor->visitChildren(this);
}

IDLParser::Simple_type_specContext* IDLParser::simple_type_spec() {
  Simple_type_specContext *_localctx = _tracker.createInstance<Simple_type_specContext>(_ctx, getState());
  enterRule(_localctx, 86, IDLParser::RuleSimple_type_spec);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(621);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case IDLParser::KW_OCTET:
      case IDLParser::KW_WCHAR:
      case IDLParser::KW_SHORT:
      case IDLParser::KW_LONG:
      case IDLParser::KW_VALUEBASE:
      case IDLParser::KW_OBJECT:
      case IDLParser::KW_UNSIGNED:
      case IDLParser::KW_ANY:
      case IDLParser::KW_CHAR:
      case IDLParser::KW_FLOAT:
      case IDLParser::KW_BOOLEAN:
      case IDLParser::KW_DOUBLE: {
        enterOuterAlt(_localctx, 1);
        setState(618);
        base_type_spec();
        break;
      }

      case IDLParser::KW_STRING:
      case IDLParser::KW_SEQUENCE:
      case IDLParser::KW_WSTRING:
      case IDLParser::KW_FIXED: {
        enterOuterAlt(_localctx, 2);
        setState(619);
        template_type_spec();
        break;
      }

      case IDLParser::DOUBLE_COLON:
      case IDLParser::ID: {
        enterOuterAlt(_localctx, 3);
        setState(620);
        scoped_name();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Base_type_specContext ------------------------------------------------------------------

IDLParser::Base_type_specContext::Base_type_specContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

IDLParser::Floating_pt_typeContext* IDLParser::Base_type_specContext::floating_pt_type() {
  return getRuleContext<IDLParser::Floating_pt_typeContext>(0);
}

IDLParser::Integer_typeContext* IDLParser::Base_type_specContext::integer_type() {
  return getRuleContext<IDLParser::Integer_typeContext>(0);
}

IDLParser::Char_typeContext* IDLParser::Base_type_specContext::char_type() {
  return getRuleContext<IDLParser::Char_typeContext>(0);
}

IDLParser::Wide_char_typeContext* IDLParser::Base_type_specContext::wide_char_type() {
  return getRuleContext<IDLParser::Wide_char_typeContext>(0);
}

IDLParser::Boolean_typeContext* IDLParser::Base_type_specContext::boolean_type() {
  return getRuleContext<IDLParser::Boolean_typeContext>(0);
}

IDLParser::Octet_typeContext* IDLParser::Base_type_specContext::octet_type() {
  return getRuleContext<IDLParser::Octet_typeContext>(0);
}

IDLParser::Any_typeContext* IDLParser::Base_type_specContext::any_type() {
  return getRuleContext<IDLParser::Any_typeContext>(0);
}

IDLParser::Object_typeContext* IDLParser::Base_type_specContext::object_type() {
  return getRuleContext<IDLParser::Object_typeContext>(0);
}

IDLParser::Value_base_typeContext* IDLParser::Base_type_specContext::value_base_type() {
  return getRuleContext<IDLParser::Value_base_typeContext>(0);
}


size_t IDLParser::Base_type_specContext::getRuleIndex() const {
  return IDLParser::RuleBase_type_spec;
}

antlrcpp::Any IDLParser::Base_type_specContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<IDLVisitor*>(visitor))
    return parserVisitor->visitBase_type_spec(this);
  else
    return visitor->visitChildren(this);
}

IDLParser::Base_type_specContext* IDLParser::base_type_spec() {
  Base_type_specContext *_localctx = _tracker.createInstance<Base_type_specContext>(_ctx, getState());
  enterRule(_localctx, 88, IDLParser::RuleBase_type_spec);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(632);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 39, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(623);
      floating_pt_type();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(624);
      integer_type();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(625);
      char_type();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(626);
      wide_char_type();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(627);
      boolean_type();
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(628);
      octet_type();
      break;
    }

    case 7: {
      enterOuterAlt(_localctx, 7);
      setState(629);
      any_type();
      break;
    }

    case 8: {
      enterOuterAlt(_localctx, 8);
      setState(630);
      object_type();
      break;
    }

    case 9: {
      enterOuterAlt(_localctx, 9);
      setState(631);
      value_base_type();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Template_type_specContext ------------------------------------------------------------------

IDLParser::Template_type_specContext::Template_type_specContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

IDLParser::Sequence_typeContext* IDLParser::Template_type_specContext::sequence_type() {
  return getRuleContext<IDLParser::Sequence_typeContext>(0);
}

IDLParser::String_typeContext* IDLParser::Template_type_specContext::string_type() {
  return getRuleContext<IDLParser::String_typeContext>(0);
}

IDLParser::Wide_string_typeContext* IDLParser::Template_type_specContext::wide_string_type() {
  return getRuleContext<IDLParser::Wide_string_typeContext>(0);
}

IDLParser::Fixed_pt_typeContext* IDLParser::Template_type_specContext::fixed_pt_type() {
  return getRuleContext<IDLParser::Fixed_pt_typeContext>(0);
}


size_t IDLParser::Template_type_specContext::getRuleIndex() const {
  return IDLParser::RuleTemplate_type_spec;
}

antlrcpp::Any IDLParser::Template_type_specContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<IDLVisitor*>(visitor))
    return parserVisitor->visitTemplate_type_spec(this);
  else
    return visitor->visitChildren(this);
}

IDLParser::Template_type_specContext* IDLParser::template_type_spec() {
  Template_type_specContext *_localctx = _tracker.createInstance<Template_type_specContext>(_ctx, getState());
  enterRule(_localctx, 90, IDLParser::RuleTemplate_type_spec);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(638);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case IDLParser::KW_SEQUENCE: {
        enterOuterAlt(_localctx, 1);
        setState(634);
        sequence_type();
        break;
      }

      case IDLParser::KW_STRING: {
        enterOuterAlt(_localctx, 2);
        setState(635);
        string_type();
        break;
      }

      case IDLParser::KW_WSTRING: {
        enterOuterAlt(_localctx, 3);
        setState(636);
        wide_string_type();
        break;
      }

      case IDLParser::KW_FIXED: {
        enterOuterAlt(_localctx, 4);
        setState(637);
        fixed_pt_type();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Constr_type_specContext ------------------------------------------------------------------

IDLParser::Constr_type_specContext::Constr_type_specContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

IDLParser::Struct_typeContext* IDLParser::Constr_type_specContext::struct_type() {
  return getRuleContext<IDLParser::Struct_typeContext>(0);
}

IDLParser::Union_typeContext* IDLParser::Constr_type_specContext::union_type() {
  return getRuleContext<IDLParser::Union_typeContext>(0);
}

IDLParser::Enum_typeContext* IDLParser::Constr_type_specContext::enum_type() {
  return getRuleContext<IDLParser::Enum_typeContext>(0);
}


size_t IDLParser::Constr_type_specContext::getRuleIndex() const {
  return IDLParser::RuleConstr_type_spec;
}

antlrcpp::Any IDLParser::Constr_type_specContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<IDLVisitor*>(visitor))
    return parserVisitor->visitConstr_type_spec(this);
  else
    return visitor->visitChildren(this);
}

IDLParser::Constr_type_specContext* IDLParser::constr_type_spec() {
  Constr_type_specContext *_localctx = _tracker.createInstance<Constr_type_specContext>(_ctx, getState());
  enterRule(_localctx, 92, IDLParser::RuleConstr_type_spec);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(643);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case IDLParser::KW_STRUCT: {
        enterOuterAlt(_localctx, 1);
        setState(640);
        struct_type();
        break;
      }

      case IDLParser::KW_UNION: {
        enterOuterAlt(_localctx, 2);
        setState(641);
        union_type();
        break;
      }

      case IDLParser::KW_ENUM: {
        enterOuterAlt(_localctx, 3);
        setState(642);
        enum_type();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DeclaratorsContext ------------------------------------------------------------------

IDLParser::DeclaratorsContext::DeclaratorsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<IDLParser::DeclaratorContext *> IDLParser::DeclaratorsContext::declarator() {
  return getRuleContexts<IDLParser::DeclaratorContext>();
}

IDLParser::DeclaratorContext* IDLParser::DeclaratorsContext::declarator(size_t i) {
  return getRuleContext<IDLParser::DeclaratorContext>(i);
}

std::vector<tree::TerminalNode *> IDLParser::DeclaratorsContext::COMA() {
  return getTokens(IDLParser::COMA);
}

tree::TerminalNode* IDLParser::DeclaratorsContext::COMA(size_t i) {
  return getToken(IDLParser::COMA, i);
}


size_t IDLParser::DeclaratorsContext::getRuleIndex() const {
  return IDLParser::RuleDeclarators;
}

antlrcpp::Any IDLParser::DeclaratorsContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<IDLVisitor*>(visitor))
    return parserVisitor->visitDeclarators(this);
  else
    return visitor->visitChildren(this);
}

IDLParser::DeclaratorsContext* IDLParser::declarators() {
  DeclaratorsContext *_localctx = _tracker.createInstance<DeclaratorsContext>(_ctx, getState());
  enterRule(_localctx, 94, IDLParser::RuleDeclarators);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(645);
    declarator();
    setState(650);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == IDLParser::COMA) {
      setState(646);
      match(IDLParser::COMA);
      setState(647);
      declarator();
      setState(652);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DeclaratorContext ------------------------------------------------------------------

IDLParser::DeclaratorContext::DeclaratorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

IDLParser::Simple_declaratorContext* IDLParser::DeclaratorContext::simple_declarator() {
  return getRuleContext<IDLParser::Simple_declaratorContext>(0);
}

IDLParser::Complex_declaratorContext* IDLParser::DeclaratorContext::complex_declarator() {
  return getRuleContext<IDLParser::Complex_declaratorContext>(0);
}


size_t IDLParser::DeclaratorContext::getRuleIndex() const {
  return IDLParser::RuleDeclarator;
}

antlrcpp::Any IDLParser::DeclaratorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<IDLVisitor*>(visitor))
    return parserVisitor->visitDeclarator(this);
  else
    return visitor->visitChildren(this);
}

IDLParser::DeclaratorContext* IDLParser::declarator() {
  DeclaratorContext *_localctx = _tracker.createInstance<DeclaratorContext>(_ctx, getState());
  enterRule(_localctx, 96, IDLParser::RuleDeclarator);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(655);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 43, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(653);
      simple_declarator();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(654);
      complex_declarator();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Simple_declaratorContext ------------------------------------------------------------------

IDLParser::Simple_declaratorContext::Simple_declaratorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* IDLParser::Simple_declaratorContext::ID() {
  return getToken(IDLParser::ID, 0);
}


size_t IDLParser::Simple_declaratorContext::getRuleIndex() const {
  return IDLParser::RuleSimple_declarator;
}

antlrcpp::Any IDLParser::Simple_declaratorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<IDLVisitor*>(visitor))
    return parserVisitor->visitSimple_declarator(this);
  else
    return visitor->visitChildren(this);
}

IDLParser::Simple_declaratorContext* IDLParser::simple_declarator() {
  Simple_declaratorContext *_localctx = _tracker.createInstance<Simple_declaratorContext>(_ctx, getState());
  enterRule(_localctx, 98, IDLParser::RuleSimple_declarator);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(657);
    match(IDLParser::ID);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Complex_declaratorContext ------------------------------------------------------------------

IDLParser::Complex_declaratorContext::Complex_declaratorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

IDLParser::Array_declaratorContext* IDLParser::Complex_declaratorContext::array_declarator() {
  return getRuleContext<IDLParser::Array_declaratorContext>(0);
}


size_t IDLParser::Complex_declaratorContext::getRuleIndex() const {
  return IDLParser::RuleComplex_declarator;
}

antlrcpp::Any IDLParser::Complex_declaratorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<IDLVisitor*>(visitor))
    return parserVisitor->visitComplex_declarator(this);
  else
    return visitor->visitChildren(this);
}

IDLParser::Complex_declaratorContext* IDLParser::complex_declarator() {
  Complex_declaratorContext *_localctx = _tracker.createInstance<Complex_declaratorContext>(_ctx, getState());
  enterRule(_localctx, 100, IDLParser::RuleComplex_declarator);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(659);
    array_declarator();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Floating_pt_typeContext ------------------------------------------------------------------

IDLParser::Floating_pt_typeContext::Floating_pt_typeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* IDLParser::Floating_pt_typeContext::KW_FLOAT() {
  return getToken(IDLParser::KW_FLOAT, 0);
}

tree::TerminalNode* IDLParser::Floating_pt_typeContext::KW_DOUBLE() {
  return getToken(IDLParser::KW_DOUBLE, 0);
}

tree::TerminalNode* IDLParser::Floating_pt_typeContext::KW_LONG() {
  return getToken(IDLParser::KW_LONG, 0);
}


size_t IDLParser::Floating_pt_typeContext::getRuleIndex() const {
  return IDLParser::RuleFloating_pt_type;
}

antlrcpp::Any IDLParser::Floating_pt_typeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<IDLVisitor*>(visitor))
    return parserVisitor->visitFloating_pt_type(this);
  else
    return visitor->visitChildren(this);
}

IDLParser::Floating_pt_typeContext* IDLParser::floating_pt_type() {
  Floating_pt_typeContext *_localctx = _tracker.createInstance<Floating_pt_typeContext>(_ctx, getState());
  enterRule(_localctx, 102, IDLParser::RuleFloating_pt_type);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(665);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case IDLParser::KW_FLOAT: {
        setState(661);
        match(IDLParser::KW_FLOAT);
        break;
      }

      case IDLParser::KW_DOUBLE: {
        setState(662);
        match(IDLParser::KW_DOUBLE);
        break;
      }

      case IDLParser::KW_LONG: {
        setState(663);
        match(IDLParser::KW_LONG);
        setState(664);
        match(IDLParser::KW_DOUBLE);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Integer_typeContext ------------------------------------------------------------------

IDLParser::Integer_typeContext::Integer_typeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

IDLParser::Signed_intContext* IDLParser::Integer_typeContext::signed_int() {
  return getRuleContext<IDLParser::Signed_intContext>(0);
}

IDLParser::Unsigned_intContext* IDLParser::Integer_typeContext::unsigned_int() {
  return getRuleContext<IDLParser::Unsigned_intContext>(0);
}


size_t IDLParser::Integer_typeContext::getRuleIndex() const {
  return IDLParser::RuleInteger_type;
}

antlrcpp::Any IDLParser::Integer_typeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<IDLVisitor*>(visitor))
    return parserVisitor->visitInteger_type(this);
  else
    return visitor->visitChildren(this);
}

IDLParser::Integer_typeContext* IDLParser::integer_type() {
  Integer_typeContext *_localctx = _tracker.createInstance<Integer_typeContext>(_ctx, getState());
  enterRule(_localctx, 104, IDLParser::RuleInteger_type);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(669);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case IDLParser::KW_SHORT:
      case IDLParser::KW_LONG: {
        enterOuterAlt(_localctx, 1);
        setState(667);
        signed_int();
        break;
      }

      case IDLParser::KW_UNSIGNED: {
        enterOuterAlt(_localctx, 2);
        setState(668);
        unsigned_int();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Signed_intContext ------------------------------------------------------------------

IDLParser::Signed_intContext::Signed_intContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

IDLParser::Signed_short_intContext* IDLParser::Signed_intContext::signed_short_int() {
  return getRuleContext<IDLParser::Signed_short_intContext>(0);
}

IDLParser::Signed_long_intContext* IDLParser::Signed_intContext::signed_long_int() {
  return getRuleContext<IDLParser::Signed_long_intContext>(0);
}

IDLParser::Signed_longlong_intContext* IDLParser::Signed_intContext::signed_longlong_int() {
  return getRuleContext<IDLParser::Signed_longlong_intContext>(0);
}


size_t IDLParser::Signed_intContext::getRuleIndex() const {
  return IDLParser::RuleSigned_int;
}

antlrcpp::Any IDLParser::Signed_intContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<IDLVisitor*>(visitor))
    return parserVisitor->visitSigned_int(this);
  else
    return visitor->visitChildren(this);
}

IDLParser::Signed_intContext* IDLParser::signed_int() {
  Signed_intContext *_localctx = _tracker.createInstance<Signed_intContext>(_ctx, getState());
  enterRule(_localctx, 106, IDLParser::RuleSigned_int);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(674);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 46, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(671);
      signed_short_int();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(672);
      signed_long_int();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(673);
      signed_longlong_int();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Signed_short_intContext ------------------------------------------------------------------

IDLParser::Signed_short_intContext::Signed_short_intContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* IDLParser::Signed_short_intContext::KW_SHORT() {
  return getToken(IDLParser::KW_SHORT, 0);
}


size_t IDLParser::Signed_short_intContext::getRuleIndex() const {
  return IDLParser::RuleSigned_short_int;
}

antlrcpp::Any IDLParser::Signed_short_intContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<IDLVisitor*>(visitor))
    return parserVisitor->visitSigned_short_int(this);
  else
    return visitor->visitChildren(this);
}

IDLParser::Signed_short_intContext* IDLParser::signed_short_int() {
  Signed_short_intContext *_localctx = _tracker.createInstance<Signed_short_intContext>(_ctx, getState());
  enterRule(_localctx, 108, IDLParser::RuleSigned_short_int);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(676);
    match(IDLParser::KW_SHORT);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Signed_long_intContext ------------------------------------------------------------------

IDLParser::Signed_long_intContext::Signed_long_intContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* IDLParser::Signed_long_intContext::KW_LONG() {
  return getToken(IDLParser::KW_LONG, 0);
}


size_t IDLParser::Signed_long_intContext::getRuleIndex() const {
  return IDLParser::RuleSigned_long_int;
}

antlrcpp::Any IDLParser::Signed_long_intContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<IDLVisitor*>(visitor))
    return parserVisitor->visitSigned_long_int(this);
  else
    return visitor->visitChildren(this);
}

IDLParser::Signed_long_intContext* IDLParser::signed_long_int() {
  Signed_long_intContext *_localctx = _tracker.createInstance<Signed_long_intContext>(_ctx, getState());
  enterRule(_localctx, 110, IDLParser::RuleSigned_long_int);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(678);
    match(IDLParser::KW_LONG);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Signed_longlong_intContext ------------------------------------------------------------------

IDLParser::Signed_longlong_intContext::Signed_longlong_intContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> IDLParser::Signed_longlong_intContext::KW_LONG() {
  return getTokens(IDLParser::KW_LONG);
}

tree::TerminalNode* IDLParser::Signed_longlong_intContext::KW_LONG(size_t i) {
  return getToken(IDLParser::KW_LONG, i);
}


size_t IDLParser::Signed_longlong_intContext::getRuleIndex() const {
  return IDLParser::RuleSigned_longlong_int;
}

antlrcpp::Any IDLParser::Signed_longlong_intContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<IDLVisitor*>(visitor))
    return parserVisitor->visitSigned_longlong_int(this);
  else
    return visitor->visitChildren(this);
}

IDLParser::Signed_longlong_intContext* IDLParser::signed_longlong_int() {
  Signed_longlong_intContext *_localctx = _tracker.createInstance<Signed_longlong_intContext>(_ctx, getState());
  enterRule(_localctx, 112, IDLParser::RuleSigned_longlong_int);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(680);
    match(IDLParser::KW_LONG);
    setState(681);
    match(IDLParser::KW_LONG);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Unsigned_intContext ------------------------------------------------------------------

IDLParser::Unsigned_intContext::Unsigned_intContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

IDLParser::Unsigned_short_intContext* IDLParser::Unsigned_intContext::unsigned_short_int() {
  return getRuleContext<IDLParser::Unsigned_short_intContext>(0);
}

IDLParser::Unsigned_long_intContext* IDLParser::Unsigned_intContext::unsigned_long_int() {
  return getRuleContext<IDLParser::Unsigned_long_intContext>(0);
}

IDLParser::Unsigned_longlong_intContext* IDLParser::Unsigned_intContext::unsigned_longlong_int() {
  return getRuleContext<IDLParser::Unsigned_longlong_intContext>(0);
}


size_t IDLParser::Unsigned_intContext::getRuleIndex() const {
  return IDLParser::RuleUnsigned_int;
}

antlrcpp::Any IDLParser::Unsigned_intContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<IDLVisitor*>(visitor))
    return parserVisitor->visitUnsigned_int(this);
  else
    return visitor->visitChildren(this);
}

IDLParser::Unsigned_intContext* IDLParser::unsigned_int() {
  Unsigned_intContext *_localctx = _tracker.createInstance<Unsigned_intContext>(_ctx, getState());
  enterRule(_localctx, 114, IDLParser::RuleUnsigned_int);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(686);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 47, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(683);
      unsigned_short_int();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(684);
      unsigned_long_int();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(685);
      unsigned_longlong_int();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Unsigned_short_intContext ------------------------------------------------------------------

IDLParser::Unsigned_short_intContext::Unsigned_short_intContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* IDLParser::Unsigned_short_intContext::KW_UNSIGNED() {
  return getToken(IDLParser::KW_UNSIGNED, 0);
}

tree::TerminalNode* IDLParser::Unsigned_short_intContext::KW_SHORT() {
  return getToken(IDLParser::KW_SHORT, 0);
}


size_t IDLParser::Unsigned_short_intContext::getRuleIndex() const {
  return IDLParser::RuleUnsigned_short_int;
}

antlrcpp::Any IDLParser::Unsigned_short_intContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<IDLVisitor*>(visitor))
    return parserVisitor->visitUnsigned_short_int(this);
  else
    return visitor->visitChildren(this);
}

IDLParser::Unsigned_short_intContext* IDLParser::unsigned_short_int() {
  Unsigned_short_intContext *_localctx = _tracker.createInstance<Unsigned_short_intContext>(_ctx, getState());
  enterRule(_localctx, 116, IDLParser::RuleUnsigned_short_int);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(688);
    match(IDLParser::KW_UNSIGNED);
    setState(689);
    match(IDLParser::KW_SHORT);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Unsigned_long_intContext ------------------------------------------------------------------

IDLParser::Unsigned_long_intContext::Unsigned_long_intContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* IDLParser::Unsigned_long_intContext::KW_UNSIGNED() {
  return getToken(IDLParser::KW_UNSIGNED, 0);
}

tree::TerminalNode* IDLParser::Unsigned_long_intContext::KW_LONG() {
  return getToken(IDLParser::KW_LONG, 0);
}


size_t IDLParser::Unsigned_long_intContext::getRuleIndex() const {
  return IDLParser::RuleUnsigned_long_int;
}

antlrcpp::Any IDLParser::Unsigned_long_intContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<IDLVisitor*>(visitor))
    return parserVisitor->visitUnsigned_long_int(this);
  else
    return visitor->visitChildren(this);
}

IDLParser::Unsigned_long_intContext* IDLParser::unsigned_long_int() {
  Unsigned_long_intContext *_localctx = _tracker.createInstance<Unsigned_long_intContext>(_ctx, getState());
  enterRule(_localctx, 118, IDLParser::RuleUnsigned_long_int);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(691);
    match(IDLParser::KW_UNSIGNED);
    setState(692);
    match(IDLParser::KW_LONG);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Unsigned_longlong_intContext ------------------------------------------------------------------

IDLParser::Unsigned_longlong_intContext::Unsigned_longlong_intContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* IDLParser::Unsigned_longlong_intContext::KW_UNSIGNED() {
  return getToken(IDLParser::KW_UNSIGNED, 0);
}

std::vector<tree::TerminalNode *> IDLParser::Unsigned_longlong_intContext::KW_LONG() {
  return getTokens(IDLParser::KW_LONG);
}

tree::TerminalNode* IDLParser::Unsigned_longlong_intContext::KW_LONG(size_t i) {
  return getToken(IDLParser::KW_LONG, i);
}


size_t IDLParser::Unsigned_longlong_intContext::getRuleIndex() const {
  return IDLParser::RuleUnsigned_longlong_int;
}

antlrcpp::Any IDLParser::Unsigned_longlong_intContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<IDLVisitor*>(visitor))
    return parserVisitor->visitUnsigned_longlong_int(this);
  else
    return visitor->visitChildren(this);
}

IDLParser::Unsigned_longlong_intContext* IDLParser::unsigned_longlong_int() {
  Unsigned_longlong_intContext *_localctx = _tracker.createInstance<Unsigned_longlong_intContext>(_ctx, getState());
  enterRule(_localctx, 120, IDLParser::RuleUnsigned_longlong_int);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(694);
    match(IDLParser::KW_UNSIGNED);
    setState(695);
    match(IDLParser::KW_LONG);
    setState(696);
    match(IDLParser::KW_LONG);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Char_typeContext ------------------------------------------------------------------

IDLParser::Char_typeContext::Char_typeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* IDLParser::Char_typeContext::KW_CHAR() {
  return getToken(IDLParser::KW_CHAR, 0);
}


size_t IDLParser::Char_typeContext::getRuleIndex() const {
  return IDLParser::RuleChar_type;
}

antlrcpp::Any IDLParser::Char_typeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<IDLVisitor*>(visitor))
    return parserVisitor->visitChar_type(this);
  else
    return visitor->visitChildren(this);
}

IDLParser::Char_typeContext* IDLParser::char_type() {
  Char_typeContext *_localctx = _tracker.createInstance<Char_typeContext>(_ctx, getState());
  enterRule(_localctx, 122, IDLParser::RuleChar_type);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(698);
    match(IDLParser::KW_CHAR);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Wide_char_typeContext ------------------------------------------------------------------

IDLParser::Wide_char_typeContext::Wide_char_typeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* IDLParser::Wide_char_typeContext::KW_WCHAR() {
  return getToken(IDLParser::KW_WCHAR, 0);
}


size_t IDLParser::Wide_char_typeContext::getRuleIndex() const {
  return IDLParser::RuleWide_char_type;
}

antlrcpp::Any IDLParser::Wide_char_typeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<IDLVisitor*>(visitor))
    return parserVisitor->visitWide_char_type(this);
  else
    return visitor->visitChildren(this);
}

IDLParser::Wide_char_typeContext* IDLParser::wide_char_type() {
  Wide_char_typeContext *_localctx = _tracker.createInstance<Wide_char_typeContext>(_ctx, getState());
  enterRule(_localctx, 124, IDLParser::RuleWide_char_type);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(700);
    match(IDLParser::KW_WCHAR);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Boolean_typeContext ------------------------------------------------------------------

IDLParser::Boolean_typeContext::Boolean_typeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* IDLParser::Boolean_typeContext::KW_BOOLEAN() {
  return getToken(IDLParser::KW_BOOLEAN, 0);
}


size_t IDLParser::Boolean_typeContext::getRuleIndex() const {
  return IDLParser::RuleBoolean_type;
}

antlrcpp::Any IDLParser::Boolean_typeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<IDLVisitor*>(visitor))
    return parserVisitor->visitBoolean_type(this);
  else
    return visitor->visitChildren(this);
}

IDLParser::Boolean_typeContext* IDLParser::boolean_type() {
  Boolean_typeContext *_localctx = _tracker.createInstance<Boolean_typeContext>(_ctx, getState());
  enterRule(_localctx, 126, IDLParser::RuleBoolean_type);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(702);
    match(IDLParser::KW_BOOLEAN);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Octet_typeContext ------------------------------------------------------------------

IDLParser::Octet_typeContext::Octet_typeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* IDLParser::Octet_typeContext::KW_OCTET() {
  return getToken(IDLParser::KW_OCTET, 0);
}


size_t IDLParser::Octet_typeContext::getRuleIndex() const {
  return IDLParser::RuleOctet_type;
}

antlrcpp::Any IDLParser::Octet_typeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<IDLVisitor*>(visitor))
    return parserVisitor->visitOctet_type(this);
  else
    return visitor->visitChildren(this);
}

IDLParser::Octet_typeContext* IDLParser::octet_type() {
  Octet_typeContext *_localctx = _tracker.createInstance<Octet_typeContext>(_ctx, getState());
  enterRule(_localctx, 128, IDLParser::RuleOctet_type);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(704);
    match(IDLParser::KW_OCTET);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Any_typeContext ------------------------------------------------------------------

IDLParser::Any_typeContext::Any_typeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* IDLParser::Any_typeContext::KW_ANY() {
  return getToken(IDLParser::KW_ANY, 0);
}


size_t IDLParser::Any_typeContext::getRuleIndex() const {
  return IDLParser::RuleAny_type;
}

antlrcpp::Any IDLParser::Any_typeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<IDLVisitor*>(visitor))
    return parserVisitor->visitAny_type(this);
  else
    return visitor->visitChildren(this);
}

IDLParser::Any_typeContext* IDLParser::any_type() {
  Any_typeContext *_localctx = _tracker.createInstance<Any_typeContext>(_ctx, getState());
  enterRule(_localctx, 130, IDLParser::RuleAny_type);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(706);
    match(IDLParser::KW_ANY);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Object_typeContext ------------------------------------------------------------------

IDLParser::Object_typeContext::Object_typeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* IDLParser::Object_typeContext::KW_OBJECT() {
  return getToken(IDLParser::KW_OBJECT, 0);
}


size_t IDLParser::Object_typeContext::getRuleIndex() const {
  return IDLParser::RuleObject_type;
}

antlrcpp::Any IDLParser::Object_typeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<IDLVisitor*>(visitor))
    return parserVisitor->visitObject_type(this);
  else
    return visitor->visitChildren(this);
}

IDLParser::Object_typeContext* IDLParser::object_type() {
  Object_typeContext *_localctx = _tracker.createInstance<Object_typeContext>(_ctx, getState());
  enterRule(_localctx, 132, IDLParser::RuleObject_type);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(708);
    match(IDLParser::KW_OBJECT);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Struct_typeContext ------------------------------------------------------------------

IDLParser::Struct_typeContext::Struct_typeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* IDLParser::Struct_typeContext::KW_STRUCT() {
  return getToken(IDLParser::KW_STRUCT, 0);
}

tree::TerminalNode* IDLParser::Struct_typeContext::ID() {
  return getToken(IDLParser::ID, 0);
}

tree::TerminalNode* IDLParser::Struct_typeContext::LEFT_BRACE() {
  return getToken(IDLParser::LEFT_BRACE, 0);
}

IDLParser::Member_listContext* IDLParser::Struct_typeContext::member_list() {
  return getRuleContext<IDLParser::Member_listContext>(0);
}

tree::TerminalNode* IDLParser::Struct_typeContext::RIGHT_BRACE() {
  return getToken(IDLParser::RIGHT_BRACE, 0);
}


size_t IDLParser::Struct_typeContext::getRuleIndex() const {
  return IDLParser::RuleStruct_type;
}

antlrcpp::Any IDLParser::Struct_typeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<IDLVisitor*>(visitor))
    return parserVisitor->visitStruct_type(this);
  else
    return visitor->visitChildren(this);
}

IDLParser::Struct_typeContext* IDLParser::struct_type() {
  Struct_typeContext *_localctx = _tracker.createInstance<Struct_typeContext>(_ctx, getState());
  enterRule(_localctx, 134, IDLParser::RuleStruct_type);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(710);
    match(IDLParser::KW_STRUCT);
    setState(711);
    match(IDLParser::ID);
    setState(712);
    match(IDLParser::LEFT_BRACE);
    setState(713);
    member_list();
    setState(714);
    match(IDLParser::RIGHT_BRACE);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Member_listContext ------------------------------------------------------------------

IDLParser::Member_listContext::Member_listContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<IDLParser::MemberContext *> IDLParser::Member_listContext::member() {
  return getRuleContexts<IDLParser::MemberContext>();
}

IDLParser::MemberContext* IDLParser::Member_listContext::member(size_t i) {
  return getRuleContext<IDLParser::MemberContext>(i);
}


size_t IDLParser::Member_listContext::getRuleIndex() const {
  return IDLParser::RuleMember_list;
}

antlrcpp::Any IDLParser::Member_listContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<IDLVisitor*>(visitor))
    return parserVisitor->visitMember_list(this);
  else
    return visitor->visitChildren(this);
}

IDLParser::Member_listContext* IDLParser::member_list() {
  Member_listContext *_localctx = _tracker.createInstance<Member_listContext>(_ctx, getState());
  enterRule(_localctx, 136, IDLParser::RuleMember_list);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(717); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(716);
      member();
      setState(719); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << IDLParser::DOUBLE_COLON)
      | (1ULL << IDLParser::KW_STRING)
      | (1ULL << IDLParser::KW_OCTET)
      | (1ULL << IDLParser::KW_SEQUENCE)
      | (1ULL << IDLParser::KW_STRUCT)
      | (1ULL << IDLParser::KW_WCHAR)
      | (1ULL << IDLParser::KW_SHORT)
      | (1ULL << IDLParser::KW_LONG)
      | (1ULL << IDLParser::KW_ENUM)
      | (1ULL << IDLParser::KW_WSTRING))) != 0) || ((((_la - 70) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 70)) & ((1ULL << (IDLParser::KW_VALUEBASE - 70))
      | (1ULL << (IDLParser::KW_OBJECT - 70))
      | (1ULL << (IDLParser::KW_UNSIGNED - 70))
      | (1ULL << (IDLParser::KW_FIXED - 70))
      | (1ULL << (IDLParser::KW_UNION - 70))
      | (1ULL << (IDLParser::KW_ANY - 70))
      | (1ULL << (IDLParser::KW_CHAR - 70))
      | (1ULL << (IDLParser::KW_FLOAT - 70))
      | (1ULL << (IDLParser::KW_BOOLEAN - 70))
      | (1ULL << (IDLParser::KW_DOUBLE - 70))
      | (1ULL << (IDLParser::ID - 70)))) != 0));
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- MemberContext ------------------------------------------------------------------

IDLParser::MemberContext::MemberContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

IDLParser::Type_specContext* IDLParser::MemberContext::type_spec() {
  return getRuleContext<IDLParser::Type_specContext>(0);
}

IDLParser::DeclaratorsContext* IDLParser::MemberContext::declarators() {
  return getRuleContext<IDLParser::DeclaratorsContext>(0);
}

tree::TerminalNode* IDLParser::MemberContext::SEMICOLON() {
  return getToken(IDLParser::SEMICOLON, 0);
}


size_t IDLParser::MemberContext::getRuleIndex() const {
  return IDLParser::RuleMember;
}

antlrcpp::Any IDLParser::MemberContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<IDLVisitor*>(visitor))
    return parserVisitor->visitMember(this);
  else
    return visitor->visitChildren(this);
}

IDLParser::MemberContext* IDLParser::member() {
  MemberContext *_localctx = _tracker.createInstance<MemberContext>(_ctx, getState());
  enterRule(_localctx, 138, IDLParser::RuleMember);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(721);
    type_spec();
    setState(722);
    declarators();
    setState(723);
    match(IDLParser::SEMICOLON);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Union_typeContext ------------------------------------------------------------------

IDLParser::Union_typeContext::Union_typeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* IDLParser::Union_typeContext::KW_UNION() {
  return getToken(IDLParser::KW_UNION, 0);
}

tree::TerminalNode* IDLParser::Union_typeContext::ID() {
  return getToken(IDLParser::ID, 0);
}

tree::TerminalNode* IDLParser::Union_typeContext::KW_SWITCH() {
  return getToken(IDLParser::KW_SWITCH, 0);
}

tree::TerminalNode* IDLParser::Union_typeContext::LEFT_BRACKET() {
  return getToken(IDLParser::LEFT_BRACKET, 0);
}

IDLParser::Switch_type_specContext* IDLParser::Union_typeContext::switch_type_spec() {
  return getRuleContext<IDLParser::Switch_type_specContext>(0);
}

tree::TerminalNode* IDLParser::Union_typeContext::RIGHT_BRACKET() {
  return getToken(IDLParser::RIGHT_BRACKET, 0);
}

tree::TerminalNode* IDLParser::Union_typeContext::LEFT_BRACE() {
  return getToken(IDLParser::LEFT_BRACE, 0);
}

IDLParser::Switch_bodyContext* IDLParser::Union_typeContext::switch_body() {
  return getRuleContext<IDLParser::Switch_bodyContext>(0);
}

tree::TerminalNode* IDLParser::Union_typeContext::RIGHT_BRACE() {
  return getToken(IDLParser::RIGHT_BRACE, 0);
}


size_t IDLParser::Union_typeContext::getRuleIndex() const {
  return IDLParser::RuleUnion_type;
}

antlrcpp::Any IDLParser::Union_typeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<IDLVisitor*>(visitor))
    return parserVisitor->visitUnion_type(this);
  else
    return visitor->visitChildren(this);
}

IDLParser::Union_typeContext* IDLParser::union_type() {
  Union_typeContext *_localctx = _tracker.createInstance<Union_typeContext>(_ctx, getState());
  enterRule(_localctx, 140, IDLParser::RuleUnion_type);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(725);
    match(IDLParser::KW_UNION);
    setState(726);
    match(IDLParser::ID);
    setState(727);
    match(IDLParser::KW_SWITCH);
    setState(728);
    match(IDLParser::LEFT_BRACKET);
    setState(729);
    switch_type_spec();
    setState(730);
    match(IDLParser::RIGHT_BRACKET);
    setState(731);
    match(IDLParser::LEFT_BRACE);
    setState(732);
    switch_body();
    setState(733);
    match(IDLParser::RIGHT_BRACE);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Switch_type_specContext ------------------------------------------------------------------

IDLParser::Switch_type_specContext::Switch_type_specContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

IDLParser::Integer_typeContext* IDLParser::Switch_type_specContext::integer_type() {
  return getRuleContext<IDLParser::Integer_typeContext>(0);
}

IDLParser::Char_typeContext* IDLParser::Switch_type_specContext::char_type() {
  return getRuleContext<IDLParser::Char_typeContext>(0);
}

IDLParser::Boolean_typeContext* IDLParser::Switch_type_specContext::boolean_type() {
  return getRuleContext<IDLParser::Boolean_typeContext>(0);
}

IDLParser::Enum_typeContext* IDLParser::Switch_type_specContext::enum_type() {
  return getRuleContext<IDLParser::Enum_typeContext>(0);
}

IDLParser::Scoped_nameContext* IDLParser::Switch_type_specContext::scoped_name() {
  return getRuleContext<IDLParser::Scoped_nameContext>(0);
}


size_t IDLParser::Switch_type_specContext::getRuleIndex() const {
  return IDLParser::RuleSwitch_type_spec;
}

antlrcpp::Any IDLParser::Switch_type_specContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<IDLVisitor*>(visitor))
    return parserVisitor->visitSwitch_type_spec(this);
  else
    return visitor->visitChildren(this);
}

IDLParser::Switch_type_specContext* IDLParser::switch_type_spec() {
  Switch_type_specContext *_localctx = _tracker.createInstance<Switch_type_specContext>(_ctx, getState());
  enterRule(_localctx, 142, IDLParser::RuleSwitch_type_spec);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(740);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case IDLParser::KW_SHORT:
      case IDLParser::KW_LONG:
      case IDLParser::KW_UNSIGNED: {
        enterOuterAlt(_localctx, 1);
        setState(735);
        integer_type();
        break;
      }

      case IDLParser::KW_CHAR: {
        enterOuterAlt(_localctx, 2);
        setState(736);
        char_type();
        break;
      }

      case IDLParser::KW_BOOLEAN: {
        enterOuterAlt(_localctx, 3);
        setState(737);
        boolean_type();
        break;
      }

      case IDLParser::KW_ENUM: {
        enterOuterAlt(_localctx, 4);
        setState(738);
        enum_type();
        break;
      }

      case IDLParser::DOUBLE_COLON:
      case IDLParser::ID: {
        enterOuterAlt(_localctx, 5);
        setState(739);
        scoped_name();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Switch_bodyContext ------------------------------------------------------------------

IDLParser::Switch_bodyContext::Switch_bodyContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<IDLParser::Case_stmtContext *> IDLParser::Switch_bodyContext::case_stmt() {
  return getRuleContexts<IDLParser::Case_stmtContext>();
}

IDLParser::Case_stmtContext* IDLParser::Switch_bodyContext::case_stmt(size_t i) {
  return getRuleContext<IDLParser::Case_stmtContext>(i);
}


size_t IDLParser::Switch_bodyContext::getRuleIndex() const {
  return IDLParser::RuleSwitch_body;
}

antlrcpp::Any IDLParser::Switch_bodyContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<IDLVisitor*>(visitor))
    return parserVisitor->visitSwitch_body(this);
  else
    return visitor->visitChildren(this);
}

IDLParser::Switch_bodyContext* IDLParser::switch_body() {
  Switch_bodyContext *_localctx = _tracker.createInstance<Switch_bodyContext>(_ctx, getState());
  enterRule(_localctx, 144, IDLParser::RuleSwitch_body);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(743); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(742);
      case_stmt();
      setState(745); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while (_la == IDLParser::KW_DEFAULT

    || _la == IDLParser::KW_CASE);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Case_stmtContext ------------------------------------------------------------------

IDLParser::Case_stmtContext::Case_stmtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

IDLParser::Element_specContext* IDLParser::Case_stmtContext::element_spec() {
  return getRuleContext<IDLParser::Element_specContext>(0);
}

tree::TerminalNode* IDLParser::Case_stmtContext::SEMICOLON() {
  return getToken(IDLParser::SEMICOLON, 0);
}

std::vector<IDLParser::Case_labelContext *> IDLParser::Case_stmtContext::case_label() {
  return getRuleContexts<IDLParser::Case_labelContext>();
}

IDLParser::Case_labelContext* IDLParser::Case_stmtContext::case_label(size_t i) {
  return getRuleContext<IDLParser::Case_labelContext>(i);
}


size_t IDLParser::Case_stmtContext::getRuleIndex() const {
  return IDLParser::RuleCase_stmt;
}

antlrcpp::Any IDLParser::Case_stmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<IDLVisitor*>(visitor))
    return parserVisitor->visitCase_stmt(this);
  else
    return visitor->visitChildren(this);
}

IDLParser::Case_stmtContext* IDLParser::case_stmt() {
  Case_stmtContext *_localctx = _tracker.createInstance<Case_stmtContext>(_ctx, getState());
  enterRule(_localctx, 146, IDLParser::RuleCase_stmt);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(748); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(747);
      case_label();
      setState(750); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while (_la == IDLParser::KW_DEFAULT

    || _la == IDLParser::KW_CASE);
    setState(752);
    element_spec();
    setState(753);
    match(IDLParser::SEMICOLON);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Case_labelContext ------------------------------------------------------------------

IDLParser::Case_labelContext::Case_labelContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* IDLParser::Case_labelContext::KW_CASE() {
  return getToken(IDLParser::KW_CASE, 0);
}

IDLParser::Const_expContext* IDLParser::Case_labelContext::const_exp() {
  return getRuleContext<IDLParser::Const_expContext>(0);
}

tree::TerminalNode* IDLParser::Case_labelContext::COLON() {
  return getToken(IDLParser::COLON, 0);
}

tree::TerminalNode* IDLParser::Case_labelContext::KW_DEFAULT() {
  return getToken(IDLParser::KW_DEFAULT, 0);
}


size_t IDLParser::Case_labelContext::getRuleIndex() const {
  return IDLParser::RuleCase_label;
}

antlrcpp::Any IDLParser::Case_labelContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<IDLVisitor*>(visitor))
    return parserVisitor->visitCase_label(this);
  else
    return visitor->visitChildren(this);
}

IDLParser::Case_labelContext* IDLParser::case_label() {
  Case_labelContext *_localctx = _tracker.createInstance<Case_labelContext>(_ctx, getState());
  enterRule(_localctx, 148, IDLParser::RuleCase_label);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(761);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case IDLParser::KW_CASE: {
        enterOuterAlt(_localctx, 1);
        setState(755);
        match(IDLParser::KW_CASE);
        setState(756);
        const_exp();
        setState(757);
        match(IDLParser::COLON);
        break;
      }

      case IDLParser::KW_DEFAULT: {
        enterOuterAlt(_localctx, 2);
        setState(759);
        match(IDLParser::KW_DEFAULT);
        setState(760);
        match(IDLParser::COLON);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Element_specContext ------------------------------------------------------------------

IDLParser::Element_specContext::Element_specContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

IDLParser::Type_specContext* IDLParser::Element_specContext::type_spec() {
  return getRuleContext<IDLParser::Type_specContext>(0);
}

IDLParser::DeclaratorContext* IDLParser::Element_specContext::declarator() {
  return getRuleContext<IDLParser::DeclaratorContext>(0);
}


size_t IDLParser::Element_specContext::getRuleIndex() const {
  return IDLParser::RuleElement_spec;
}

antlrcpp::Any IDLParser::Element_specContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<IDLVisitor*>(visitor))
    return parserVisitor->visitElement_spec(this);
  else
    return visitor->visitChildren(this);
}

IDLParser::Element_specContext* IDLParser::element_spec() {
  Element_specContext *_localctx = _tracker.createInstance<Element_specContext>(_ctx, getState());
  enterRule(_localctx, 150, IDLParser::RuleElement_spec);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(763);
    type_spec();
    setState(764);
    declarator();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Enum_typeContext ------------------------------------------------------------------

IDLParser::Enum_typeContext::Enum_typeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* IDLParser::Enum_typeContext::KW_ENUM() {
  return getToken(IDLParser::KW_ENUM, 0);
}

tree::TerminalNode* IDLParser::Enum_typeContext::ID() {
  return getToken(IDLParser::ID, 0);
}

tree::TerminalNode* IDLParser::Enum_typeContext::LEFT_BRACE() {
  return getToken(IDLParser::LEFT_BRACE, 0);
}

std::vector<IDLParser::EnumeratorContext *> IDLParser::Enum_typeContext::enumerator() {
  return getRuleContexts<IDLParser::EnumeratorContext>();
}

IDLParser::EnumeratorContext* IDLParser::Enum_typeContext::enumerator(size_t i) {
  return getRuleContext<IDLParser::EnumeratorContext>(i);
}

tree::TerminalNode* IDLParser::Enum_typeContext::RIGHT_BRACE() {
  return getToken(IDLParser::RIGHT_BRACE, 0);
}

std::vector<tree::TerminalNode *> IDLParser::Enum_typeContext::COMA() {
  return getTokens(IDLParser::COMA);
}

tree::TerminalNode* IDLParser::Enum_typeContext::COMA(size_t i) {
  return getToken(IDLParser::COMA, i);
}


size_t IDLParser::Enum_typeContext::getRuleIndex() const {
  return IDLParser::RuleEnum_type;
}

antlrcpp::Any IDLParser::Enum_typeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<IDLVisitor*>(visitor))
    return parserVisitor->visitEnum_type(this);
  else
    return visitor->visitChildren(this);
}

IDLParser::Enum_typeContext* IDLParser::enum_type() {
  Enum_typeContext *_localctx = _tracker.createInstance<Enum_typeContext>(_ctx, getState());
  enterRule(_localctx, 152, IDLParser::RuleEnum_type);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(766);
    match(IDLParser::KW_ENUM);
    setState(767);
    match(IDLParser::ID);
    setState(768);
    match(IDLParser::LEFT_BRACE);
    setState(769);
    enumerator();
    setState(774);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == IDLParser::COMA) {
      setState(770);
      match(IDLParser::COMA);
      setState(771);
      enumerator();
      setState(776);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(777);
    match(IDLParser::RIGHT_BRACE);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- EnumeratorContext ------------------------------------------------------------------

IDLParser::EnumeratorContext::EnumeratorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* IDLParser::EnumeratorContext::ID() {
  return getToken(IDLParser::ID, 0);
}


size_t IDLParser::EnumeratorContext::getRuleIndex() const {
  return IDLParser::RuleEnumerator;
}

antlrcpp::Any IDLParser::EnumeratorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<IDLVisitor*>(visitor))
    return parserVisitor->visitEnumerator(this);
  else
    return visitor->visitChildren(this);
}

IDLParser::EnumeratorContext* IDLParser::enumerator() {
  EnumeratorContext *_localctx = _tracker.createInstance<EnumeratorContext>(_ctx, getState());
  enterRule(_localctx, 154, IDLParser::RuleEnumerator);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(779);
    match(IDLParser::ID);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Sequence_typeContext ------------------------------------------------------------------

IDLParser::Sequence_typeContext::Sequence_typeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* IDLParser::Sequence_typeContext::KW_SEQUENCE() {
  return getToken(IDLParser::KW_SEQUENCE, 0);
}

tree::TerminalNode* IDLParser::Sequence_typeContext::LEFT_ANG_BRACKET() {
  return getToken(IDLParser::LEFT_ANG_BRACKET, 0);
}

IDLParser::Simple_type_specContext* IDLParser::Sequence_typeContext::simple_type_spec() {
  return getRuleContext<IDLParser::Simple_type_specContext>(0);
}

tree::TerminalNode* IDLParser::Sequence_typeContext::COMA() {
  return getToken(IDLParser::COMA, 0);
}

IDLParser::Positive_int_constContext* IDLParser::Sequence_typeContext::positive_int_const() {
  return getRuleContext<IDLParser::Positive_int_constContext>(0);
}

tree::TerminalNode* IDLParser::Sequence_typeContext::RIGHT_ANG_BRACKET() {
  return getToken(IDLParser::RIGHT_ANG_BRACKET, 0);
}


size_t IDLParser::Sequence_typeContext::getRuleIndex() const {
  return IDLParser::RuleSequence_type;
}

antlrcpp::Any IDLParser::Sequence_typeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<IDLVisitor*>(visitor))
    return parserVisitor->visitSequence_type(this);
  else
    return visitor->visitChildren(this);
}

IDLParser::Sequence_typeContext* IDLParser::sequence_type() {
  Sequence_typeContext *_localctx = _tracker.createInstance<Sequence_typeContext>(_ctx, getState());
  enterRule(_localctx, 156, IDLParser::RuleSequence_type);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(793);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 54, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(781);
      match(IDLParser::KW_SEQUENCE);
      setState(782);
      match(IDLParser::LEFT_ANG_BRACKET);
      setState(783);
      simple_type_spec();
      setState(784);
      match(IDLParser::COMA);
      setState(785);
      positive_int_const();
      setState(786);
      match(IDLParser::RIGHT_ANG_BRACKET);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(788);
      match(IDLParser::KW_SEQUENCE);
      setState(789);
      match(IDLParser::LEFT_ANG_BRACKET);
      setState(790);
      simple_type_spec();
      setState(791);
      match(IDLParser::RIGHT_ANG_BRACKET);
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- String_typeContext ------------------------------------------------------------------

IDLParser::String_typeContext::String_typeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* IDLParser::String_typeContext::KW_STRING() {
  return getToken(IDLParser::KW_STRING, 0);
}

tree::TerminalNode* IDLParser::String_typeContext::LEFT_ANG_BRACKET() {
  return getToken(IDLParser::LEFT_ANG_BRACKET, 0);
}

IDLParser::Positive_int_constContext* IDLParser::String_typeContext::positive_int_const() {
  return getRuleContext<IDLParser::Positive_int_constContext>(0);
}

tree::TerminalNode* IDLParser::String_typeContext::RIGHT_ANG_BRACKET() {
  return getToken(IDLParser::RIGHT_ANG_BRACKET, 0);
}


size_t IDLParser::String_typeContext::getRuleIndex() const {
  return IDLParser::RuleString_type;
}

antlrcpp::Any IDLParser::String_typeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<IDLVisitor*>(visitor))
    return parserVisitor->visitString_type(this);
  else
    return visitor->visitChildren(this);
}

IDLParser::String_typeContext* IDLParser::string_type() {
  String_typeContext *_localctx = _tracker.createInstance<String_typeContext>(_ctx, getState());
  enterRule(_localctx, 158, IDLParser::RuleString_type);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(801);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 55, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(795);
      match(IDLParser::KW_STRING);
      setState(796);
      match(IDLParser::LEFT_ANG_BRACKET);
      setState(797);
      positive_int_const();
      setState(798);
      match(IDLParser::RIGHT_ANG_BRACKET);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(800);
      match(IDLParser::KW_STRING);
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Wide_string_typeContext ------------------------------------------------------------------

IDLParser::Wide_string_typeContext::Wide_string_typeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* IDLParser::Wide_string_typeContext::KW_WSTRING() {
  return getToken(IDLParser::KW_WSTRING, 0);
}

tree::TerminalNode* IDLParser::Wide_string_typeContext::LEFT_ANG_BRACKET() {
  return getToken(IDLParser::LEFT_ANG_BRACKET, 0);
}

IDLParser::Positive_int_constContext* IDLParser::Wide_string_typeContext::positive_int_const() {
  return getRuleContext<IDLParser::Positive_int_constContext>(0);
}

tree::TerminalNode* IDLParser::Wide_string_typeContext::RIGHT_ANG_BRACKET() {
  return getToken(IDLParser::RIGHT_ANG_BRACKET, 0);
}


size_t IDLParser::Wide_string_typeContext::getRuleIndex() const {
  return IDLParser::RuleWide_string_type;
}

antlrcpp::Any IDLParser::Wide_string_typeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<IDLVisitor*>(visitor))
    return parserVisitor->visitWide_string_type(this);
  else
    return visitor->visitChildren(this);
}

IDLParser::Wide_string_typeContext* IDLParser::wide_string_type() {
  Wide_string_typeContext *_localctx = _tracker.createInstance<Wide_string_typeContext>(_ctx, getState());
  enterRule(_localctx, 160, IDLParser::RuleWide_string_type);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(809);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 56, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(803);
      match(IDLParser::KW_WSTRING);
      setState(804);
      match(IDLParser::LEFT_ANG_BRACKET);
      setState(805);
      positive_int_const();
      setState(806);
      match(IDLParser::RIGHT_ANG_BRACKET);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(808);
      match(IDLParser::KW_WSTRING);
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Array_declaratorContext ------------------------------------------------------------------

IDLParser::Array_declaratorContext::Array_declaratorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* IDLParser::Array_declaratorContext::ID() {
  return getToken(IDLParser::ID, 0);
}

std::vector<IDLParser::Fixed_array_sizeContext *> IDLParser::Array_declaratorContext::fixed_array_size() {
  return getRuleContexts<IDLParser::Fixed_array_sizeContext>();
}

IDLParser::Fixed_array_sizeContext* IDLParser::Array_declaratorContext::fixed_array_size(size_t i) {
  return getRuleContext<IDLParser::Fixed_array_sizeContext>(i);
}


size_t IDLParser::Array_declaratorContext::getRuleIndex() const {
  return IDLParser::RuleArray_declarator;
}

antlrcpp::Any IDLParser::Array_declaratorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<IDLVisitor*>(visitor))
    return parserVisitor->visitArray_declarator(this);
  else
    return visitor->visitChildren(this);
}

IDLParser::Array_declaratorContext* IDLParser::array_declarator() {
  Array_declaratorContext *_localctx = _tracker.createInstance<Array_declaratorContext>(_ctx, getState());
  enterRule(_localctx, 162, IDLParser::RuleArray_declarator);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(811);
    match(IDLParser::ID);
    setState(813); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(812);
      fixed_array_size();
      setState(815); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while (_la == IDLParser::LEFT_SQUARE_BRACKET);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Fixed_array_sizeContext ------------------------------------------------------------------

IDLParser::Fixed_array_sizeContext::Fixed_array_sizeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* IDLParser::Fixed_array_sizeContext::LEFT_SQUARE_BRACKET() {
  return getToken(IDLParser::LEFT_SQUARE_BRACKET, 0);
}

IDLParser::Positive_int_constContext* IDLParser::Fixed_array_sizeContext::positive_int_const() {
  return getRuleContext<IDLParser::Positive_int_constContext>(0);
}

tree::TerminalNode* IDLParser::Fixed_array_sizeContext::RIGHT_SQUARE_BRACKET() {
  return getToken(IDLParser::RIGHT_SQUARE_BRACKET, 0);
}


size_t IDLParser::Fixed_array_sizeContext::getRuleIndex() const {
  return IDLParser::RuleFixed_array_size;
}

antlrcpp::Any IDLParser::Fixed_array_sizeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<IDLVisitor*>(visitor))
    return parserVisitor->visitFixed_array_size(this);
  else
    return visitor->visitChildren(this);
}

IDLParser::Fixed_array_sizeContext* IDLParser::fixed_array_size() {
  Fixed_array_sizeContext *_localctx = _tracker.createInstance<Fixed_array_sizeContext>(_ctx, getState());
  enterRule(_localctx, 164, IDLParser::RuleFixed_array_size);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(817);
    match(IDLParser::LEFT_SQUARE_BRACKET);
    setState(818);
    positive_int_const();
    setState(819);
    match(IDLParser::RIGHT_SQUARE_BRACKET);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Attr_declContext ------------------------------------------------------------------

IDLParser::Attr_declContext::Attr_declContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

IDLParser::Readonly_attr_specContext* IDLParser::Attr_declContext::readonly_attr_spec() {
  return getRuleContext<IDLParser::Readonly_attr_specContext>(0);
}

IDLParser::Attr_specContext* IDLParser::Attr_declContext::attr_spec() {
  return getRuleContext<IDLParser::Attr_specContext>(0);
}


size_t IDLParser::Attr_declContext::getRuleIndex() const {
  return IDLParser::RuleAttr_decl;
}

antlrcpp::Any IDLParser::Attr_declContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<IDLVisitor*>(visitor))
    return parserVisitor->visitAttr_decl(this);
  else
    return visitor->visitChildren(this);
}

IDLParser::Attr_declContext* IDLParser::attr_decl() {
  Attr_declContext *_localctx = _tracker.createInstance<Attr_declContext>(_ctx, getState());
  enterRule(_localctx, 166, IDLParser::RuleAttr_decl);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(823);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case IDLParser::KW_READONLY: {
        enterOuterAlt(_localctx, 1);
        setState(821);
        readonly_attr_spec();
        break;
      }

      case IDLParser::KW_ATTRIBUTE: {
        enterOuterAlt(_localctx, 2);
        setState(822);
        attr_spec();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Except_declContext ------------------------------------------------------------------

IDLParser::Except_declContext::Except_declContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* IDLParser::Except_declContext::KW_EXCEPTION() {
  return getToken(IDLParser::KW_EXCEPTION, 0);
}

tree::TerminalNode* IDLParser::Except_declContext::ID() {
  return getToken(IDLParser::ID, 0);
}

tree::TerminalNode* IDLParser::Except_declContext::LEFT_BRACE() {
  return getToken(IDLParser::LEFT_BRACE, 0);
}

tree::TerminalNode* IDLParser::Except_declContext::RIGHT_BRACE() {
  return getToken(IDLParser::RIGHT_BRACE, 0);
}

std::vector<IDLParser::MemberContext *> IDLParser::Except_declContext::member() {
  return getRuleContexts<IDLParser::MemberContext>();
}

IDLParser::MemberContext* IDLParser::Except_declContext::member(size_t i) {
  return getRuleContext<IDLParser::MemberContext>(i);
}


size_t IDLParser::Except_declContext::getRuleIndex() const {
  return IDLParser::RuleExcept_decl;
}

antlrcpp::Any IDLParser::Except_declContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<IDLVisitor*>(visitor))
    return parserVisitor->visitExcept_decl(this);
  else
    return visitor->visitChildren(this);
}

IDLParser::Except_declContext* IDLParser::except_decl() {
  Except_declContext *_localctx = _tracker.createInstance<Except_declContext>(_ctx, getState());
  enterRule(_localctx, 168, IDLParser::RuleExcept_decl);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(825);
    match(IDLParser::KW_EXCEPTION);
    setState(826);
    match(IDLParser::ID);
    setState(827);
    match(IDLParser::LEFT_BRACE);
    setState(831);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << IDLParser::DOUBLE_COLON)
      | (1ULL << IDLParser::KW_STRING)
      | (1ULL << IDLParser::KW_OCTET)
      | (1ULL << IDLParser::KW_SEQUENCE)
      | (1ULL << IDLParser::KW_STRUCT)
      | (1ULL << IDLParser::KW_WCHAR)
      | (1ULL << IDLParser::KW_SHORT)
      | (1ULL << IDLParser::KW_LONG)
      | (1ULL << IDLParser::KW_ENUM)
      | (1ULL << IDLParser::KW_WSTRING))) != 0) || ((((_la - 70) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 70)) & ((1ULL << (IDLParser::KW_VALUEBASE - 70))
      | (1ULL << (IDLParser::KW_OBJECT - 70))
      | (1ULL << (IDLParser::KW_UNSIGNED - 70))
      | (1ULL << (IDLParser::KW_FIXED - 70))
      | (1ULL << (IDLParser::KW_UNION - 70))
      | (1ULL << (IDLParser::KW_ANY - 70))
      | (1ULL << (IDLParser::KW_CHAR - 70))
      | (1ULL << (IDLParser::KW_FLOAT - 70))
      | (1ULL << (IDLParser::KW_BOOLEAN - 70))
      | (1ULL << (IDLParser::KW_DOUBLE - 70))
      | (1ULL << (IDLParser::ID - 70)))) != 0)) {
      setState(828);
      member();
      setState(833);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(834);
    match(IDLParser::RIGHT_BRACE);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Op_declContext ------------------------------------------------------------------

IDLParser::Op_declContext::Op_declContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

IDLParser::Op_type_specContext* IDLParser::Op_declContext::op_type_spec() {
  return getRuleContext<IDLParser::Op_type_specContext>(0);
}

tree::TerminalNode* IDLParser::Op_declContext::ID() {
  return getToken(IDLParser::ID, 0);
}

IDLParser::Parameter_declsContext* IDLParser::Op_declContext::parameter_decls() {
  return getRuleContext<IDLParser::Parameter_declsContext>(0);
}

IDLParser::Op_attributeContext* IDLParser::Op_declContext::op_attribute() {
  return getRuleContext<IDLParser::Op_attributeContext>(0);
}

IDLParser::Raises_exprContext* IDLParser::Op_declContext::raises_expr() {
  return getRuleContext<IDLParser::Raises_exprContext>(0);
}

IDLParser::Context_exprContext* IDLParser::Op_declContext::context_expr() {
  return getRuleContext<IDLParser::Context_exprContext>(0);
}


size_t IDLParser::Op_declContext::getRuleIndex() const {
  return IDLParser::RuleOp_decl;
}

antlrcpp::Any IDLParser::Op_declContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<IDLVisitor*>(visitor))
    return parserVisitor->visitOp_decl(this);
  else
    return visitor->visitChildren(this);
}

IDLParser::Op_declContext* IDLParser::op_decl() {
  Op_declContext *_localctx = _tracker.createInstance<Op_declContext>(_ctx, getState());
  enterRule(_localctx, 170, IDLParser::RuleOp_decl);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(837);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == IDLParser::KW_ONEWAY) {
      setState(836);
      op_attribute();
    }
    setState(839);
    op_type_spec();
    setState(840);
    match(IDLParser::ID);
    setState(841);
    parameter_decls();
    setState(843);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == IDLParser::KW_RAISES) {
      setState(842);
      raises_expr();
    }
    setState(846);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == IDLParser::KW_CONTEXT) {
      setState(845);
      context_expr();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Op_attributeContext ------------------------------------------------------------------

IDLParser::Op_attributeContext::Op_attributeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* IDLParser::Op_attributeContext::KW_ONEWAY() {
  return getToken(IDLParser::KW_ONEWAY, 0);
}


size_t IDLParser::Op_attributeContext::getRuleIndex() const {
  return IDLParser::RuleOp_attribute;
}

antlrcpp::Any IDLParser::Op_attributeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<IDLVisitor*>(visitor))
    return parserVisitor->visitOp_attribute(this);
  else
    return visitor->visitChildren(this);
}

IDLParser::Op_attributeContext* IDLParser::op_attribute() {
  Op_attributeContext *_localctx = _tracker.createInstance<Op_attributeContext>(_ctx, getState());
  enterRule(_localctx, 172, IDLParser::RuleOp_attribute);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(848);
    match(IDLParser::KW_ONEWAY);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Op_type_specContext ------------------------------------------------------------------

IDLParser::Op_type_specContext::Op_type_specContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

IDLParser::Param_type_specContext* IDLParser::Op_type_specContext::param_type_spec() {
  return getRuleContext<IDLParser::Param_type_specContext>(0);
}

tree::TerminalNode* IDLParser::Op_type_specContext::KW_VOID() {
  return getToken(IDLParser::KW_VOID, 0);
}


size_t IDLParser::Op_type_specContext::getRuleIndex() const {
  return IDLParser::RuleOp_type_spec;
}

antlrcpp::Any IDLParser::Op_type_specContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<IDLVisitor*>(visitor))
    return parserVisitor->visitOp_type_spec(this);
  else
    return visitor->visitChildren(this);
}

IDLParser::Op_type_specContext* IDLParser::op_type_spec() {
  Op_type_specContext *_localctx = _tracker.createInstance<Op_type_specContext>(_ctx, getState());
  enterRule(_localctx, 174, IDLParser::RuleOp_type_spec);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(852);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case IDLParser::DOUBLE_COLON:
      case IDLParser::KW_STRING:
      case IDLParser::KW_OCTET:
      case IDLParser::KW_WCHAR:
      case IDLParser::KW_SHORT:
      case IDLParser::KW_LONG:
      case IDLParser::KW_WSTRING:
      case IDLParser::KW_VALUEBASE:
      case IDLParser::KW_OBJECT:
      case IDLParser::KW_UNSIGNED:
      case IDLParser::KW_ANY:
      case IDLParser::KW_CHAR:
      case IDLParser::KW_FLOAT:
      case IDLParser::KW_BOOLEAN:
      case IDLParser::KW_DOUBLE:
      case IDLParser::ID: {
        enterOuterAlt(_localctx, 1);
        setState(850);
        param_type_spec();
        break;
      }

      case IDLParser::KW_VOID: {
        enterOuterAlt(_localctx, 2);
        setState(851);
        match(IDLParser::KW_VOID);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Parameter_declsContext ------------------------------------------------------------------

IDLParser::Parameter_declsContext::Parameter_declsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* IDLParser::Parameter_declsContext::LEFT_BRACKET() {
  return getToken(IDLParser::LEFT_BRACKET, 0);
}

std::vector<IDLParser::Param_declContext *> IDLParser::Parameter_declsContext::param_decl() {
  return getRuleContexts<IDLParser::Param_declContext>();
}

IDLParser::Param_declContext* IDLParser::Parameter_declsContext::param_decl(size_t i) {
  return getRuleContext<IDLParser::Param_declContext>(i);
}

tree::TerminalNode* IDLParser::Parameter_declsContext::RIGHT_BRACKET() {
  return getToken(IDLParser::RIGHT_BRACKET, 0);
}

std::vector<tree::TerminalNode *> IDLParser::Parameter_declsContext::COMA() {
  return getTokens(IDLParser::COMA);
}

tree::TerminalNode* IDLParser::Parameter_declsContext::COMA(size_t i) {
  return getToken(IDLParser::COMA, i);
}


size_t IDLParser::Parameter_declsContext::getRuleIndex() const {
  return IDLParser::RuleParameter_decls;
}

antlrcpp::Any IDLParser::Parameter_declsContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<IDLVisitor*>(visitor))
    return parserVisitor->visitParameter_decls(this);
  else
    return visitor->visitChildren(this);
}

IDLParser::Parameter_declsContext* IDLParser::parameter_decls() {
  Parameter_declsContext *_localctx = _tracker.createInstance<Parameter_declsContext>(_ctx, getState());
  enterRule(_localctx, 176, IDLParser::RuleParameter_decls);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(867);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 65, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(854);
      match(IDLParser::LEFT_BRACKET);
      setState(855);
      param_decl();
      setState(860);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == IDLParser::COMA) {
        setState(856);
        match(IDLParser::COMA);
        setState(857);
        param_decl();
        setState(862);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(863);
      match(IDLParser::RIGHT_BRACKET);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(865);
      match(IDLParser::LEFT_BRACKET);
      setState(866);
      match(IDLParser::RIGHT_BRACKET);
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Param_declContext ------------------------------------------------------------------

IDLParser::Param_declContext::Param_declContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

IDLParser::Param_attributeContext* IDLParser::Param_declContext::param_attribute() {
  return getRuleContext<IDLParser::Param_attributeContext>(0);
}

IDLParser::Param_type_specContext* IDLParser::Param_declContext::param_type_spec() {
  return getRuleContext<IDLParser::Param_type_specContext>(0);
}

IDLParser::Simple_declaratorContext* IDLParser::Param_declContext::simple_declarator() {
  return getRuleContext<IDLParser::Simple_declaratorContext>(0);
}


size_t IDLParser::Param_declContext::getRuleIndex() const {
  return IDLParser::RuleParam_decl;
}

antlrcpp::Any IDLParser::Param_declContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<IDLVisitor*>(visitor))
    return parserVisitor->visitParam_decl(this);
  else
    return visitor->visitChildren(this);
}

IDLParser::Param_declContext* IDLParser::param_decl() {
  Param_declContext *_localctx = _tracker.createInstance<Param_declContext>(_ctx, getState());
  enterRule(_localctx, 178, IDLParser::RuleParam_decl);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(869);
    param_attribute();
    setState(870);
    param_type_spec();
    setState(871);
    simple_declarator();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Param_attributeContext ------------------------------------------------------------------

IDLParser::Param_attributeContext::Param_attributeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* IDLParser::Param_attributeContext::KW_IN() {
  return getToken(IDLParser::KW_IN, 0);
}

tree::TerminalNode* IDLParser::Param_attributeContext::KW_OUT() {
  return getToken(IDLParser::KW_OUT, 0);
}

tree::TerminalNode* IDLParser::Param_attributeContext::KW_INOUT() {
  return getToken(IDLParser::KW_INOUT, 0);
}


size_t IDLParser::Param_attributeContext::getRuleIndex() const {
  return IDLParser::RuleParam_attribute;
}

antlrcpp::Any IDLParser::Param_attributeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<IDLVisitor*>(visitor))
    return parserVisitor->visitParam_attribute(this);
  else
    return visitor->visitChildren(this);
}

IDLParser::Param_attributeContext* IDLParser::param_attribute() {
  Param_attributeContext *_localctx = _tracker.createInstance<Param_attributeContext>(_ctx, getState());
  enterRule(_localctx, 180, IDLParser::RuleParam_attribute);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(873);
    _la = _input->LA(1);
    if (!(((((_la - 36) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 36)) & ((1ULL << (IDLParser::KW_OUT - 36))
      | (1ULL << (IDLParser::KW_IN - 36))
      | (1ULL << (IDLParser::KW_INOUT - 36)))) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Raises_exprContext ------------------------------------------------------------------

IDLParser::Raises_exprContext::Raises_exprContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* IDLParser::Raises_exprContext::KW_RAISES() {
  return getToken(IDLParser::KW_RAISES, 0);
}

tree::TerminalNode* IDLParser::Raises_exprContext::LEFT_BRACKET() {
  return getToken(IDLParser::LEFT_BRACKET, 0);
}

std::vector<IDLParser::Scoped_nameContext *> IDLParser::Raises_exprContext::scoped_name() {
  return getRuleContexts<IDLParser::Scoped_nameContext>();
}

IDLParser::Scoped_nameContext* IDLParser::Raises_exprContext::scoped_name(size_t i) {
  return getRuleContext<IDLParser::Scoped_nameContext>(i);
}

tree::TerminalNode* IDLParser::Raises_exprContext::RIGHT_BRACKET() {
  return getToken(IDLParser::RIGHT_BRACKET, 0);
}

std::vector<tree::TerminalNode *> IDLParser::Raises_exprContext::COMA() {
  return getTokens(IDLParser::COMA);
}

tree::TerminalNode* IDLParser::Raises_exprContext::COMA(size_t i) {
  return getToken(IDLParser::COMA, i);
}


size_t IDLParser::Raises_exprContext::getRuleIndex() const {
  return IDLParser::RuleRaises_expr;
}

antlrcpp::Any IDLParser::Raises_exprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<IDLVisitor*>(visitor))
    return parserVisitor->visitRaises_expr(this);
  else
    return visitor->visitChildren(this);
}

IDLParser::Raises_exprContext* IDLParser::raises_expr() {
  Raises_exprContext *_localctx = _tracker.createInstance<Raises_exprContext>(_ctx, getState());
  enterRule(_localctx, 182, IDLParser::RuleRaises_expr);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(875);
    match(IDLParser::KW_RAISES);
    setState(876);
    match(IDLParser::LEFT_BRACKET);
    setState(877);
    scoped_name();
    setState(882);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == IDLParser::COMA) {
      setState(878);
      match(IDLParser::COMA);
      setState(879);
      scoped_name();
      setState(884);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(885);
    match(IDLParser::RIGHT_BRACKET);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Context_exprContext ------------------------------------------------------------------

IDLParser::Context_exprContext::Context_exprContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* IDLParser::Context_exprContext::KW_CONTEXT() {
  return getToken(IDLParser::KW_CONTEXT, 0);
}

tree::TerminalNode* IDLParser::Context_exprContext::LEFT_BRACKET() {
  return getToken(IDLParser::LEFT_BRACKET, 0);
}

std::vector<tree::TerminalNode *> IDLParser::Context_exprContext::STRING_LITERAL() {
  return getTokens(IDLParser::STRING_LITERAL);
}

tree::TerminalNode* IDLParser::Context_exprContext::STRING_LITERAL(size_t i) {
  return getToken(IDLParser::STRING_LITERAL, i);
}

tree::TerminalNode* IDLParser::Context_exprContext::RIGHT_BRACKET() {
  return getToken(IDLParser::RIGHT_BRACKET, 0);
}

std::vector<tree::TerminalNode *> IDLParser::Context_exprContext::COMA() {
  return getTokens(IDLParser::COMA);
}

tree::TerminalNode* IDLParser::Context_exprContext::COMA(size_t i) {
  return getToken(IDLParser::COMA, i);
}


size_t IDLParser::Context_exprContext::getRuleIndex() const {
  return IDLParser::RuleContext_expr;
}

antlrcpp::Any IDLParser::Context_exprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<IDLVisitor*>(visitor))
    return parserVisitor->visitContext_expr(this);
  else
    return visitor->visitChildren(this);
}

IDLParser::Context_exprContext* IDLParser::context_expr() {
  Context_exprContext *_localctx = _tracker.createInstance<Context_exprContext>(_ctx, getState());
  enterRule(_localctx, 184, IDLParser::RuleContext_expr);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(887);
    match(IDLParser::KW_CONTEXT);
    setState(888);
    match(IDLParser::LEFT_BRACKET);
    setState(889);
    match(IDLParser::STRING_LITERAL);
    setState(894);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == IDLParser::COMA) {
      setState(890);
      match(IDLParser::COMA);
      setState(891);
      match(IDLParser::STRING_LITERAL);
      setState(896);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(897);
    match(IDLParser::RIGHT_BRACKET);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Param_type_specContext ------------------------------------------------------------------

IDLParser::Param_type_specContext::Param_type_specContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

IDLParser::Base_type_specContext* IDLParser::Param_type_specContext::base_type_spec() {
  return getRuleContext<IDLParser::Base_type_specContext>(0);
}

IDLParser::String_typeContext* IDLParser::Param_type_specContext::string_type() {
  return getRuleContext<IDLParser::String_typeContext>(0);
}

IDLParser::Wide_string_typeContext* IDLParser::Param_type_specContext::wide_string_type() {
  return getRuleContext<IDLParser::Wide_string_typeContext>(0);
}

IDLParser::Scoped_nameContext* IDLParser::Param_type_specContext::scoped_name() {
  return getRuleContext<IDLParser::Scoped_nameContext>(0);
}


size_t IDLParser::Param_type_specContext::getRuleIndex() const {
  return IDLParser::RuleParam_type_spec;
}

antlrcpp::Any IDLParser::Param_type_specContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<IDLVisitor*>(visitor))
    return parserVisitor->visitParam_type_spec(this);
  else
    return visitor->visitChildren(this);
}

IDLParser::Param_type_specContext* IDLParser::param_type_spec() {
  Param_type_specContext *_localctx = _tracker.createInstance<Param_type_specContext>(_ctx, getState());
  enterRule(_localctx, 186, IDLParser::RuleParam_type_spec);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(903);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case IDLParser::KW_OCTET:
      case IDLParser::KW_WCHAR:
      case IDLParser::KW_SHORT:
      case IDLParser::KW_LONG:
      case IDLParser::KW_VALUEBASE:
      case IDLParser::KW_OBJECT:
      case IDLParser::KW_UNSIGNED:
      case IDLParser::KW_ANY:
      case IDLParser::KW_CHAR:
      case IDLParser::KW_FLOAT:
      case IDLParser::KW_BOOLEAN:
      case IDLParser::KW_DOUBLE: {
        enterOuterAlt(_localctx, 1);
        setState(899);
        base_type_spec();
        break;
      }

      case IDLParser::KW_STRING: {
        enterOuterAlt(_localctx, 2);
        setState(900);
        string_type();
        break;
      }

      case IDLParser::KW_WSTRING: {
        enterOuterAlt(_localctx, 3);
        setState(901);
        wide_string_type();
        break;
      }

      case IDLParser::DOUBLE_COLON:
      case IDLParser::ID: {
        enterOuterAlt(_localctx, 4);
        setState(902);
        scoped_name();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Fixed_pt_typeContext ------------------------------------------------------------------

IDLParser::Fixed_pt_typeContext::Fixed_pt_typeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* IDLParser::Fixed_pt_typeContext::KW_FIXED() {
  return getToken(IDLParser::KW_FIXED, 0);
}

tree::TerminalNode* IDLParser::Fixed_pt_typeContext::LEFT_ANG_BRACKET() {
  return getToken(IDLParser::LEFT_ANG_BRACKET, 0);
}

std::vector<IDLParser::Positive_int_constContext *> IDLParser::Fixed_pt_typeContext::positive_int_const() {
  return getRuleContexts<IDLParser::Positive_int_constContext>();
}

IDLParser::Positive_int_constContext* IDLParser::Fixed_pt_typeContext::positive_int_const(size_t i) {
  return getRuleContext<IDLParser::Positive_int_constContext>(i);
}

tree::TerminalNode* IDLParser::Fixed_pt_typeContext::COMA() {
  return getToken(IDLParser::COMA, 0);
}

tree::TerminalNode* IDLParser::Fixed_pt_typeContext::RIGHT_ANG_BRACKET() {
  return getToken(IDLParser::RIGHT_ANG_BRACKET, 0);
}


size_t IDLParser::Fixed_pt_typeContext::getRuleIndex() const {
  return IDLParser::RuleFixed_pt_type;
}

antlrcpp::Any IDLParser::Fixed_pt_typeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<IDLVisitor*>(visitor))
    return parserVisitor->visitFixed_pt_type(this);
  else
    return visitor->visitChildren(this);
}

IDLParser::Fixed_pt_typeContext* IDLParser::fixed_pt_type() {
  Fixed_pt_typeContext *_localctx = _tracker.createInstance<Fixed_pt_typeContext>(_ctx, getState());
  enterRule(_localctx, 188, IDLParser::RuleFixed_pt_type);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(905);
    match(IDLParser::KW_FIXED);
    setState(906);
    match(IDLParser::LEFT_ANG_BRACKET);
    setState(907);
    positive_int_const();
    setState(908);
    match(IDLParser::COMA);
    setState(909);
    positive_int_const();
    setState(910);
    match(IDLParser::RIGHT_ANG_BRACKET);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Fixed_pt_const_typeContext ------------------------------------------------------------------

IDLParser::Fixed_pt_const_typeContext::Fixed_pt_const_typeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* IDLParser::Fixed_pt_const_typeContext::KW_FIXED() {
  return getToken(IDLParser::KW_FIXED, 0);
}


size_t IDLParser::Fixed_pt_const_typeContext::getRuleIndex() const {
  return IDLParser::RuleFixed_pt_const_type;
}

antlrcpp::Any IDLParser::Fixed_pt_const_typeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<IDLVisitor*>(visitor))
    return parserVisitor->visitFixed_pt_const_type(this);
  else
    return visitor->visitChildren(this);
}

IDLParser::Fixed_pt_const_typeContext* IDLParser::fixed_pt_const_type() {
  Fixed_pt_const_typeContext *_localctx = _tracker.createInstance<Fixed_pt_const_typeContext>(_ctx, getState());
  enterRule(_localctx, 190, IDLParser::RuleFixed_pt_const_type);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(912);
    match(IDLParser::KW_FIXED);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Value_base_typeContext ------------------------------------------------------------------

IDLParser::Value_base_typeContext::Value_base_typeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* IDLParser::Value_base_typeContext::KW_VALUEBASE() {
  return getToken(IDLParser::KW_VALUEBASE, 0);
}


size_t IDLParser::Value_base_typeContext::getRuleIndex() const {
  return IDLParser::RuleValue_base_type;
}

antlrcpp::Any IDLParser::Value_base_typeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<IDLVisitor*>(visitor))
    return parserVisitor->visitValue_base_type(this);
  else
    return visitor->visitChildren(this);
}

IDLParser::Value_base_typeContext* IDLParser::value_base_type() {
  Value_base_typeContext *_localctx = _tracker.createInstance<Value_base_typeContext>(_ctx, getState());
  enterRule(_localctx, 192, IDLParser::RuleValue_base_type);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(914);
    match(IDLParser::KW_VALUEBASE);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Constr_forward_declContext ------------------------------------------------------------------

IDLParser::Constr_forward_declContext::Constr_forward_declContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* IDLParser::Constr_forward_declContext::KW_STRUCT() {
  return getToken(IDLParser::KW_STRUCT, 0);
}

tree::TerminalNode* IDLParser::Constr_forward_declContext::ID() {
  return getToken(IDLParser::ID, 0);
}

tree::TerminalNode* IDLParser::Constr_forward_declContext::KW_UNION() {
  return getToken(IDLParser::KW_UNION, 0);
}


size_t IDLParser::Constr_forward_declContext::getRuleIndex() const {
  return IDLParser::RuleConstr_forward_decl;
}

antlrcpp::Any IDLParser::Constr_forward_declContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<IDLVisitor*>(visitor))
    return parserVisitor->visitConstr_forward_decl(this);
  else
    return visitor->visitChildren(this);
}

IDLParser::Constr_forward_declContext* IDLParser::constr_forward_decl() {
  Constr_forward_declContext *_localctx = _tracker.createInstance<Constr_forward_declContext>(_ctx, getState());
  enterRule(_localctx, 194, IDLParser::RuleConstr_forward_decl);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(920);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case IDLParser::KW_STRUCT: {
        enterOuterAlt(_localctx, 1);
        setState(916);
        match(IDLParser::KW_STRUCT);
        setState(917);
        match(IDLParser::ID);
        break;
      }

      case IDLParser::KW_UNION: {
        enterOuterAlt(_localctx, 2);
        setState(918);
        match(IDLParser::KW_UNION);
        setState(919);
        match(IDLParser::ID);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Import_declContext ------------------------------------------------------------------

IDLParser::Import_declContext::Import_declContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* IDLParser::Import_declContext::KW_IMPORT() {
  return getToken(IDLParser::KW_IMPORT, 0);
}

IDLParser::Imported_scopeContext* IDLParser::Import_declContext::imported_scope() {
  return getRuleContext<IDLParser::Imported_scopeContext>(0);
}

tree::TerminalNode* IDLParser::Import_declContext::SEMICOLON() {
  return getToken(IDLParser::SEMICOLON, 0);
}


size_t IDLParser::Import_declContext::getRuleIndex() const {
  return IDLParser::RuleImport_decl;
}

antlrcpp::Any IDLParser::Import_declContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<IDLVisitor*>(visitor))
    return parserVisitor->visitImport_decl(this);
  else
    return visitor->visitChildren(this);
}

IDLParser::Import_declContext* IDLParser::import_decl() {
  Import_declContext *_localctx = _tracker.createInstance<Import_declContext>(_ctx, getState());
  enterRule(_localctx, 196, IDLParser::RuleImport_decl);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(922);
    match(IDLParser::KW_IMPORT);
    setState(923);
    imported_scope();
    setState(924);
    match(IDLParser::SEMICOLON);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Imported_scopeContext ------------------------------------------------------------------

IDLParser::Imported_scopeContext::Imported_scopeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

IDLParser::Scoped_nameContext* IDLParser::Imported_scopeContext::scoped_name() {
  return getRuleContext<IDLParser::Scoped_nameContext>(0);
}

tree::TerminalNode* IDLParser::Imported_scopeContext::STRING_LITERAL() {
  return getToken(IDLParser::STRING_LITERAL, 0);
}


size_t IDLParser::Imported_scopeContext::getRuleIndex() const {
  return IDLParser::RuleImported_scope;
}

antlrcpp::Any IDLParser::Imported_scopeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<IDLVisitor*>(visitor))
    return parserVisitor->visitImported_scope(this);
  else
    return visitor->visitChildren(this);
}

IDLParser::Imported_scopeContext* IDLParser::imported_scope() {
  Imported_scopeContext *_localctx = _tracker.createInstance<Imported_scopeContext>(_ctx, getState());
  enterRule(_localctx, 198, IDLParser::RuleImported_scope);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(928);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case IDLParser::DOUBLE_COLON:
      case IDLParser::ID: {
        enterOuterAlt(_localctx, 1);
        setState(926);
        scoped_name();
        break;
      }

      case IDLParser::STRING_LITERAL: {
        enterOuterAlt(_localctx, 2);
        setState(927);
        match(IDLParser::STRING_LITERAL);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Type_id_declContext ------------------------------------------------------------------

IDLParser::Type_id_declContext::Type_id_declContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* IDLParser::Type_id_declContext::KW_TYPEID() {
  return getToken(IDLParser::KW_TYPEID, 0);
}

IDLParser::Scoped_nameContext* IDLParser::Type_id_declContext::scoped_name() {
  return getRuleContext<IDLParser::Scoped_nameContext>(0);
}

tree::TerminalNode* IDLParser::Type_id_declContext::STRING_LITERAL() {
  return getToken(IDLParser::STRING_LITERAL, 0);
}


size_t IDLParser::Type_id_declContext::getRuleIndex() const {
  return IDLParser::RuleType_id_decl;
}

antlrcpp::Any IDLParser::Type_id_declContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<IDLVisitor*>(visitor))
    return parserVisitor->visitType_id_decl(this);
  else
    return visitor->visitChildren(this);
}

IDLParser::Type_id_declContext* IDLParser::type_id_decl() {
  Type_id_declContext *_localctx = _tracker.createInstance<Type_id_declContext>(_ctx, getState());
  enterRule(_localctx, 200, IDLParser::RuleType_id_decl);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(930);
    match(IDLParser::KW_TYPEID);
    setState(931);
    scoped_name();
    setState(932);
    match(IDLParser::STRING_LITERAL);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Type_prefix_declContext ------------------------------------------------------------------

IDLParser::Type_prefix_declContext::Type_prefix_declContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* IDLParser::Type_prefix_declContext::KW_TYPEPREFIX() {
  return getToken(IDLParser::KW_TYPEPREFIX, 0);
}

IDLParser::Scoped_nameContext* IDLParser::Type_prefix_declContext::scoped_name() {
  return getRuleContext<IDLParser::Scoped_nameContext>(0);
}

tree::TerminalNode* IDLParser::Type_prefix_declContext::STRING_LITERAL() {
  return getToken(IDLParser::STRING_LITERAL, 0);
}


size_t IDLParser::Type_prefix_declContext::getRuleIndex() const {
  return IDLParser::RuleType_prefix_decl;
}

antlrcpp::Any IDLParser::Type_prefix_declContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<IDLVisitor*>(visitor))
    return parserVisitor->visitType_prefix_decl(this);
  else
    return visitor->visitChildren(this);
}

IDLParser::Type_prefix_declContext* IDLParser::type_prefix_decl() {
  Type_prefix_declContext *_localctx = _tracker.createInstance<Type_prefix_declContext>(_ctx, getState());
  enterRule(_localctx, 202, IDLParser::RuleType_prefix_decl);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(934);
    match(IDLParser::KW_TYPEPREFIX);
    setState(935);
    scoped_name();
    setState(936);
    match(IDLParser::STRING_LITERAL);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Readonly_attr_specContext ------------------------------------------------------------------

IDLParser::Readonly_attr_specContext::Readonly_attr_specContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* IDLParser::Readonly_attr_specContext::KW_READONLY() {
  return getToken(IDLParser::KW_READONLY, 0);
}

tree::TerminalNode* IDLParser::Readonly_attr_specContext::KW_ATTRIBUTE() {
  return getToken(IDLParser::KW_ATTRIBUTE, 0);
}

IDLParser::Param_type_specContext* IDLParser::Readonly_attr_specContext::param_type_spec() {
  return getRuleContext<IDLParser::Param_type_specContext>(0);
}

IDLParser::Readonly_attr_declaratorContext* IDLParser::Readonly_attr_specContext::readonly_attr_declarator() {
  return getRuleContext<IDLParser::Readonly_attr_declaratorContext>(0);
}


size_t IDLParser::Readonly_attr_specContext::getRuleIndex() const {
  return IDLParser::RuleReadonly_attr_spec;
}

antlrcpp::Any IDLParser::Readonly_attr_specContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<IDLVisitor*>(visitor))
    return parserVisitor->visitReadonly_attr_spec(this);
  else
    return visitor->visitChildren(this);
}

IDLParser::Readonly_attr_specContext* IDLParser::readonly_attr_spec() {
  Readonly_attr_specContext *_localctx = _tracker.createInstance<Readonly_attr_specContext>(_ctx, getState());
  enterRule(_localctx, 204, IDLParser::RuleReadonly_attr_spec);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(938);
    match(IDLParser::KW_READONLY);
    setState(939);
    match(IDLParser::KW_ATTRIBUTE);
    setState(940);
    param_type_spec();
    setState(941);
    readonly_attr_declarator();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Readonly_attr_declaratorContext ------------------------------------------------------------------

IDLParser::Readonly_attr_declaratorContext::Readonly_attr_declaratorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<IDLParser::Simple_declaratorContext *> IDLParser::Readonly_attr_declaratorContext::simple_declarator() {
  return getRuleContexts<IDLParser::Simple_declaratorContext>();
}

IDLParser::Simple_declaratorContext* IDLParser::Readonly_attr_declaratorContext::simple_declarator(size_t i) {
  return getRuleContext<IDLParser::Simple_declaratorContext>(i);
}

IDLParser::Raises_exprContext* IDLParser::Readonly_attr_declaratorContext::raises_expr() {
  return getRuleContext<IDLParser::Raises_exprContext>(0);
}

std::vector<tree::TerminalNode *> IDLParser::Readonly_attr_declaratorContext::COMA() {
  return getTokens(IDLParser::COMA);
}

tree::TerminalNode* IDLParser::Readonly_attr_declaratorContext::COMA(size_t i) {
  return getToken(IDLParser::COMA, i);
}


size_t IDLParser::Readonly_attr_declaratorContext::getRuleIndex() const {
  return IDLParser::RuleReadonly_attr_declarator;
}

antlrcpp::Any IDLParser::Readonly_attr_declaratorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<IDLVisitor*>(visitor))
    return parserVisitor->visitReadonly_attr_declarator(this);
  else
    return visitor->visitChildren(this);
}

IDLParser::Readonly_attr_declaratorContext* IDLParser::readonly_attr_declarator() {
  Readonly_attr_declaratorContext *_localctx = _tracker.createInstance<Readonly_attr_declaratorContext>(_ctx, getState());
  enterRule(_localctx, 206, IDLParser::RuleReadonly_attr_declarator);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(954);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 72, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(943);
      simple_declarator();
      setState(944);
      raises_expr();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(946);
      simple_declarator();
      setState(951);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == IDLParser::COMA) {
        setState(947);
        match(IDLParser::COMA);
        setState(948);
        simple_declarator();
        setState(953);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Attr_specContext ------------------------------------------------------------------

IDLParser::Attr_specContext::Attr_specContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* IDLParser::Attr_specContext::KW_ATTRIBUTE() {
  return getToken(IDLParser::KW_ATTRIBUTE, 0);
}

IDLParser::Param_type_specContext* IDLParser::Attr_specContext::param_type_spec() {
  return getRuleContext<IDLParser::Param_type_specContext>(0);
}

IDLParser::Attr_declaratorContext* IDLParser::Attr_specContext::attr_declarator() {
  return getRuleContext<IDLParser::Attr_declaratorContext>(0);
}


size_t IDLParser::Attr_specContext::getRuleIndex() const {
  return IDLParser::RuleAttr_spec;
}

antlrcpp::Any IDLParser::Attr_specContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<IDLVisitor*>(visitor))
    return parserVisitor->visitAttr_spec(this);
  else
    return visitor->visitChildren(this);
}

IDLParser::Attr_specContext* IDLParser::attr_spec() {
  Attr_specContext *_localctx = _tracker.createInstance<Attr_specContext>(_ctx, getState());
  enterRule(_localctx, 208, IDLParser::RuleAttr_spec);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(956);
    match(IDLParser::KW_ATTRIBUTE);
    setState(957);
    param_type_spec();
    setState(958);
    attr_declarator();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Attr_declaratorContext ------------------------------------------------------------------

IDLParser::Attr_declaratorContext::Attr_declaratorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<IDLParser::Simple_declaratorContext *> IDLParser::Attr_declaratorContext::simple_declarator() {
  return getRuleContexts<IDLParser::Simple_declaratorContext>();
}

IDLParser::Simple_declaratorContext* IDLParser::Attr_declaratorContext::simple_declarator(size_t i) {
  return getRuleContext<IDLParser::Simple_declaratorContext>(i);
}

IDLParser::Attr_raises_exprContext* IDLParser::Attr_declaratorContext::attr_raises_expr() {
  return getRuleContext<IDLParser::Attr_raises_exprContext>(0);
}

std::vector<tree::TerminalNode *> IDLParser::Attr_declaratorContext::COMA() {
  return getTokens(IDLParser::COMA);
}

tree::TerminalNode* IDLParser::Attr_declaratorContext::COMA(size_t i) {
  return getToken(IDLParser::COMA, i);
}


size_t IDLParser::Attr_declaratorContext::getRuleIndex() const {
  return IDLParser::RuleAttr_declarator;
}

antlrcpp::Any IDLParser::Attr_declaratorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<IDLVisitor*>(visitor))
    return parserVisitor->visitAttr_declarator(this);
  else
    return visitor->visitChildren(this);
}

IDLParser::Attr_declaratorContext* IDLParser::attr_declarator() {
  Attr_declaratorContext *_localctx = _tracker.createInstance<Attr_declaratorContext>(_ctx, getState());
  enterRule(_localctx, 210, IDLParser::RuleAttr_declarator);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(971);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 74, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(960);
      simple_declarator();
      setState(961);
      attr_raises_expr();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(963);
      simple_declarator();
      setState(968);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == IDLParser::COMA) {
        setState(964);
        match(IDLParser::COMA);
        setState(965);
        simple_declarator();
        setState(970);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Attr_raises_exprContext ------------------------------------------------------------------

IDLParser::Attr_raises_exprContext::Attr_raises_exprContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

IDLParser::Get_excep_exprContext* IDLParser::Attr_raises_exprContext::get_excep_expr() {
  return getRuleContext<IDLParser::Get_excep_exprContext>(0);
}

IDLParser::Set_excep_exprContext* IDLParser::Attr_raises_exprContext::set_excep_expr() {
  return getRuleContext<IDLParser::Set_excep_exprContext>(0);
}


size_t IDLParser::Attr_raises_exprContext::getRuleIndex() const {
  return IDLParser::RuleAttr_raises_expr;
}

antlrcpp::Any IDLParser::Attr_raises_exprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<IDLVisitor*>(visitor))
    return parserVisitor->visitAttr_raises_expr(this);
  else
    return visitor->visitChildren(this);
}

IDLParser::Attr_raises_exprContext* IDLParser::attr_raises_expr() {
  Attr_raises_exprContext *_localctx = _tracker.createInstance<Attr_raises_exprContext>(_ctx, getState());
  enterRule(_localctx, 212, IDLParser::RuleAttr_raises_expr);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(978);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case IDLParser::KW_GETRAISES: {
        enterOuterAlt(_localctx, 1);
        setState(973);
        get_excep_expr();
        setState(975);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == IDLParser::KW_SETRAISES) {
          setState(974);
          set_excep_expr();
        }
        break;
      }

      case IDLParser::KW_SETRAISES: {
        enterOuterAlt(_localctx, 2);
        setState(977);
        set_excep_expr();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Get_excep_exprContext ------------------------------------------------------------------

IDLParser::Get_excep_exprContext::Get_excep_exprContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* IDLParser::Get_excep_exprContext::KW_GETRAISES() {
  return getToken(IDLParser::KW_GETRAISES, 0);
}

IDLParser::Exception_listContext* IDLParser::Get_excep_exprContext::exception_list() {
  return getRuleContext<IDLParser::Exception_listContext>(0);
}


size_t IDLParser::Get_excep_exprContext::getRuleIndex() const {
  return IDLParser::RuleGet_excep_expr;
}

antlrcpp::Any IDLParser::Get_excep_exprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<IDLVisitor*>(visitor))
    return parserVisitor->visitGet_excep_expr(this);
  else
    return visitor->visitChildren(this);
}

IDLParser::Get_excep_exprContext* IDLParser::get_excep_expr() {
  Get_excep_exprContext *_localctx = _tracker.createInstance<Get_excep_exprContext>(_ctx, getState());
  enterRule(_localctx, 214, IDLParser::RuleGet_excep_expr);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(980);
    match(IDLParser::KW_GETRAISES);
    setState(981);
    exception_list();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Set_excep_exprContext ------------------------------------------------------------------

IDLParser::Set_excep_exprContext::Set_excep_exprContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* IDLParser::Set_excep_exprContext::KW_SETRAISES() {
  return getToken(IDLParser::KW_SETRAISES, 0);
}

IDLParser::Exception_listContext* IDLParser::Set_excep_exprContext::exception_list() {
  return getRuleContext<IDLParser::Exception_listContext>(0);
}


size_t IDLParser::Set_excep_exprContext::getRuleIndex() const {
  return IDLParser::RuleSet_excep_expr;
}

antlrcpp::Any IDLParser::Set_excep_exprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<IDLVisitor*>(visitor))
    return parserVisitor->visitSet_excep_expr(this);
  else
    return visitor->visitChildren(this);
}

IDLParser::Set_excep_exprContext* IDLParser::set_excep_expr() {
  Set_excep_exprContext *_localctx = _tracker.createInstance<Set_excep_exprContext>(_ctx, getState());
  enterRule(_localctx, 216, IDLParser::RuleSet_excep_expr);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(983);
    match(IDLParser::KW_SETRAISES);
    setState(984);
    exception_list();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Exception_listContext ------------------------------------------------------------------

IDLParser::Exception_listContext::Exception_listContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* IDLParser::Exception_listContext::LEFT_BRACKET() {
  return getToken(IDLParser::LEFT_BRACKET, 0);
}

std::vector<IDLParser::Scoped_nameContext *> IDLParser::Exception_listContext::scoped_name() {
  return getRuleContexts<IDLParser::Scoped_nameContext>();
}

IDLParser::Scoped_nameContext* IDLParser::Exception_listContext::scoped_name(size_t i) {
  return getRuleContext<IDLParser::Scoped_nameContext>(i);
}

tree::TerminalNode* IDLParser::Exception_listContext::RIGHT_BRACKET() {
  return getToken(IDLParser::RIGHT_BRACKET, 0);
}

std::vector<tree::TerminalNode *> IDLParser::Exception_listContext::COMA() {
  return getTokens(IDLParser::COMA);
}

tree::TerminalNode* IDLParser::Exception_listContext::COMA(size_t i) {
  return getToken(IDLParser::COMA, i);
}


size_t IDLParser::Exception_listContext::getRuleIndex() const {
  return IDLParser::RuleException_list;
}

antlrcpp::Any IDLParser::Exception_listContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<IDLVisitor*>(visitor))
    return parserVisitor->visitException_list(this);
  else
    return visitor->visitChildren(this);
}

IDLParser::Exception_listContext* IDLParser::exception_list() {
  Exception_listContext *_localctx = _tracker.createInstance<Exception_listContext>(_ctx, getState());
  enterRule(_localctx, 218, IDLParser::RuleException_list);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(986);
    match(IDLParser::LEFT_BRACKET);
    setState(987);
    scoped_name();
    setState(992);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == IDLParser::COMA) {
      setState(988);
      match(IDLParser::COMA);
      setState(989);
      scoped_name();
      setState(994);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(995);
    match(IDLParser::RIGHT_BRACKET);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ComponentContext ------------------------------------------------------------------

IDLParser::ComponentContext::ComponentContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

IDLParser::Component_declContext* IDLParser::ComponentContext::component_decl() {
  return getRuleContext<IDLParser::Component_declContext>(0);
}

IDLParser::Component_forward_declContext* IDLParser::ComponentContext::component_forward_decl() {
  return getRuleContext<IDLParser::Component_forward_declContext>(0);
}


size_t IDLParser::ComponentContext::getRuleIndex() const {
  return IDLParser::RuleComponent;
}

antlrcpp::Any IDLParser::ComponentContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<IDLVisitor*>(visitor))
    return parserVisitor->visitComponent(this);
  else
    return visitor->visitChildren(this);
}

IDLParser::ComponentContext* IDLParser::component() {
  ComponentContext *_localctx = _tracker.createInstance<ComponentContext>(_ctx, getState());
  enterRule(_localctx, 220, IDLParser::RuleComponent);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(999);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 78, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(997);
      component_decl();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(998);
      component_forward_decl();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Component_forward_declContext ------------------------------------------------------------------

IDLParser::Component_forward_declContext::Component_forward_declContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* IDLParser::Component_forward_declContext::KW_COMPONENT() {
  return getToken(IDLParser::KW_COMPONENT, 0);
}

tree::TerminalNode* IDLParser::Component_forward_declContext::ID() {
  return getToken(IDLParser::ID, 0);
}


size_t IDLParser::Component_forward_declContext::getRuleIndex() const {
  return IDLParser::RuleComponent_forward_decl;
}

antlrcpp::Any IDLParser::Component_forward_declContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<IDLVisitor*>(visitor))
    return parserVisitor->visitComponent_forward_decl(this);
  else
    return visitor->visitChildren(this);
}

IDLParser::Component_forward_declContext* IDLParser::component_forward_decl() {
  Component_forward_declContext *_localctx = _tracker.createInstance<Component_forward_declContext>(_ctx, getState());
  enterRule(_localctx, 222, IDLParser::RuleComponent_forward_decl);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1001);
    match(IDLParser::KW_COMPONENT);
    setState(1002);
    match(IDLParser::ID);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Component_declContext ------------------------------------------------------------------

IDLParser::Component_declContext::Component_declContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

IDLParser::Component_headerContext* IDLParser::Component_declContext::component_header() {
  return getRuleContext<IDLParser::Component_headerContext>(0);
}

tree::TerminalNode* IDLParser::Component_declContext::LEFT_BRACE() {
  return getToken(IDLParser::LEFT_BRACE, 0);
}

IDLParser::Component_bodyContext* IDLParser::Component_declContext::component_body() {
  return getRuleContext<IDLParser::Component_bodyContext>(0);
}

tree::TerminalNode* IDLParser::Component_declContext::RIGHT_BRACE() {
  return getToken(IDLParser::RIGHT_BRACE, 0);
}


size_t IDLParser::Component_declContext::getRuleIndex() const {
  return IDLParser::RuleComponent_decl;
}

antlrcpp::Any IDLParser::Component_declContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<IDLVisitor*>(visitor))
    return parserVisitor->visitComponent_decl(this);
  else
    return visitor->visitChildren(this);
}

IDLParser::Component_declContext* IDLParser::component_decl() {
  Component_declContext *_localctx = _tracker.createInstance<Component_declContext>(_ctx, getState());
  enterRule(_localctx, 224, IDLParser::RuleComponent_decl);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1004);
    component_header();
    setState(1005);
    match(IDLParser::LEFT_BRACE);
    setState(1006);
    component_body();
    setState(1007);
    match(IDLParser::RIGHT_BRACE);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Component_headerContext ------------------------------------------------------------------

IDLParser::Component_headerContext::Component_headerContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* IDLParser::Component_headerContext::KW_COMPONENT() {
  return getToken(IDLParser::KW_COMPONENT, 0);
}

tree::TerminalNode* IDLParser::Component_headerContext::ID() {
  return getToken(IDLParser::ID, 0);
}

IDLParser::Component_inheritance_specContext* IDLParser::Component_headerContext::component_inheritance_spec() {
  return getRuleContext<IDLParser::Component_inheritance_specContext>(0);
}

IDLParser::Supported_interface_specContext* IDLParser::Component_headerContext::supported_interface_spec() {
  return getRuleContext<IDLParser::Supported_interface_specContext>(0);
}


size_t IDLParser::Component_headerContext::getRuleIndex() const {
  return IDLParser::RuleComponent_header;
}

antlrcpp::Any IDLParser::Component_headerContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<IDLVisitor*>(visitor))
    return parserVisitor->visitComponent_header(this);
  else
    return visitor->visitChildren(this);
}

IDLParser::Component_headerContext* IDLParser::component_header() {
  Component_headerContext *_localctx = _tracker.createInstance<Component_headerContext>(_ctx, getState());
  enterRule(_localctx, 226, IDLParser::RuleComponent_header);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1009);
    match(IDLParser::KW_COMPONENT);
    setState(1010);
    match(IDLParser::ID);
    setState(1012);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == IDLParser::COLON) {
      setState(1011);
      component_inheritance_spec();
    }
    setState(1015);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == IDLParser::KW_SUPPORTS) {
      setState(1014);
      supported_interface_spec();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Supported_interface_specContext ------------------------------------------------------------------

IDLParser::Supported_interface_specContext::Supported_interface_specContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* IDLParser::Supported_interface_specContext::KW_SUPPORTS() {
  return getToken(IDLParser::KW_SUPPORTS, 0);
}

std::vector<IDLParser::Scoped_nameContext *> IDLParser::Supported_interface_specContext::scoped_name() {
  return getRuleContexts<IDLParser::Scoped_nameContext>();
}

IDLParser::Scoped_nameContext* IDLParser::Supported_interface_specContext::scoped_name(size_t i) {
  return getRuleContext<IDLParser::Scoped_nameContext>(i);
}

std::vector<tree::TerminalNode *> IDLParser::Supported_interface_specContext::COMA() {
  return getTokens(IDLParser::COMA);
}

tree::TerminalNode* IDLParser::Supported_interface_specContext::COMA(size_t i) {
  return getToken(IDLParser::COMA, i);
}


size_t IDLParser::Supported_interface_specContext::getRuleIndex() const {
  return IDLParser::RuleSupported_interface_spec;
}

antlrcpp::Any IDLParser::Supported_interface_specContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<IDLVisitor*>(visitor))
    return parserVisitor->visitSupported_interface_spec(this);
  else
    return visitor->visitChildren(this);
}

IDLParser::Supported_interface_specContext* IDLParser::supported_interface_spec() {
  Supported_interface_specContext *_localctx = _tracker.createInstance<Supported_interface_specContext>(_ctx, getState());
  enterRule(_localctx, 228, IDLParser::RuleSupported_interface_spec);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1017);
    match(IDLParser::KW_SUPPORTS);
    setState(1018);
    scoped_name();
    setState(1023);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == IDLParser::COMA) {
      setState(1019);
      match(IDLParser::COMA);
      setState(1020);
      scoped_name();
      setState(1025);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Component_inheritance_specContext ------------------------------------------------------------------

IDLParser::Component_inheritance_specContext::Component_inheritance_specContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* IDLParser::Component_inheritance_specContext::COLON() {
  return getToken(IDLParser::COLON, 0);
}

IDLParser::Scoped_nameContext* IDLParser::Component_inheritance_specContext::scoped_name() {
  return getRuleContext<IDLParser::Scoped_nameContext>(0);
}


size_t IDLParser::Component_inheritance_specContext::getRuleIndex() const {
  return IDLParser::RuleComponent_inheritance_spec;
}

antlrcpp::Any IDLParser::Component_inheritance_specContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<IDLVisitor*>(visitor))
    return parserVisitor->visitComponent_inheritance_spec(this);
  else
    return visitor->visitChildren(this);
}

IDLParser::Component_inheritance_specContext* IDLParser::component_inheritance_spec() {
  Component_inheritance_specContext *_localctx = _tracker.createInstance<Component_inheritance_specContext>(_ctx, getState());
  enterRule(_localctx, 230, IDLParser::RuleComponent_inheritance_spec);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1026);
    match(IDLParser::COLON);
    setState(1027);
    scoped_name();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Component_bodyContext ------------------------------------------------------------------

IDLParser::Component_bodyContext::Component_bodyContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<IDLParser::Component_exportContext *> IDLParser::Component_bodyContext::component_export() {
  return getRuleContexts<IDLParser::Component_exportContext>();
}

IDLParser::Component_exportContext* IDLParser::Component_bodyContext::component_export(size_t i) {
  return getRuleContext<IDLParser::Component_exportContext>(i);
}


size_t IDLParser::Component_bodyContext::getRuleIndex() const {
  return IDLParser::RuleComponent_body;
}

antlrcpp::Any IDLParser::Component_bodyContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<IDLVisitor*>(visitor))
    return parserVisitor->visitComponent_body(this);
  else
    return visitor->visitChildren(this);
}

IDLParser::Component_bodyContext* IDLParser::component_body() {
  Component_bodyContext *_localctx = _tracker.createInstance<Component_bodyContext>(_ctx, getState());
  enterRule(_localctx, 232, IDLParser::RuleComponent_body);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1032);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (((((_la - 37) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 37)) & ((1ULL << (IDLParser::KW_EMITS - 37))
      | (1ULL << (IDLParser::KW_PUBLISHES - 37))
      | (1ULL << (IDLParser::KW_USES - 37))
      | (1ULL << (IDLParser::KW_READONLY - 37))
      | (1ULL << (IDLParser::KW_PROVIDES - 37))
      | (1ULL << (IDLParser::KW_CONSUMES - 37))
      | (1ULL << (IDLParser::KW_ATTRIBUTE - 37)))) != 0)) {
      setState(1029);
      component_export();
      setState(1034);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Component_exportContext ------------------------------------------------------------------

IDLParser::Component_exportContext::Component_exportContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

IDLParser::Provides_declContext* IDLParser::Component_exportContext::provides_decl() {
  return getRuleContext<IDLParser::Provides_declContext>(0);
}

tree::TerminalNode* IDLParser::Component_exportContext::SEMICOLON() {
  return getToken(IDLParser::SEMICOLON, 0);
}

IDLParser::Uses_declContext* IDLParser::Component_exportContext::uses_decl() {
  return getRuleContext<IDLParser::Uses_declContext>(0);
}

IDLParser::Emits_declContext* IDLParser::Component_exportContext::emits_decl() {
  return getRuleContext<IDLParser::Emits_declContext>(0);
}

IDLParser::Publishes_declContext* IDLParser::Component_exportContext::publishes_decl() {
  return getRuleContext<IDLParser::Publishes_declContext>(0);
}

IDLParser::Consumes_declContext* IDLParser::Component_exportContext::consumes_decl() {
  return getRuleContext<IDLParser::Consumes_declContext>(0);
}

IDLParser::Attr_declContext* IDLParser::Component_exportContext::attr_decl() {
  return getRuleContext<IDLParser::Attr_declContext>(0);
}


size_t IDLParser::Component_exportContext::getRuleIndex() const {
  return IDLParser::RuleComponent_export;
}

antlrcpp::Any IDLParser::Component_exportContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<IDLVisitor*>(visitor))
    return parserVisitor->visitComponent_export(this);
  else
    return visitor->visitChildren(this);
}

IDLParser::Component_exportContext* IDLParser::component_export() {
  Component_exportContext *_localctx = _tracker.createInstance<Component_exportContext>(_ctx, getState());
  enterRule(_localctx, 234, IDLParser::RuleComponent_export);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1053);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case IDLParser::KW_PROVIDES: {
        enterOuterAlt(_localctx, 1);
        setState(1035);
        provides_decl();
        setState(1036);
        match(IDLParser::SEMICOLON);
        break;
      }

      case IDLParser::KW_USES: {
        enterOuterAlt(_localctx, 2);
        setState(1038);
        uses_decl();
        setState(1039);
        match(IDLParser::SEMICOLON);
        break;
      }

      case IDLParser::KW_EMITS: {
        enterOuterAlt(_localctx, 3);
        setState(1041);
        emits_decl();
        setState(1042);
        match(IDLParser::SEMICOLON);
        break;
      }

      case IDLParser::KW_PUBLISHES: {
        enterOuterAlt(_localctx, 4);
        setState(1044);
        publishes_decl();
        setState(1045);
        match(IDLParser::SEMICOLON);
        break;
      }

      case IDLParser::KW_CONSUMES: {
        enterOuterAlt(_localctx, 5);
        setState(1047);
        consumes_decl();
        setState(1048);
        match(IDLParser::SEMICOLON);
        break;
      }

      case IDLParser::KW_READONLY:
      case IDLParser::KW_ATTRIBUTE: {
        enterOuterAlt(_localctx, 6);
        setState(1050);
        attr_decl();
        setState(1051);
        match(IDLParser::SEMICOLON);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Provides_declContext ------------------------------------------------------------------

IDLParser::Provides_declContext::Provides_declContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* IDLParser::Provides_declContext::KW_PROVIDES() {
  return getToken(IDLParser::KW_PROVIDES, 0);
}

IDLParser::Interface_typeContext* IDLParser::Provides_declContext::interface_type() {
  return getRuleContext<IDLParser::Interface_typeContext>(0);
}

tree::TerminalNode* IDLParser::Provides_declContext::ID() {
  return getToken(IDLParser::ID, 0);
}


size_t IDLParser::Provides_declContext::getRuleIndex() const {
  return IDLParser::RuleProvides_decl;
}

antlrcpp::Any IDLParser::Provides_declContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<IDLVisitor*>(visitor))
    return parserVisitor->visitProvides_decl(this);
  else
    return visitor->visitChildren(this);
}

IDLParser::Provides_declContext* IDLParser::provides_decl() {
  Provides_declContext *_localctx = _tracker.createInstance<Provides_declContext>(_ctx, getState());
  enterRule(_localctx, 236, IDLParser::RuleProvides_decl);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1055);
    match(IDLParser::KW_PROVIDES);
    setState(1056);
    interface_type();
    setState(1057);
    match(IDLParser::ID);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Interface_typeContext ------------------------------------------------------------------

IDLParser::Interface_typeContext::Interface_typeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

IDLParser::Scoped_nameContext* IDLParser::Interface_typeContext::scoped_name() {
  return getRuleContext<IDLParser::Scoped_nameContext>(0);
}

tree::TerminalNode* IDLParser::Interface_typeContext::KW_OBJECT() {
  return getToken(IDLParser::KW_OBJECT, 0);
}


size_t IDLParser::Interface_typeContext::getRuleIndex() const {
  return IDLParser::RuleInterface_type;
}

antlrcpp::Any IDLParser::Interface_typeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<IDLVisitor*>(visitor))
    return parserVisitor->visitInterface_type(this);
  else
    return visitor->visitChildren(this);
}

IDLParser::Interface_typeContext* IDLParser::interface_type() {
  Interface_typeContext *_localctx = _tracker.createInstance<Interface_typeContext>(_ctx, getState());
  enterRule(_localctx, 238, IDLParser::RuleInterface_type);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1061);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case IDLParser::DOUBLE_COLON:
      case IDLParser::ID: {
        enterOuterAlt(_localctx, 1);
        setState(1059);
        scoped_name();
        break;
      }

      case IDLParser::KW_OBJECT: {
        enterOuterAlt(_localctx, 2);
        setState(1060);
        match(IDLParser::KW_OBJECT);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Uses_declContext ------------------------------------------------------------------

IDLParser::Uses_declContext::Uses_declContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* IDLParser::Uses_declContext::KW_USES() {
  return getToken(IDLParser::KW_USES, 0);
}

IDLParser::Interface_typeContext* IDLParser::Uses_declContext::interface_type() {
  return getRuleContext<IDLParser::Interface_typeContext>(0);
}

tree::TerminalNode* IDLParser::Uses_declContext::ID() {
  return getToken(IDLParser::ID, 0);
}

tree::TerminalNode* IDLParser::Uses_declContext::KW_MULTIPLE() {
  return getToken(IDLParser::KW_MULTIPLE, 0);
}


size_t IDLParser::Uses_declContext::getRuleIndex() const {
  return IDLParser::RuleUses_decl;
}

antlrcpp::Any IDLParser::Uses_declContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<IDLVisitor*>(visitor))
    return parserVisitor->visitUses_decl(this);
  else
    return visitor->visitChildren(this);
}

IDLParser::Uses_declContext* IDLParser::uses_decl() {
  Uses_declContext *_localctx = _tracker.createInstance<Uses_declContext>(_ctx, getState());
  enterRule(_localctx, 240, IDLParser::RuleUses_decl);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1063);
    match(IDLParser::KW_USES);
    setState(1065);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == IDLParser::KW_MULTIPLE) {
      setState(1064);
      match(IDLParser::KW_MULTIPLE);
    }
    setState(1067);
    interface_type();
    setState(1068);
    match(IDLParser::ID);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Emits_declContext ------------------------------------------------------------------

IDLParser::Emits_declContext::Emits_declContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* IDLParser::Emits_declContext::KW_EMITS() {
  return getToken(IDLParser::KW_EMITS, 0);
}

IDLParser::Scoped_nameContext* IDLParser::Emits_declContext::scoped_name() {
  return getRuleContext<IDLParser::Scoped_nameContext>(0);
}

tree::TerminalNode* IDLParser::Emits_declContext::ID() {
  return getToken(IDLParser::ID, 0);
}


size_t IDLParser::Emits_declContext::getRuleIndex() const {
  return IDLParser::RuleEmits_decl;
}

antlrcpp::Any IDLParser::Emits_declContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<IDLVisitor*>(visitor))
    return parserVisitor->visitEmits_decl(this);
  else
    return visitor->visitChildren(this);
}

IDLParser::Emits_declContext* IDLParser::emits_decl() {
  Emits_declContext *_localctx = _tracker.createInstance<Emits_declContext>(_ctx, getState());
  enterRule(_localctx, 242, IDLParser::RuleEmits_decl);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1070);
    match(IDLParser::KW_EMITS);
    setState(1071);
    scoped_name();
    setState(1072);
    match(IDLParser::ID);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Publishes_declContext ------------------------------------------------------------------

IDLParser::Publishes_declContext::Publishes_declContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* IDLParser::Publishes_declContext::KW_PUBLISHES() {
  return getToken(IDLParser::KW_PUBLISHES, 0);
}

IDLParser::Scoped_nameContext* IDLParser::Publishes_declContext::scoped_name() {
  return getRuleContext<IDLParser::Scoped_nameContext>(0);
}

tree::TerminalNode* IDLParser::Publishes_declContext::ID() {
  return getToken(IDLParser::ID, 0);
}


size_t IDLParser::Publishes_declContext::getRuleIndex() const {
  return IDLParser::RulePublishes_decl;
}

antlrcpp::Any IDLParser::Publishes_declContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<IDLVisitor*>(visitor))
    return parserVisitor->visitPublishes_decl(this);
  else
    return visitor->visitChildren(this);
}

IDLParser::Publishes_declContext* IDLParser::publishes_decl() {
  Publishes_declContext *_localctx = _tracker.createInstance<Publishes_declContext>(_ctx, getState());
  enterRule(_localctx, 244, IDLParser::RulePublishes_decl);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1074);
    match(IDLParser::KW_PUBLISHES);
    setState(1075);
    scoped_name();
    setState(1076);
    match(IDLParser::ID);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Consumes_declContext ------------------------------------------------------------------

IDLParser::Consumes_declContext::Consumes_declContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* IDLParser::Consumes_declContext::KW_CONSUMES() {
  return getToken(IDLParser::KW_CONSUMES, 0);
}

IDLParser::Scoped_nameContext* IDLParser::Consumes_declContext::scoped_name() {
  return getRuleContext<IDLParser::Scoped_nameContext>(0);
}

tree::TerminalNode* IDLParser::Consumes_declContext::ID() {
  return getToken(IDLParser::ID, 0);
}


size_t IDLParser::Consumes_declContext::getRuleIndex() const {
  return IDLParser::RuleConsumes_decl;
}

antlrcpp::Any IDLParser::Consumes_declContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<IDLVisitor*>(visitor))
    return parserVisitor->visitConsumes_decl(this);
  else
    return visitor->visitChildren(this);
}

IDLParser::Consumes_declContext* IDLParser::consumes_decl() {
  Consumes_declContext *_localctx = _tracker.createInstance<Consumes_declContext>(_ctx, getState());
  enterRule(_localctx, 246, IDLParser::RuleConsumes_decl);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1078);
    match(IDLParser::KW_CONSUMES);
    setState(1079);
    scoped_name();
    setState(1080);
    match(IDLParser::ID);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Home_declContext ------------------------------------------------------------------

IDLParser::Home_declContext::Home_declContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

IDLParser::Home_headerContext* IDLParser::Home_declContext::home_header() {
  return getRuleContext<IDLParser::Home_headerContext>(0);
}

IDLParser::Home_bodyContext* IDLParser::Home_declContext::home_body() {
  return getRuleContext<IDLParser::Home_bodyContext>(0);
}


size_t IDLParser::Home_declContext::getRuleIndex() const {
  return IDLParser::RuleHome_decl;
}

antlrcpp::Any IDLParser::Home_declContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<IDLVisitor*>(visitor))
    return parserVisitor->visitHome_decl(this);
  else
    return visitor->visitChildren(this);
}

IDLParser::Home_declContext* IDLParser::home_decl() {
  Home_declContext *_localctx = _tracker.createInstance<Home_declContext>(_ctx, getState());
  enterRule(_localctx, 248, IDLParser::RuleHome_decl);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1082);
    home_header();
    setState(1083);
    home_body();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Home_headerContext ------------------------------------------------------------------

IDLParser::Home_headerContext::Home_headerContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* IDLParser::Home_headerContext::KW_HOME() {
  return getToken(IDLParser::KW_HOME, 0);
}

tree::TerminalNode* IDLParser::Home_headerContext::ID() {
  return getToken(IDLParser::ID, 0);
}

tree::TerminalNode* IDLParser::Home_headerContext::KW_MANAGES() {
  return getToken(IDLParser::KW_MANAGES, 0);
}

IDLParser::Scoped_nameContext* IDLParser::Home_headerContext::scoped_name() {
  return getRuleContext<IDLParser::Scoped_nameContext>(0);
}

IDLParser::Home_inheritance_specContext* IDLParser::Home_headerContext::home_inheritance_spec() {
  return getRuleContext<IDLParser::Home_inheritance_specContext>(0);
}

IDLParser::Supported_interface_specContext* IDLParser::Home_headerContext::supported_interface_spec() {
  return getRuleContext<IDLParser::Supported_interface_specContext>(0);
}

IDLParser::Primary_key_specContext* IDLParser::Home_headerContext::primary_key_spec() {
  return getRuleContext<IDLParser::Primary_key_specContext>(0);
}


size_t IDLParser::Home_headerContext::getRuleIndex() const {
  return IDLParser::RuleHome_header;
}

antlrcpp::Any IDLParser::Home_headerContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<IDLVisitor*>(visitor))
    return parserVisitor->visitHome_header(this);
  else
    return visitor->visitChildren(this);
}

IDLParser::Home_headerContext* IDLParser::home_header() {
  Home_headerContext *_localctx = _tracker.createInstance<Home_headerContext>(_ctx, getState());
  enterRule(_localctx, 250, IDLParser::RuleHome_header);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1085);
    match(IDLParser::KW_HOME);
    setState(1086);
    match(IDLParser::ID);
    setState(1088);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == IDLParser::COLON) {
      setState(1087);
      home_inheritance_spec();
    }
    setState(1091);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == IDLParser::KW_SUPPORTS) {
      setState(1090);
      supported_interface_spec();
    }
    setState(1093);
    match(IDLParser::KW_MANAGES);
    setState(1094);
    scoped_name();
    setState(1096);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == IDLParser::KW_PRIMARYKEY) {
      setState(1095);
      primary_key_spec();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Home_inheritance_specContext ------------------------------------------------------------------

IDLParser::Home_inheritance_specContext::Home_inheritance_specContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* IDLParser::Home_inheritance_specContext::COLON() {
  return getToken(IDLParser::COLON, 0);
}

IDLParser::Scoped_nameContext* IDLParser::Home_inheritance_specContext::scoped_name() {
  return getRuleContext<IDLParser::Scoped_nameContext>(0);
}


size_t IDLParser::Home_inheritance_specContext::getRuleIndex() const {
  return IDLParser::RuleHome_inheritance_spec;
}

antlrcpp::Any IDLParser::Home_inheritance_specContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<IDLVisitor*>(visitor))
    return parserVisitor->visitHome_inheritance_spec(this);
  else
    return visitor->visitChildren(this);
}

IDLParser::Home_inheritance_specContext* IDLParser::home_inheritance_spec() {
  Home_inheritance_specContext *_localctx = _tracker.createInstance<Home_inheritance_specContext>(_ctx, getState());
  enterRule(_localctx, 252, IDLParser::RuleHome_inheritance_spec);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1098);
    match(IDLParser::COLON);
    setState(1099);
    scoped_name();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Primary_key_specContext ------------------------------------------------------------------

IDLParser::Primary_key_specContext::Primary_key_specContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* IDLParser::Primary_key_specContext::KW_PRIMARYKEY() {
  return getToken(IDLParser::KW_PRIMARYKEY, 0);
}

IDLParser::Scoped_nameContext* IDLParser::Primary_key_specContext::scoped_name() {
  return getRuleContext<IDLParser::Scoped_nameContext>(0);
}


size_t IDLParser::Primary_key_specContext::getRuleIndex() const {
  return IDLParser::RulePrimary_key_spec;
}

antlrcpp::Any IDLParser::Primary_key_specContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<IDLVisitor*>(visitor))
    return parserVisitor->visitPrimary_key_spec(this);
  else
    return visitor->visitChildren(this);
}

IDLParser::Primary_key_specContext* IDLParser::primary_key_spec() {
  Primary_key_specContext *_localctx = _tracker.createInstance<Primary_key_specContext>(_ctx, getState());
  enterRule(_localctx, 254, IDLParser::RulePrimary_key_spec);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1101);
    match(IDLParser::KW_PRIMARYKEY);
    setState(1102);
    scoped_name();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Home_bodyContext ------------------------------------------------------------------

IDLParser::Home_bodyContext::Home_bodyContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* IDLParser::Home_bodyContext::LEFT_BRACE() {
  return getToken(IDLParser::LEFT_BRACE, 0);
}

tree::TerminalNode* IDLParser::Home_bodyContext::RIGHT_BRACE() {
  return getToken(IDLParser::RIGHT_BRACE, 0);
}

std::vector<IDLParser::Home_exportContext *> IDLParser::Home_bodyContext::home_export() {
  return getRuleContexts<IDLParser::Home_exportContext>();
}

IDLParser::Home_exportContext* IDLParser::Home_bodyContext::home_export(size_t i) {
  return getRuleContext<IDLParser::Home_exportContext>(i);
}


size_t IDLParser::Home_bodyContext::getRuleIndex() const {
  return IDLParser::RuleHome_body;
}

antlrcpp::Any IDLParser::Home_bodyContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<IDLVisitor*>(visitor))
    return parserVisitor->visitHome_body(this);
  else
    return visitor->visitChildren(this);
}

IDLParser::Home_bodyContext* IDLParser::home_body() {
  Home_bodyContext *_localctx = _tracker.createInstance<Home_bodyContext>(_ctx, getState());
  enterRule(_localctx, 256, IDLParser::RuleHome_body);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1104);
    match(IDLParser::LEFT_BRACE);
    setState(1108);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << IDLParser::DOUBLE_COLON)
      | (1ULL << IDLParser::KW_STRING)
      | (1ULL << IDLParser::KW_TYPEDEF)
      | (1ULL << IDLParser::KW_OCTET)
      | (1ULL << IDLParser::KW_STRUCT)
      | (1ULL << IDLParser::KW_NATIVE)
      | (1ULL << IDLParser::KW_READONLY)
      | (1ULL << IDLParser::KW_FINDER)
      | (1ULL << IDLParser::KW_VOID)
      | (1ULL << IDLParser::KW_WCHAR)
      | (1ULL << IDLParser::KW_SHORT)
      | (1ULL << IDLParser::KW_LONG)
      | (1ULL << IDLParser::KW_ENUM)
      | (1ULL << IDLParser::KW_WSTRING))) != 0) || ((((_la - 66) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 66)) & ((1ULL << (IDLParser::KW_FACTORY - 66))
      | (1ULL << (IDLParser::KW_EXCEPTION - 66))
      | (1ULL << (IDLParser::KW_CONST - 66))
      | (1ULL << (IDLParser::KW_VALUEBASE - 66))
      | (1ULL << (IDLParser::KW_OBJECT - 66))
      | (1ULL << (IDLParser::KW_UNSIGNED - 66))
      | (1ULL << (IDLParser::KW_UNION - 66))
      | (1ULL << (IDLParser::KW_ONEWAY - 66))
      | (1ULL << (IDLParser::KW_ANY - 66))
      | (1ULL << (IDLParser::KW_CHAR - 66))
      | (1ULL << (IDLParser::KW_FLOAT - 66))
      | (1ULL << (IDLParser::KW_BOOLEAN - 66))
      | (1ULL << (IDLParser::KW_DOUBLE - 66))
      | (1ULL << (IDLParser::KW_TYPEPREFIX - 66))
      | (1ULL << (IDLParser::KW_TYPEID - 66))
      | (1ULL << (IDLParser::KW_ATTRIBUTE - 66))
      | (1ULL << (IDLParser::ID - 66)))) != 0)) {
      setState(1105);
      home_export();
      setState(1110);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(1111);
    match(IDLParser::RIGHT_BRACE);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Home_exportContext ------------------------------------------------------------------

IDLParser::Home_exportContext::Home_exportContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

IDLParser::Idl_exportContext* IDLParser::Home_exportContext::idl_export() {
  return getRuleContext<IDLParser::Idl_exportContext>(0);
}

IDLParser::Factory_declContext* IDLParser::Home_exportContext::factory_decl() {
  return getRuleContext<IDLParser::Factory_declContext>(0);
}

tree::TerminalNode* IDLParser::Home_exportContext::SEMICOLON() {
  return getToken(IDLParser::SEMICOLON, 0);
}

IDLParser::Finder_declContext* IDLParser::Home_exportContext::finder_decl() {
  return getRuleContext<IDLParser::Finder_declContext>(0);
}


size_t IDLParser::Home_exportContext::getRuleIndex() const {
  return IDLParser::RuleHome_export;
}

antlrcpp::Any IDLParser::Home_exportContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<IDLVisitor*>(visitor))
    return parserVisitor->visitHome_export(this);
  else
    return visitor->visitChildren(this);
}

IDLParser::Home_exportContext* IDLParser::home_export() {
  Home_exportContext *_localctx = _tracker.createInstance<Home_exportContext>(_ctx, getState());
  enterRule(_localctx, 258, IDLParser::RuleHome_export);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1120);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case IDLParser::DOUBLE_COLON:
      case IDLParser::KW_STRING:
      case IDLParser::KW_TYPEDEF:
      case IDLParser::KW_OCTET:
      case IDLParser::KW_STRUCT:
      case IDLParser::KW_NATIVE:
      case IDLParser::KW_READONLY:
      case IDLParser::KW_VOID:
      case IDLParser::KW_WCHAR:
      case IDLParser::KW_SHORT:
      case IDLParser::KW_LONG:
      case IDLParser::KW_ENUM:
      case IDLParser::KW_WSTRING:
      case IDLParser::KW_EXCEPTION:
      case IDLParser::KW_CONST:
      case IDLParser::KW_VALUEBASE:
      case IDLParser::KW_OBJECT:
      case IDLParser::KW_UNSIGNED:
      case IDLParser::KW_UNION:
      case IDLParser::KW_ONEWAY:
      case IDLParser::KW_ANY:
      case IDLParser::KW_CHAR:
      case IDLParser::KW_FLOAT:
      case IDLParser::KW_BOOLEAN:
      case IDLParser::KW_DOUBLE:
      case IDLParser::KW_TYPEPREFIX:
      case IDLParser::KW_TYPEID:
      case IDLParser::KW_ATTRIBUTE:
      case IDLParser::ID: {
        enterOuterAlt(_localctx, 1);
        setState(1113);
        idl_export();
        break;
      }

      case IDLParser::KW_FACTORY: {
        enterOuterAlt(_localctx, 2);
        setState(1114);
        factory_decl();
        setState(1115);
        match(IDLParser::SEMICOLON);
        break;
      }

      case IDLParser::KW_FINDER: {
        enterOuterAlt(_localctx, 3);
        setState(1117);
        finder_decl();
        setState(1118);
        match(IDLParser::SEMICOLON);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Factory_declContext ------------------------------------------------------------------

IDLParser::Factory_declContext::Factory_declContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* IDLParser::Factory_declContext::KW_FACTORY() {
  return getToken(IDLParser::KW_FACTORY, 0);
}

tree::TerminalNode* IDLParser::Factory_declContext::ID() {
  return getToken(IDLParser::ID, 0);
}

tree::TerminalNode* IDLParser::Factory_declContext::LEFT_BRACKET() {
  return getToken(IDLParser::LEFT_BRACKET, 0);
}

tree::TerminalNode* IDLParser::Factory_declContext::RIGHT_BRACKET() {
  return getToken(IDLParser::RIGHT_BRACKET, 0);
}

IDLParser::Init_param_declsContext* IDLParser::Factory_declContext::init_param_decls() {
  return getRuleContext<IDLParser::Init_param_declsContext>(0);
}

IDLParser::Raises_exprContext* IDLParser::Factory_declContext::raises_expr() {
  return getRuleContext<IDLParser::Raises_exprContext>(0);
}


size_t IDLParser::Factory_declContext::getRuleIndex() const {
  return IDLParser::RuleFactory_decl;
}

antlrcpp::Any IDLParser::Factory_declContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<IDLVisitor*>(visitor))
    return parserVisitor->visitFactory_decl(this);
  else
    return visitor->visitChildren(this);
}

IDLParser::Factory_declContext* IDLParser::factory_decl() {
  Factory_declContext *_localctx = _tracker.createInstance<Factory_declContext>(_ctx, getState());
  enterRule(_localctx, 260, IDLParser::RuleFactory_decl);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1122);
    match(IDLParser::KW_FACTORY);
    setState(1123);
    match(IDLParser::ID);
    setState(1124);
    match(IDLParser::LEFT_BRACKET);
    setState(1126);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == IDLParser::KW_IN) {
      setState(1125);
      init_param_decls();
    }
    setState(1128);
    match(IDLParser::RIGHT_BRACKET);
    setState(1130);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == IDLParser::KW_RAISES) {
      setState(1129);
      raises_expr();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Finder_declContext ------------------------------------------------------------------

IDLParser::Finder_declContext::Finder_declContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* IDLParser::Finder_declContext::KW_FINDER() {
  return getToken(IDLParser::KW_FINDER, 0);
}

tree::TerminalNode* IDLParser::Finder_declContext::ID() {
  return getToken(IDLParser::ID, 0);
}

tree::TerminalNode* IDLParser::Finder_declContext::LEFT_BRACKET() {
  return getToken(IDLParser::LEFT_BRACKET, 0);
}

tree::TerminalNode* IDLParser::Finder_declContext::RIGHT_BRACKET() {
  return getToken(IDLParser::RIGHT_BRACKET, 0);
}

IDLParser::Init_param_declsContext* IDLParser::Finder_declContext::init_param_decls() {
  return getRuleContext<IDLParser::Init_param_declsContext>(0);
}

IDLParser::Raises_exprContext* IDLParser::Finder_declContext::raises_expr() {
  return getRuleContext<IDLParser::Raises_exprContext>(0);
}


size_t IDLParser::Finder_declContext::getRuleIndex() const {
  return IDLParser::RuleFinder_decl;
}

antlrcpp::Any IDLParser::Finder_declContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<IDLVisitor*>(visitor))
    return parserVisitor->visitFinder_decl(this);
  else
    return visitor->visitChildren(this);
}

IDLParser::Finder_declContext* IDLParser::finder_decl() {
  Finder_declContext *_localctx = _tracker.createInstance<Finder_declContext>(_ctx, getState());
  enterRule(_localctx, 262, IDLParser::RuleFinder_decl);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1132);
    match(IDLParser::KW_FINDER);
    setState(1133);
    match(IDLParser::ID);
    setState(1134);
    match(IDLParser::LEFT_BRACKET);
    setState(1136);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == IDLParser::KW_IN) {
      setState(1135);
      init_param_decls();
    }
    setState(1138);
    match(IDLParser::RIGHT_BRACKET);
    setState(1140);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == IDLParser::KW_RAISES) {
      setState(1139);
      raises_expr();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- EventContext ------------------------------------------------------------------

IDLParser::EventContext::EventContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

IDLParser::Event_declContext* IDLParser::EventContext::event_decl() {
  return getRuleContext<IDLParser::Event_declContext>(0);
}

IDLParser::Event_abs_declContext* IDLParser::EventContext::event_abs_decl() {
  return getRuleContext<IDLParser::Event_abs_declContext>(0);
}

IDLParser::Event_forward_declContext* IDLParser::EventContext::event_forward_decl() {
  return getRuleContext<IDLParser::Event_forward_declContext>(0);
}


size_t IDLParser::EventContext::getRuleIndex() const {
  return IDLParser::RuleEvent;
}

antlrcpp::Any IDLParser::EventContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<IDLVisitor*>(visitor))
    return parserVisitor->visitEvent(this);
  else
    return visitor->visitChildren(this);
}

IDLParser::EventContext* IDLParser::event() {
  EventContext *_localctx = _tracker.createInstance<EventContext>(_ctx, getState());
  enterRule(_localctx, 264, IDLParser::RuleEvent);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1145);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 95, _ctx)) {
    case 1: {
      setState(1142);
      event_decl();
      break;
    }

    case 2: {
      setState(1143);
      event_abs_decl();
      break;
    }

    case 3: {
      setState(1144);
      event_forward_decl();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Event_forward_declContext ------------------------------------------------------------------

IDLParser::Event_forward_declContext::Event_forward_declContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* IDLParser::Event_forward_declContext::KW_EVENTTYPE() {
  return getToken(IDLParser::KW_EVENTTYPE, 0);
}

tree::TerminalNode* IDLParser::Event_forward_declContext::ID() {
  return getToken(IDLParser::ID, 0);
}

tree::TerminalNode* IDLParser::Event_forward_declContext::KW_ABSTRACT() {
  return getToken(IDLParser::KW_ABSTRACT, 0);
}


size_t IDLParser::Event_forward_declContext::getRuleIndex() const {
  return IDLParser::RuleEvent_forward_decl;
}

antlrcpp::Any IDLParser::Event_forward_declContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<IDLVisitor*>(visitor))
    return parserVisitor->visitEvent_forward_decl(this);
  else
    return visitor->visitChildren(this);
}

IDLParser::Event_forward_declContext* IDLParser::event_forward_decl() {
  Event_forward_declContext *_localctx = _tracker.createInstance<Event_forward_declContext>(_ctx, getState());
  enterRule(_localctx, 266, IDLParser::RuleEvent_forward_decl);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1148);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == IDLParser::KW_ABSTRACT) {
      setState(1147);
      match(IDLParser::KW_ABSTRACT);
    }
    setState(1150);
    match(IDLParser::KW_EVENTTYPE);
    setState(1151);
    match(IDLParser::ID);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Event_abs_declContext ------------------------------------------------------------------

IDLParser::Event_abs_declContext::Event_abs_declContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* IDLParser::Event_abs_declContext::KW_ABSTRACT() {
  return getToken(IDLParser::KW_ABSTRACT, 0);
}

tree::TerminalNode* IDLParser::Event_abs_declContext::KW_EVENTTYPE() {
  return getToken(IDLParser::KW_EVENTTYPE, 0);
}

tree::TerminalNode* IDLParser::Event_abs_declContext::ID() {
  return getToken(IDLParser::ID, 0);
}

IDLParser::Value_inheritance_specContext* IDLParser::Event_abs_declContext::value_inheritance_spec() {
  return getRuleContext<IDLParser::Value_inheritance_specContext>(0);
}

tree::TerminalNode* IDLParser::Event_abs_declContext::LEFT_BRACE() {
  return getToken(IDLParser::LEFT_BRACE, 0);
}

tree::TerminalNode* IDLParser::Event_abs_declContext::RIGHT_BRACE() {
  return getToken(IDLParser::RIGHT_BRACE, 0);
}

std::vector<IDLParser::Idl_exportContext *> IDLParser::Event_abs_declContext::idl_export() {
  return getRuleContexts<IDLParser::Idl_exportContext>();
}

IDLParser::Idl_exportContext* IDLParser::Event_abs_declContext::idl_export(size_t i) {
  return getRuleContext<IDLParser::Idl_exportContext>(i);
}


size_t IDLParser::Event_abs_declContext::getRuleIndex() const {
  return IDLParser::RuleEvent_abs_decl;
}

antlrcpp::Any IDLParser::Event_abs_declContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<IDLVisitor*>(visitor))
    return parserVisitor->visitEvent_abs_decl(this);
  else
    return visitor->visitChildren(this);
}

IDLParser::Event_abs_declContext* IDLParser::event_abs_decl() {
  Event_abs_declContext *_localctx = _tracker.createInstance<Event_abs_declContext>(_ctx, getState());
  enterRule(_localctx, 268, IDLParser::RuleEvent_abs_decl);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1153);
    match(IDLParser::KW_ABSTRACT);
    setState(1154);
    match(IDLParser::KW_EVENTTYPE);
    setState(1155);
    match(IDLParser::ID);
    setState(1156);
    value_inheritance_spec();
    setState(1157);
    match(IDLParser::LEFT_BRACE);
    setState(1161);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << IDLParser::DOUBLE_COLON)
      | (1ULL << IDLParser::KW_STRING)
      | (1ULL << IDLParser::KW_TYPEDEF)
      | (1ULL << IDLParser::KW_OCTET)
      | (1ULL << IDLParser::KW_STRUCT)
      | (1ULL << IDLParser::KW_NATIVE)
      | (1ULL << IDLParser::KW_READONLY)
      | (1ULL << IDLParser::KW_VOID)
      | (1ULL << IDLParser::KW_WCHAR)
      | (1ULL << IDLParser::KW_SHORT)
      | (1ULL << IDLParser::KW_LONG)
      | (1ULL << IDLParser::KW_ENUM)
      | (1ULL << IDLParser::KW_WSTRING))) != 0) || ((((_la - 67) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 67)) & ((1ULL << (IDLParser::KW_EXCEPTION - 67))
      | (1ULL << (IDLParser::KW_CONST - 67))
      | (1ULL << (IDLParser::KW_VALUEBASE - 67))
      | (1ULL << (IDLParser::KW_OBJECT - 67))
      | (1ULL << (IDLParser::KW_UNSIGNED - 67))
      | (1ULL << (IDLParser::KW_UNION - 67))
      | (1ULL << (IDLParser::KW_ONEWAY - 67))
      | (1ULL << (IDLParser::KW_ANY - 67))
      | (1ULL << (IDLParser::KW_CHAR - 67))
      | (1ULL << (IDLParser::KW_FLOAT - 67))
      | (1ULL << (IDLParser::KW_BOOLEAN - 67))
      | (1ULL << (IDLParser::KW_DOUBLE - 67))
      | (1ULL << (IDLParser::KW_TYPEPREFIX - 67))
      | (1ULL << (IDLParser::KW_TYPEID - 67))
      | (1ULL << (IDLParser::KW_ATTRIBUTE - 67))
      | (1ULL << (IDLParser::ID - 67)))) != 0)) {
      setState(1158);
      idl_export();
      setState(1163);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(1164);
    match(IDLParser::RIGHT_BRACE);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Event_declContext ------------------------------------------------------------------

IDLParser::Event_declContext::Event_declContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

IDLParser::Event_headerContext* IDLParser::Event_declContext::event_header() {
  return getRuleContext<IDLParser::Event_headerContext>(0);
}

tree::TerminalNode* IDLParser::Event_declContext::LEFT_BRACE() {
  return getToken(IDLParser::LEFT_BRACE, 0);
}

tree::TerminalNode* IDLParser::Event_declContext::RIGHT_BRACE() {
  return getToken(IDLParser::RIGHT_BRACE, 0);
}

std::vector<IDLParser::Value_elementContext *> IDLParser::Event_declContext::value_element() {
  return getRuleContexts<IDLParser::Value_elementContext>();
}

IDLParser::Value_elementContext* IDLParser::Event_declContext::value_element(size_t i) {
  return getRuleContext<IDLParser::Value_elementContext>(i);
}


size_t IDLParser::Event_declContext::getRuleIndex() const {
  return IDLParser::RuleEvent_decl;
}

antlrcpp::Any IDLParser::Event_declContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<IDLVisitor*>(visitor))
    return parserVisitor->visitEvent_decl(this);
  else
    return visitor->visitChildren(this);
}

IDLParser::Event_declContext* IDLParser::event_decl() {
  Event_declContext *_localctx = _tracker.createInstance<Event_declContext>(_ctx, getState());
  enterRule(_localctx, 270, IDLParser::RuleEvent_decl);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1166);
    event_header();
    setState(1167);
    match(IDLParser::LEFT_BRACE);
    setState(1171);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << IDLParser::DOUBLE_COLON)
      | (1ULL << IDLParser::KW_STRING)
      | (1ULL << IDLParser::KW_TYPEDEF)
      | (1ULL << IDLParser::KW_OCTET)
      | (1ULL << IDLParser::KW_STRUCT)
      | (1ULL << IDLParser::KW_NATIVE)
      | (1ULL << IDLParser::KW_READONLY)
      | (1ULL << IDLParser::KW_VOID)
      | (1ULL << IDLParser::KW_PRIVATE)
      | (1ULL << IDLParser::KW_WCHAR)
      | (1ULL << IDLParser::KW_PUBLIC)
      | (1ULL << IDLParser::KW_SHORT)
      | (1ULL << IDLParser::KW_LONG)
      | (1ULL << IDLParser::KW_ENUM)
      | (1ULL << IDLParser::KW_WSTRING))) != 0) || ((((_la - 66) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 66)) & ((1ULL << (IDLParser::KW_FACTORY - 66))
      | (1ULL << (IDLParser::KW_EXCEPTION - 66))
      | (1ULL << (IDLParser::KW_CONST - 66))
      | (1ULL << (IDLParser::KW_VALUEBASE - 66))
      | (1ULL << (IDLParser::KW_OBJECT - 66))
      | (1ULL << (IDLParser::KW_UNSIGNED - 66))
      | (1ULL << (IDLParser::KW_UNION - 66))
      | (1ULL << (IDLParser::KW_ONEWAY - 66))
      | (1ULL << (IDLParser::KW_ANY - 66))
      | (1ULL << (IDLParser::KW_CHAR - 66))
      | (1ULL << (IDLParser::KW_FLOAT - 66))
      | (1ULL << (IDLParser::KW_BOOLEAN - 66))
      | (1ULL << (IDLParser::KW_DOUBLE - 66))
      | (1ULL << (IDLParser::KW_TYPEPREFIX - 66))
      | (1ULL << (IDLParser::KW_TYPEID - 66))
      | (1ULL << (IDLParser::KW_ATTRIBUTE - 66))
      | (1ULL << (IDLParser::ID - 66)))) != 0)) {
      setState(1168);
      value_element();
      setState(1173);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(1174);
    match(IDLParser::RIGHT_BRACE);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Event_headerContext ------------------------------------------------------------------

IDLParser::Event_headerContext::Event_headerContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* IDLParser::Event_headerContext::KW_EVENTTYPE() {
  return getToken(IDLParser::KW_EVENTTYPE, 0);
}

tree::TerminalNode* IDLParser::Event_headerContext::ID() {
  return getToken(IDLParser::ID, 0);
}

IDLParser::Value_inheritance_specContext* IDLParser::Event_headerContext::value_inheritance_spec() {
  return getRuleContext<IDLParser::Value_inheritance_specContext>(0);
}

tree::TerminalNode* IDLParser::Event_headerContext::KW_CUSTOM() {
  return getToken(IDLParser::KW_CUSTOM, 0);
}


size_t IDLParser::Event_headerContext::getRuleIndex() const {
  return IDLParser::RuleEvent_header;
}

antlrcpp::Any IDLParser::Event_headerContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<IDLVisitor*>(visitor))
    return parserVisitor->visitEvent_header(this);
  else
    return visitor->visitChildren(this);
}

IDLParser::Event_headerContext* IDLParser::event_header() {
  Event_headerContext *_localctx = _tracker.createInstance<Event_headerContext>(_ctx, getState());
  enterRule(_localctx, 272, IDLParser::RuleEvent_header);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1177);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == IDLParser::KW_CUSTOM) {
      setState(1176);
      match(IDLParser::KW_CUSTOM);
    }
    setState(1179);
    match(IDLParser::KW_EVENTTYPE);
    setState(1180);
    match(IDLParser::ID);
    setState(1181);
    value_inheritance_spec();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

// Static vars and initialization.
std::vector<dfa::DFA> IDLParser::_decisionToDFA;
atn::PredictionContextCache IDLParser::_sharedContextCache;

// We own the ATN which in turn owns the ATN states.
atn::ATN IDLParser::_atn;
std::vector<uint16_t> IDLParser::_serializedATN;

std::vector<std::string> IDLParser::_ruleNames = {
  "specification", "definition", "module", "interface_or_forward_decl", 
  "interface_decl", "forward_decl", "interface_header", "interface_body", 
  "idl_export", "interface_inheritance_spec", "interface_name", "scoped_name", 
  "value", "value_forward_decl", "value_box_decl", "value_abs_decl", "value_decl", 
  "value_header", "value_inheritance_spec", "value_name", "value_element", 
  "state_member", "init_decl", "init_param_decls", "init_param_decl", "init_param_attribute", 
  "const_decl", "const_type", "const_exp", "or_expr", "xor_expr", "and_expr", 
  "shift_expr", "add_expr", "mult_expr", "unary_expr", "unary_operator", 
  "primary_expr", "literal", "positive_int_const", "type_decl", "type_declarator", 
  "type_spec", "simple_type_spec", "base_type_spec", "template_type_spec", 
  "constr_type_spec", "declarators", "declarator", "simple_declarator", 
  "complex_declarator", "floating_pt_type", "integer_type", "signed_int", 
  "signed_short_int", "signed_long_int", "signed_longlong_int", "unsigned_int", 
  "unsigned_short_int", "unsigned_long_int", "unsigned_longlong_int", "char_type", 
  "wide_char_type", "boolean_type", "octet_type", "any_type", "object_type", 
  "struct_type", "member_list", "member", "union_type", "switch_type_spec", 
  "switch_body", "case_stmt", "case_label", "element_spec", "enum_type", 
  "enumerator", "sequence_type", "string_type", "wide_string_type", "array_declarator", 
  "fixed_array_size", "attr_decl", "except_decl", "op_decl", "op_attribute", 
  "op_type_spec", "parameter_decls", "param_decl", "param_attribute", "raises_expr", 
  "context_expr", "param_type_spec", "fixed_pt_type", "fixed_pt_const_type", 
  "value_base_type", "constr_forward_decl", "import_decl", "imported_scope", 
  "type_id_decl", "type_prefix_decl", "readonly_attr_spec", "readonly_attr_declarator", 
  "attr_spec", "attr_declarator", "attr_raises_expr", "get_excep_expr", 
  "set_excep_expr", "exception_list", "component", "component_forward_decl", 
  "component_decl", "component_header", "supported_interface_spec", "component_inheritance_spec", 
  "component_body", "component_export", "provides_decl", "interface_type", 
  "uses_decl", "emits_decl", "publishes_decl", "consumes_decl", "home_decl", 
  "home_header", "home_inheritance_spec", "primary_key_spec", "home_body", 
  "home_export", "factory_decl", "finder_decl", "event", "event_forward_decl", 
  "event_abs_decl", "event_decl", "event_header"
};

std::vector<std::string> IDLParser::_literalNames = {
  "", "", "", "", "", "", "", "", "", "", "", "';'", "':'", "','", "'{'", 
  "'}'", "'('", "')'", "'['", "']'", "'~'", "'/'", "'<'", "'>'", "'*'", 
  "'+'", "'-'", "'^'", "'&'", "'|'", "'='", "'%'", "'::'", "'>>'", "'<<'", 
  "'setraises'", "'out'", "'emits'", "'string'", "'switch'", "'publishes'", 
  "'typedef'", "'uses'", "'primarykey'", "'custom'", "'octet'", "'sequence'", 
  "'import'", "'struct'", "'native'", "'readonly'", "'finder'", "'raises'", 
  "'void'", "'private'", "'eventtype'", "'wchar'", "'in'", "'default'", 
  "'public'", "'short'", "'long'", "'enum'", "'wstring'", "'context'", "'home'", 
  "'factory'", "'exception'", "'getraises'", "'const'", "'ValueBase'", "'valuetype'", 
  "'supports'", "'module'", "'Object'", "'truncatable'", "'unsigned'", "'fixed'", 
  "'union'", "'oneway'", "'any'", "'char'", "'case'", "'float'", "'boolean'", 
  "'multiple'", "'abstract'", "'inout'", "'provides'", "'consumes'", "'double'", 
  "'typeprefix'", "'typeid'", "'attribute'", "'local'", "'manages'", "'interface'", 
  "'component'"
};

std::vector<std::string> IDLParser::_symbolicNames = {
  "", "INTEGER_LITERAL", "OCTAL_LITERAL", "HEX_LITERAL", "FLOATING_PT_LITERAL", 
  "FIXED_PT_LITERAL", "WIDE_CHARACTER_LITERAL", "CHARACTER_LITERAL", "WIDE_STRING_LITERAL", 
  "STRING_LITERAL", "BOOLEAN_LITERAL", "SEMICOLON", "COLON", "COMA", "LEFT_BRACE", 
  "RIGHT_BRACE", "LEFT_BRACKET", "RIGHT_BRACKET", "LEFT_SQUARE_BRACKET", 
  "RIGHT_SQUARE_BRACKET", "TILDE", "SLASH", "LEFT_ANG_BRACKET", "RIGHT_ANG_BRACKET", 
  "STAR", "PLUS", "MINUS", "CARET", "AMPERSAND", "PIPE", "EQUAL", "PERCENT", 
  "DOUBLE_COLON", "RIGHT_SHIFT", "LEFT_SHIFT", "KW_SETRAISES", "KW_OUT", 
  "KW_EMITS", "KW_STRING", "KW_SWITCH", "KW_PUBLISHES", "KW_TYPEDEF", "KW_USES", 
  "KW_PRIMARYKEY", "KW_CUSTOM", "KW_OCTET", "KW_SEQUENCE", "KW_IMPORT", 
  "KW_STRUCT", "KW_NATIVE", "KW_READONLY", "KW_FINDER", "KW_RAISES", "KW_VOID", 
  "KW_PRIVATE", "KW_EVENTTYPE", "KW_WCHAR", "KW_IN", "KW_DEFAULT", "KW_PUBLIC", 
  "KW_SHORT", "KW_LONG", "KW_ENUM", "KW_WSTRING", "KW_CONTEXT", "KW_HOME", 
  "KW_FACTORY", "KW_EXCEPTION", "KW_GETRAISES", "KW_CONST", "KW_VALUEBASE", 
  "KW_VALUETYPE", "KW_SUPPORTS", "KW_MODULE", "KW_OBJECT", "KW_TRUNCATABLE", 
  "KW_UNSIGNED", "KW_FIXED", "KW_UNION", "KW_ONEWAY", "KW_ANY", "KW_CHAR", 
  "KW_CASE", "KW_FLOAT", "KW_BOOLEAN", "KW_MULTIPLE", "KW_ABSTRACT", "KW_INOUT", 
  "KW_PROVIDES", "KW_CONSUMES", "KW_DOUBLE", "KW_TYPEPREFIX", "KW_TYPEID", 
  "KW_ATTRIBUTE", "KW_LOCAL", "KW_MANAGES", "KW_INTERFACE", "KW_COMPONENT", 
  "ID", "WS", "COMMENT", "LINE_COMMENT"
};

dfa::Vocabulary IDLParser::_vocabulary(_literalNames, _symbolicNames);

std::vector<std::string> IDLParser::_tokenNames;

IDLParser::Initializer::Initializer() {
	for (size_t i = 0; i < _symbolicNames.size(); ++i) {
		std::string name = _vocabulary.getLiteralName(i);
		if (name.empty()) {
			name = _vocabulary.getSymbolicName(i);
		}

		if (name.empty()) {
			_tokenNames.push_back("<INVALID>");
		} else {
      _tokenNames.push_back(name);
    }
	}

  _serializedATN = {
    0x3, 0x608b, 0xa72a, 0x8133, 0xb9ed, 0x417c, 0x3be7, 0x7786, 0x5964, 
    0x3, 0x67, 0x4a2, 0x4, 0x2, 0x9, 0x2, 0x4, 0x3, 0x9, 0x3, 0x4, 0x4, 
    0x9, 0x4, 0x4, 0x5, 0x9, 0x5, 0x4, 0x6, 0x9, 0x6, 0x4, 0x7, 0x9, 0x7, 
    0x4, 0x8, 0x9, 0x8, 0x4, 0x9, 0x9, 0x9, 0x4, 0xa, 0x9, 0xa, 0x4, 0xb, 
    0x9, 0xb, 0x4, 0xc, 0x9, 0xc, 0x4, 0xd, 0x9, 0xd, 0x4, 0xe, 0x9, 0xe, 
    0x4, 0xf, 0x9, 0xf, 0x4, 0x10, 0x9, 0x10, 0x4, 0x11, 0x9, 0x11, 0x4, 
    0x12, 0x9, 0x12, 0x4, 0x13, 0x9, 0x13, 0x4, 0x14, 0x9, 0x14, 0x4, 0x15, 
    0x9, 0x15, 0x4, 0x16, 0x9, 0x16, 0x4, 0x17, 0x9, 0x17, 0x4, 0x18, 0x9, 
    0x18, 0x4, 0x19, 0x9, 0x19, 0x4, 0x1a, 0x9, 0x1a, 0x4, 0x1b, 0x9, 0x1b, 
    0x4, 0x1c, 0x9, 0x1c, 0x4, 0x1d, 0x9, 0x1d, 0x4, 0x1e, 0x9, 0x1e, 0x4, 
    0x1f, 0x9, 0x1f, 0x4, 0x20, 0x9, 0x20, 0x4, 0x21, 0x9, 0x21, 0x4, 0x22, 
    0x9, 0x22, 0x4, 0x23, 0x9, 0x23, 0x4, 0x24, 0x9, 0x24, 0x4, 0x25, 0x9, 
    0x25, 0x4, 0x26, 0x9, 0x26, 0x4, 0x27, 0x9, 0x27, 0x4, 0x28, 0x9, 0x28, 
    0x4, 0x29, 0x9, 0x29, 0x4, 0x2a, 0x9, 0x2a, 0x4, 0x2b, 0x9, 0x2b, 0x4, 
    0x2c, 0x9, 0x2c, 0x4, 0x2d, 0x9, 0x2d, 0x4, 0x2e, 0x9, 0x2e, 0x4, 0x2f, 
    0x9, 0x2f, 0x4, 0x30, 0x9, 0x30, 0x4, 0x31, 0x9, 0x31, 0x4, 0x32, 0x9, 
    0x32, 0x4, 0x33, 0x9, 0x33, 0x4, 0x34, 0x9, 0x34, 0x4, 0x35, 0x9, 0x35, 
    0x4, 0x36, 0x9, 0x36, 0x4, 0x37, 0x9, 0x37, 0x4, 0x38, 0x9, 0x38, 0x4, 
    0x39, 0x9, 0x39, 0x4, 0x3a, 0x9, 0x3a, 0x4, 0x3b, 0x9, 0x3b, 0x4, 0x3c, 
    0x9, 0x3c, 0x4, 0x3d, 0x9, 0x3d, 0x4, 0x3e, 0x9, 0x3e, 0x4, 0x3f, 0x9, 
    0x3f, 0x4, 0x40, 0x9, 0x40, 0x4, 0x41, 0x9, 0x41, 0x4, 0x42, 0x9, 0x42, 
    0x4, 0x43, 0x9, 0x43, 0x4, 0x44, 0x9, 0x44, 0x4, 0x45, 0x9, 0x45, 0x4, 
    0x46, 0x9, 0x46, 0x4, 0x47, 0x9, 0x47, 0x4, 0x48, 0x9, 0x48, 0x4, 0x49, 
    0x9, 0x49, 0x4, 0x4a, 0x9, 0x4a, 0x4, 0x4b, 0x9, 0x4b, 0x4, 0x4c, 0x9, 
    0x4c, 0x4, 0x4d, 0x9, 0x4d, 0x4, 0x4e, 0x9, 0x4e, 0x4, 0x4f, 0x9, 0x4f, 
    0x4, 0x50, 0x9, 0x50, 0x4, 0x51, 0x9, 0x51, 0x4, 0x52, 0x9, 0x52, 0x4, 
    0x53, 0x9, 0x53, 0x4, 0x54, 0x9, 0x54, 0x4, 0x55, 0x9, 0x55, 0x4, 0x56, 
    0x9, 0x56, 0x4, 0x57, 0x9, 0x57, 0x4, 0x58, 0x9, 0x58, 0x4, 0x59, 0x9, 
    0x59, 0x4, 0x5a, 0x9, 0x5a, 0x4, 0x5b, 0x9, 0x5b, 0x4, 0x5c, 0x9, 0x5c, 
    0x4, 0x5d, 0x9, 0x5d, 0x4, 0x5e, 0x9, 0x5e, 0x4, 0x5f, 0x9, 0x5f, 0x4, 
    0x60, 0x9, 0x60, 0x4, 0x61, 0x9, 0x61, 0x4, 0x62, 0x9, 0x62, 0x4, 0x63, 
    0x9, 0x63, 0x4, 0x64, 0x9, 0x64, 0x4, 0x65, 0x9, 0x65, 0x4, 0x66, 0x9, 
    0x66, 0x4, 0x67, 0x9, 0x67, 0x4, 0x68, 0x9, 0x68, 0x4, 0x69, 0x9, 0x69, 
    0x4, 0x6a, 0x9, 0x6a, 0x4, 0x6b, 0x9, 0x6b, 0x4, 0x6c, 0x9, 0x6c, 0x4, 
    0x6d, 0x9, 0x6d, 0x4, 0x6e, 0x9, 0x6e, 0x4, 0x6f, 0x9, 0x6f, 0x4, 0x70, 
    0x9, 0x70, 0x4, 0x71, 0x9, 0x71, 0x4, 0x72, 0x9, 0x72, 0x4, 0x73, 0x9, 
    0x73, 0x4, 0x74, 0x9, 0x74, 0x4, 0x75, 0x9, 0x75, 0x4, 0x76, 0x9, 0x76, 
    0x4, 0x77, 0x9, 0x77, 0x4, 0x78, 0x9, 0x78, 0x4, 0x79, 0x9, 0x79, 0x4, 
    0x7a, 0x9, 0x7a, 0x4, 0x7b, 0x9, 0x7b, 0x4, 0x7c, 0x9, 0x7c, 0x4, 0x7d, 
    0x9, 0x7d, 0x4, 0x7e, 0x9, 0x7e, 0x4, 0x7f, 0x9, 0x7f, 0x4, 0x80, 0x9, 
    0x80, 0x4, 0x81, 0x9, 0x81, 0x4, 0x82, 0x9, 0x82, 0x4, 0x83, 0x9, 0x83, 
    0x4, 0x84, 0x9, 0x84, 0x4, 0x85, 0x9, 0x85, 0x4, 0x86, 0x9, 0x86, 0x4, 
    0x87, 0x9, 0x87, 0x4, 0x88, 0x9, 0x88, 0x4, 0x89, 0x9, 0x89, 0x4, 0x8a, 
    0x9, 0x8a, 0x3, 0x2, 0x7, 0x2, 0x116, 0xa, 0x2, 0xc, 0x2, 0xe, 0x2, 
    0x119, 0xb, 0x2, 0x3, 0x2, 0x6, 0x2, 0x11c, 0xa, 0x2, 0xd, 0x2, 0xe, 
    0x2, 0x11d, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 
    0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 
    0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 
    0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 
    0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x5, 0x3, 
    0x141, 0xa, 0x3, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x6, 0x4, 0x147, 
    0xa, 0x4, 0xd, 0x4, 0xe, 0x4, 0x148, 0x3, 0x4, 0x3, 0x4, 0x3, 0x5, 0x3, 
    0x5, 0x5, 0x5, 0x14f, 0xa, 0x5, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 
    0x3, 0x6, 0x3, 0x7, 0x5, 0x7, 0x157, 0xa, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 
    0x7, 0x3, 0x8, 0x5, 0x8, 0x15d, 0xa, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 
    0x5, 0x8, 0x162, 0xa, 0x8, 0x3, 0x9, 0x7, 0x9, 0x165, 0xa, 0x9, 0xc, 
    0x9, 0xe, 0x9, 0x168, 0xb, 0x9, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 
    0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 
    0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 
    0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x5, 0xa, 0x17f, 0xa, 0xa, 0x3, 0xb, 0x3, 
    0xb, 0x3, 0xb, 0x3, 0xb, 0x7, 0xb, 0x185, 0xa, 0xb, 0xc, 0xb, 0xe, 0xb, 
    0x188, 0xb, 0xb, 0x3, 0xc, 0x3, 0xc, 0x3, 0xd, 0x5, 0xd, 0x18d, 0xa, 
    0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x7, 0xd, 0x192, 0xa, 0xd, 0xc, 0xd, 
    0xe, 0xd, 0x195, 0xb, 0xd, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x5, 
    0xe, 0x19b, 0xa, 0xe, 0x3, 0xf, 0x5, 0xf, 0x19e, 0xa, 0xf, 0x3, 0xf, 
    0x3, 0xf, 0x3, 0xf, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 
    0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x7, 0x11, 
    0x1ad, 0xa, 0x11, 0xc, 0x11, 0xe, 0x11, 0x1b0, 0xb, 0x11, 0x3, 0x11, 
    0x3, 0x11, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x7, 0x12, 0x1b7, 0xa, 0x12, 
    0xc, 0x12, 0xe, 0x12, 0x1ba, 0xb, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x13, 
    0x5, 0x13, 0x1bf, 0xa, 0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 
    0x3, 0x14, 0x3, 0x14, 0x5, 0x14, 0x1c7, 0xa, 0x14, 0x3, 0x14, 0x3, 0x14, 
    0x3, 0x14, 0x7, 0x14, 0x1cc, 0xa, 0x14, 0xc, 0x14, 0xe, 0x14, 0x1cf, 
    0xb, 0x14, 0x5, 0x14, 0x1d1, 0xa, 0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 
    0x3, 0x14, 0x7, 0x14, 0x1d7, 0xa, 0x14, 0xc, 0x14, 0xe, 0x14, 0x1da, 
    0xb, 0x14, 0x5, 0x14, 0x1dc, 0xa, 0x14, 0x3, 0x15, 0x3, 0x15, 0x3, 0x16, 
    0x3, 0x16, 0x3, 0x16, 0x5, 0x16, 0x1e3, 0xa, 0x16, 0x3, 0x17, 0x3, 0x17, 
    0x3, 0x17, 0x3, 0x17, 0x3, 0x17, 0x3, 0x18, 0x3, 0x18, 0x3, 0x18, 0x3, 
    0x18, 0x5, 0x18, 0x1ee, 0xa, 0x18, 0x3, 0x18, 0x3, 0x18, 0x5, 0x18, 
    0x1f2, 0xa, 0x18, 0x3, 0x18, 0x3, 0x18, 0x3, 0x19, 0x3, 0x19, 0x3, 0x19, 
    0x7, 0x19, 0x1f9, 0xa, 0x19, 0xc, 0x19, 0xe, 0x19, 0x1fc, 0xb, 0x19, 
    0x3, 0x1a, 0x3, 0x1a, 0x3, 0x1a, 0x3, 0x1a, 0x3, 0x1b, 0x3, 0x1b, 0x3, 
    0x1c, 0x3, 0x1c, 0x3, 0x1c, 0x3, 0x1c, 0x3, 0x1c, 0x3, 0x1c, 0x3, 0x1d, 
    0x3, 0x1d, 0x3, 0x1d, 0x3, 0x1d, 0x3, 0x1d, 0x3, 0x1d, 0x3, 0x1d, 0x3, 
    0x1d, 0x3, 0x1d, 0x3, 0x1d, 0x5, 0x1d, 0x214, 0xa, 0x1d, 0x3, 0x1e, 
    0x3, 0x1e, 0x3, 0x1f, 0x3, 0x1f, 0x3, 0x1f, 0x7, 0x1f, 0x21b, 0xa, 0x1f, 
    0xc, 0x1f, 0xe, 0x1f, 0x21e, 0xb, 0x1f, 0x3, 0x20, 0x3, 0x20, 0x3, 0x20, 
    0x7, 0x20, 0x223, 0xa, 0x20, 0xc, 0x20, 0xe, 0x20, 0x226, 0xb, 0x20, 
    0x3, 0x21, 0x3, 0x21, 0x3, 0x21, 0x7, 0x21, 0x22b, 0xa, 0x21, 0xc, 0x21, 
    0xe, 0x21, 0x22e, 0xb, 0x21, 0x3, 0x22, 0x3, 0x22, 0x3, 0x22, 0x7, 0x22, 
    0x233, 0xa, 0x22, 0xc, 0x22, 0xe, 0x22, 0x236, 0xb, 0x22, 0x3, 0x23, 
    0x3, 0x23, 0x3, 0x23, 0x7, 0x23, 0x23b, 0xa, 0x23, 0xc, 0x23, 0xe, 0x23, 
    0x23e, 0xb, 0x23, 0x3, 0x24, 0x3, 0x24, 0x3, 0x24, 0x7, 0x24, 0x243, 
    0xa, 0x24, 0xc, 0x24, 0xe, 0x24, 0x246, 0xb, 0x24, 0x3, 0x25, 0x3, 0x25, 
    0x3, 0x25, 0x3, 0x25, 0x5, 0x25, 0x24c, 0xa, 0x25, 0x3, 0x26, 0x3, 0x26, 
    0x3, 0x27, 0x3, 0x27, 0x3, 0x27, 0x3, 0x27, 0x3, 0x27, 0x3, 0x27, 0x5, 
    0x27, 0x256, 0xa, 0x27, 0x3, 0x28, 0x3, 0x28, 0x3, 0x29, 0x3, 0x29, 
    0x3, 0x2a, 0x3, 0x2a, 0x3, 0x2a, 0x3, 0x2a, 0x3, 0x2a, 0x3, 0x2a, 0x3, 
    0x2a, 0x3, 0x2a, 0x5, 0x2a, 0x264, 0xa, 0x2a, 0x3, 0x2b, 0x3, 0x2b, 
    0x3, 0x2b, 0x3, 0x2c, 0x3, 0x2c, 0x5, 0x2c, 0x26b, 0xa, 0x2c, 0x3, 0x2d, 
    0x3, 0x2d, 0x3, 0x2d, 0x5, 0x2d, 0x270, 0xa, 0x2d, 0x3, 0x2e, 0x3, 0x2e, 
    0x3, 0x2e, 0x3, 0x2e, 0x3, 0x2e, 0x3, 0x2e, 0x3, 0x2e, 0x3, 0x2e, 0x3, 
    0x2e, 0x5, 0x2e, 0x27b, 0xa, 0x2e, 0x3, 0x2f, 0x3, 0x2f, 0x3, 0x2f, 
    0x3, 0x2f, 0x5, 0x2f, 0x281, 0xa, 0x2f, 0x3, 0x30, 0x3, 0x30, 0x3, 0x30, 
    0x5, 0x30, 0x286, 0xa, 0x30, 0x3, 0x31, 0x3, 0x31, 0x3, 0x31, 0x7, 0x31, 
    0x28b, 0xa, 0x31, 0xc, 0x31, 0xe, 0x31, 0x28e, 0xb, 0x31, 0x3, 0x32, 
    0x3, 0x32, 0x5, 0x32, 0x292, 0xa, 0x32, 0x3, 0x33, 0x3, 0x33, 0x3, 0x34, 
    0x3, 0x34, 0x3, 0x35, 0x3, 0x35, 0x3, 0x35, 0x3, 0x35, 0x5, 0x35, 0x29c, 
    0xa, 0x35, 0x3, 0x36, 0x3, 0x36, 0x5, 0x36, 0x2a0, 0xa, 0x36, 0x3, 0x37, 
    0x3, 0x37, 0x3, 0x37, 0x5, 0x37, 0x2a5, 0xa, 0x37, 0x3, 0x38, 0x3, 0x38, 
    0x3, 0x39, 0x3, 0x39, 0x3, 0x3a, 0x3, 0x3a, 0x3, 0x3a, 0x3, 0x3b, 0x3, 
    0x3b, 0x3, 0x3b, 0x5, 0x3b, 0x2b1, 0xa, 0x3b, 0x3, 0x3c, 0x3, 0x3c, 
    0x3, 0x3c, 0x3, 0x3d, 0x3, 0x3d, 0x3, 0x3d, 0x3, 0x3e, 0x3, 0x3e, 0x3, 
    0x3e, 0x3, 0x3e, 0x3, 0x3f, 0x3, 0x3f, 0x3, 0x40, 0x3, 0x40, 0x3, 0x41, 
    0x3, 0x41, 0x3, 0x42, 0x3, 0x42, 0x3, 0x43, 0x3, 0x43, 0x3, 0x44, 0x3, 
    0x44, 0x3, 0x45, 0x3, 0x45, 0x3, 0x45, 0x3, 0x45, 0x3, 0x45, 0x3, 0x45, 
    0x3, 0x46, 0x6, 0x46, 0x2d0, 0xa, 0x46, 0xd, 0x46, 0xe, 0x46, 0x2d1, 
    0x3, 0x47, 0x3, 0x47, 0x3, 0x47, 0x3, 0x47, 0x3, 0x48, 0x3, 0x48, 0x3, 
    0x48, 0x3, 0x48, 0x3, 0x48, 0x3, 0x48, 0x3, 0x48, 0x3, 0x48, 0x3, 0x48, 
    0x3, 0x48, 0x3, 0x49, 0x3, 0x49, 0x3, 0x49, 0x3, 0x49, 0x3, 0x49, 0x5, 
    0x49, 0x2e7, 0xa, 0x49, 0x3, 0x4a, 0x6, 0x4a, 0x2ea, 0xa, 0x4a, 0xd, 
    0x4a, 0xe, 0x4a, 0x2eb, 0x3, 0x4b, 0x6, 0x4b, 0x2ef, 0xa, 0x4b, 0xd, 
    0x4b, 0xe, 0x4b, 0x2f0, 0x3, 0x4b, 0x3, 0x4b, 0x3, 0x4b, 0x3, 0x4c, 
    0x3, 0x4c, 0x3, 0x4c, 0x3, 0x4c, 0x3, 0x4c, 0x3, 0x4c, 0x5, 0x4c, 0x2fc, 
    0xa, 0x4c, 0x3, 0x4d, 0x3, 0x4d, 0x3, 0x4d, 0x3, 0x4e, 0x3, 0x4e, 0x3, 
    0x4e, 0x3, 0x4e, 0x3, 0x4e, 0x3, 0x4e, 0x7, 0x4e, 0x307, 0xa, 0x4e, 
    0xc, 0x4e, 0xe, 0x4e, 0x30a, 0xb, 0x4e, 0x3, 0x4e, 0x3, 0x4e, 0x3, 0x4f, 
    0x3, 0x4f, 0x3, 0x50, 0x3, 0x50, 0x3, 0x50, 0x3, 0x50, 0x3, 0x50, 0x3, 
    0x50, 0x3, 0x50, 0x3, 0x50, 0x3, 0x50, 0x3, 0x50, 0x3, 0x50, 0x3, 0x50, 
    0x5, 0x50, 0x31c, 0xa, 0x50, 0x3, 0x51, 0x3, 0x51, 0x3, 0x51, 0x3, 0x51, 
    0x3, 0x51, 0x3, 0x51, 0x5, 0x51, 0x324, 0xa, 0x51, 0x3, 0x52, 0x3, 0x52, 
    0x3, 0x52, 0x3, 0x52, 0x3, 0x52, 0x3, 0x52, 0x5, 0x52, 0x32c, 0xa, 0x52, 
    0x3, 0x53, 0x3, 0x53, 0x6, 0x53, 0x330, 0xa, 0x53, 0xd, 0x53, 0xe, 0x53, 
    0x331, 0x3, 0x54, 0x3, 0x54, 0x3, 0x54, 0x3, 0x54, 0x3, 0x55, 0x3, 0x55, 
    0x5, 0x55, 0x33a, 0xa, 0x55, 0x3, 0x56, 0x3, 0x56, 0x3, 0x56, 0x3, 0x56, 
    0x7, 0x56, 0x340, 0xa, 0x56, 0xc, 0x56, 0xe, 0x56, 0x343, 0xb, 0x56, 
    0x3, 0x56, 0x3, 0x56, 0x3, 0x57, 0x5, 0x57, 0x348, 0xa, 0x57, 0x3, 0x57, 
    0x3, 0x57, 0x3, 0x57, 0x3, 0x57, 0x5, 0x57, 0x34e, 0xa, 0x57, 0x3, 0x57, 
    0x5, 0x57, 0x351, 0xa, 0x57, 0x3, 0x58, 0x3, 0x58, 0x3, 0x59, 0x3, 0x59, 
    0x5, 0x59, 0x357, 0xa, 0x59, 0x3, 0x5a, 0x3, 0x5a, 0x3, 0x5a, 0x3, 0x5a, 
    0x7, 0x5a, 0x35d, 0xa, 0x5a, 0xc, 0x5a, 0xe, 0x5a, 0x360, 0xb, 0x5a, 
    0x3, 0x5a, 0x3, 0x5a, 0x3, 0x5a, 0x3, 0x5a, 0x5, 0x5a, 0x366, 0xa, 0x5a, 
    0x3, 0x5b, 0x3, 0x5b, 0x3, 0x5b, 0x3, 0x5b, 0x3, 0x5c, 0x3, 0x5c, 0x3, 
    0x5d, 0x3, 0x5d, 0x3, 0x5d, 0x3, 0x5d, 0x3, 0x5d, 0x7, 0x5d, 0x373, 
    0xa, 0x5d, 0xc, 0x5d, 0xe, 0x5d, 0x376, 0xb, 0x5d, 0x3, 0x5d, 0x3, 0x5d, 
    0x3, 0x5e, 0x3, 0x5e, 0x3, 0x5e, 0x3, 0x5e, 0x3, 0x5e, 0x7, 0x5e, 0x37f, 
    0xa, 0x5e, 0xc, 0x5e, 0xe, 0x5e, 0x382, 0xb, 0x5e, 0x3, 0x5e, 0x3, 0x5e, 
    0x3, 0x5f, 0x3, 0x5f, 0x3, 0x5f, 0x3, 0x5f, 0x5, 0x5f, 0x38a, 0xa, 0x5f, 
    0x3, 0x60, 0x3, 0x60, 0x3, 0x60, 0x3, 0x60, 0x3, 0x60, 0x3, 0x60, 0x3, 
    0x60, 0x3, 0x61, 0x3, 0x61, 0x3, 0x62, 0x3, 0x62, 0x3, 0x63, 0x3, 0x63, 
    0x3, 0x63, 0x3, 0x63, 0x5, 0x63, 0x39b, 0xa, 0x63, 0x3, 0x64, 0x3, 0x64, 
    0x3, 0x64, 0x3, 0x64, 0x3, 0x65, 0x3, 0x65, 0x5, 0x65, 0x3a3, 0xa, 0x65, 
    0x3, 0x66, 0x3, 0x66, 0x3, 0x66, 0x3, 0x66, 0x3, 0x67, 0x3, 0x67, 0x3, 
    0x67, 0x3, 0x67, 0x3, 0x68, 0x3, 0x68, 0x3, 0x68, 0x3, 0x68, 0x3, 0x68, 
    0x3, 0x69, 0x3, 0x69, 0x3, 0x69, 0x3, 0x69, 0x3, 0x69, 0x3, 0x69, 0x7, 
    0x69, 0x3b8, 0xa, 0x69, 0xc, 0x69, 0xe, 0x69, 0x3bb, 0xb, 0x69, 0x5, 
    0x69, 0x3bd, 0xa, 0x69, 0x3, 0x6a, 0x3, 0x6a, 0x3, 0x6a, 0x3, 0x6a, 
    0x3, 0x6b, 0x3, 0x6b, 0x3, 0x6b, 0x3, 0x6b, 0x3, 0x6b, 0x3, 0x6b, 0x7, 
    0x6b, 0x3c9, 0xa, 0x6b, 0xc, 0x6b, 0xe, 0x6b, 0x3cc, 0xb, 0x6b, 0x5, 
    0x6b, 0x3ce, 0xa, 0x6b, 0x3, 0x6c, 0x3, 0x6c, 0x5, 0x6c, 0x3d2, 0xa, 
    0x6c, 0x3, 0x6c, 0x5, 0x6c, 0x3d5, 0xa, 0x6c, 0x3, 0x6d, 0x3, 0x6d, 
    0x3, 0x6d, 0x3, 0x6e, 0x3, 0x6e, 0x3, 0x6e, 0x3, 0x6f, 0x3, 0x6f, 0x3, 
    0x6f, 0x3, 0x6f, 0x7, 0x6f, 0x3e1, 0xa, 0x6f, 0xc, 0x6f, 0xe, 0x6f, 
    0x3e4, 0xb, 0x6f, 0x3, 0x6f, 0x3, 0x6f, 0x3, 0x70, 0x3, 0x70, 0x5, 0x70, 
    0x3ea, 0xa, 0x70, 0x3, 0x71, 0x3, 0x71, 0x3, 0x71, 0x3, 0x72, 0x3, 0x72, 
    0x3, 0x72, 0x3, 0x72, 0x3, 0x72, 0x3, 0x73, 0x3, 0x73, 0x3, 0x73, 0x5, 
    0x73, 0x3f7, 0xa, 0x73, 0x3, 0x73, 0x5, 0x73, 0x3fa, 0xa, 0x73, 0x3, 
    0x74, 0x3, 0x74, 0x3, 0x74, 0x3, 0x74, 0x7, 0x74, 0x400, 0xa, 0x74, 
    0xc, 0x74, 0xe, 0x74, 0x403, 0xb, 0x74, 0x3, 0x75, 0x3, 0x75, 0x3, 0x75, 
    0x3, 0x76, 0x7, 0x76, 0x409, 0xa, 0x76, 0xc, 0x76, 0xe, 0x76, 0x40c, 
    0xb, 0x76, 0x3, 0x77, 0x3, 0x77, 0x3, 0x77, 0x3, 0x77, 0x3, 0x77, 0x3, 
    0x77, 0x3, 0x77, 0x3, 0x77, 0x3, 0x77, 0x3, 0x77, 0x3, 0x77, 0x3, 0x77, 
    0x3, 0x77, 0x3, 0x77, 0x3, 0x77, 0x3, 0x77, 0x3, 0x77, 0x3, 0x77, 0x5, 
    0x77, 0x420, 0xa, 0x77, 0x3, 0x78, 0x3, 0x78, 0x3, 0x78, 0x3, 0x78, 
    0x3, 0x79, 0x3, 0x79, 0x5, 0x79, 0x428, 0xa, 0x79, 0x3, 0x7a, 0x3, 0x7a, 
    0x5, 0x7a, 0x42c, 0xa, 0x7a, 0x3, 0x7a, 0x3, 0x7a, 0x3, 0x7a, 0x3, 0x7b, 
    0x3, 0x7b, 0x3, 0x7b, 0x3, 0x7b, 0x3, 0x7c, 0x3, 0x7c, 0x3, 0x7c, 0x3, 
    0x7c, 0x3, 0x7d, 0x3, 0x7d, 0x3, 0x7d, 0x3, 0x7d, 0x3, 0x7e, 0x3, 0x7e, 
    0x3, 0x7e, 0x3, 0x7f, 0x3, 0x7f, 0x3, 0x7f, 0x5, 0x7f, 0x443, 0xa, 0x7f, 
    0x3, 0x7f, 0x5, 0x7f, 0x446, 0xa, 0x7f, 0x3, 0x7f, 0x3, 0x7f, 0x3, 0x7f, 
    0x5, 0x7f, 0x44b, 0xa, 0x7f, 0x3, 0x80, 0x3, 0x80, 0x3, 0x80, 0x3, 0x81, 
    0x3, 0x81, 0x3, 0x81, 0x3, 0x82, 0x3, 0x82, 0x7, 0x82, 0x455, 0xa, 0x82, 
    0xc, 0x82, 0xe, 0x82, 0x458, 0xb, 0x82, 0x3, 0x82, 0x3, 0x82, 0x3, 0x83, 
    0x3, 0x83, 0x3, 0x83, 0x3, 0x83, 0x3, 0x83, 0x3, 0x83, 0x3, 0x83, 0x5, 
    0x83, 0x463, 0xa, 0x83, 0x3, 0x84, 0x3, 0x84, 0x3, 0x84, 0x3, 0x84, 
    0x5, 0x84, 0x469, 0xa, 0x84, 0x3, 0x84, 0x3, 0x84, 0x5, 0x84, 0x46d, 
    0xa, 0x84, 0x3, 0x85, 0x3, 0x85, 0x3, 0x85, 0x3, 0x85, 0x5, 0x85, 0x473, 
    0xa, 0x85, 0x3, 0x85, 0x3, 0x85, 0x5, 0x85, 0x477, 0xa, 0x85, 0x3, 0x86, 
    0x3, 0x86, 0x3, 0x86, 0x5, 0x86, 0x47c, 0xa, 0x86, 0x3, 0x87, 0x5, 0x87, 
    0x47f, 0xa, 0x87, 0x3, 0x87, 0x3, 0x87, 0x3, 0x87, 0x3, 0x88, 0x3, 0x88, 
    0x3, 0x88, 0x3, 0x88, 0x3, 0x88, 0x3, 0x88, 0x7, 0x88, 0x48a, 0xa, 0x88, 
    0xc, 0x88, 0xe, 0x88, 0x48d, 0xb, 0x88, 0x3, 0x88, 0x3, 0x88, 0x3, 0x89, 
    0x3, 0x89, 0x3, 0x89, 0x7, 0x89, 0x494, 0xa, 0x89, 0xc, 0x89, 0xe, 0x89, 
    0x497, 0xb, 0x89, 0x3, 0x89, 0x3, 0x89, 0x3, 0x8a, 0x5, 0x8a, 0x49c, 
    0xa, 0x8a, 0x3, 0x8a, 0x3, 0x8a, 0x3, 0x8a, 0x3, 0x8a, 0x3, 0x8a, 0x2, 
    0x2, 0x8b, 0x2, 0x4, 0x6, 0x8, 0xa, 0xc, 0xe, 0x10, 0x12, 0x14, 0x16, 
    0x18, 0x1a, 0x1c, 0x1e, 0x20, 0x22, 0x24, 0x26, 0x28, 0x2a, 0x2c, 0x2e, 
    0x30, 0x32, 0x34, 0x36, 0x38, 0x3a, 0x3c, 0x3e, 0x40, 0x42, 0x44, 0x46, 
    0x48, 0x4a, 0x4c, 0x4e, 0x50, 0x52, 0x54, 0x56, 0x58, 0x5a, 0x5c, 0x5e, 
    0x60, 0x62, 0x64, 0x66, 0x68, 0x6a, 0x6c, 0x6e, 0x70, 0x72, 0x74, 0x76, 
    0x78, 0x7a, 0x7c, 0x7e, 0x80, 0x82, 0x84, 0x86, 0x88, 0x8a, 0x8c, 0x8e, 
    0x90, 0x92, 0x94, 0x96, 0x98, 0x9a, 0x9c, 0x9e, 0xa0, 0xa2, 0xa4, 0xa6, 
    0xa8, 0xaa, 0xac, 0xae, 0xb0, 0xb2, 0xb4, 0xb6, 0xb8, 0xba, 0xbc, 0xbe, 
    0xc0, 0xc2, 0xc4, 0xc6, 0xc8, 0xca, 0xcc, 0xce, 0xd0, 0xd2, 0xd4, 0xd6, 
    0xd8, 0xda, 0xdc, 0xde, 0xe0, 0xe2, 0xe4, 0xe6, 0xe8, 0xea, 0xec, 0xee, 
    0xf0, 0xf2, 0xf4, 0xf6, 0xf8, 0xfa, 0xfc, 0xfe, 0x100, 0x102, 0x104, 
    0x106, 0x108, 0x10a, 0x10c, 0x10e, 0x110, 0x112, 0x2, 0xa, 0x4, 0x2, 
    0x58, 0x58, 0x60, 0x60, 0x4, 0x2, 0x38, 0x38, 0x3d, 0x3d, 0x3, 0x2, 
    0x23, 0x24, 0x3, 0x2, 0x1b, 0x1c, 0x5, 0x2, 0x17, 0x17, 0x1a, 0x1a, 
    0x21, 0x21, 0x4, 0x2, 0x16, 0x16, 0x1b, 0x1c, 0x4, 0x2, 0x3, 0x3, 0x5, 
    0xc, 0x5, 0x2, 0x26, 0x26, 0x3b, 0x3b, 0x59, 0x59, 0x2, 0x4b3, 0x2, 
    0x117, 0x3, 0x2, 0x2, 0x2, 0x4, 0x140, 0x3, 0x2, 0x2, 0x2, 0x6, 0x142, 
    0x3, 0x2, 0x2, 0x2, 0x8, 0x14e, 0x3, 0x2, 0x2, 0x2, 0xa, 0x150, 0x3, 
    0x2, 0x2, 0x2, 0xc, 0x156, 0x3, 0x2, 0x2, 0x2, 0xe, 0x15c, 0x3, 0x2, 
    0x2, 0x2, 0x10, 0x166, 0x3, 0x2, 0x2, 0x2, 0x12, 0x17e, 0x3, 0x2, 0x2, 
    0x2, 0x14, 0x180, 0x3, 0x2, 0x2, 0x2, 0x16, 0x189, 0x3, 0x2, 0x2, 0x2, 
    0x18, 0x18c, 0x3, 0x2, 0x2, 0x2, 0x1a, 0x19a, 0x3, 0x2, 0x2, 0x2, 0x1c, 
    0x19d, 0x3, 0x2, 0x2, 0x2, 0x1e, 0x1a2, 0x3, 0x2, 0x2, 0x2, 0x20, 0x1a6, 
    0x3, 0x2, 0x2, 0x2, 0x22, 0x1b3, 0x3, 0x2, 0x2, 0x2, 0x24, 0x1be, 0x3, 
    0x2, 0x2, 0x2, 0x26, 0x1d0, 0x3, 0x2, 0x2, 0x2, 0x28, 0x1dd, 0x3, 0x2, 
    0x2, 0x2, 0x2a, 0x1e2, 0x3, 0x2, 0x2, 0x2, 0x2c, 0x1e4, 0x3, 0x2, 0x2, 
    0x2, 0x2e, 0x1e9, 0x3, 0x2, 0x2, 0x2, 0x30, 0x1f5, 0x3, 0x2, 0x2, 0x2, 
    0x32, 0x1fd, 0x3, 0x2, 0x2, 0x2, 0x34, 0x201, 0x3, 0x2, 0x2, 0x2, 0x36, 
    0x203, 0x3, 0x2, 0x2, 0x2, 0x38, 0x213, 0x3, 0x2, 0x2, 0x2, 0x3a, 0x215, 
    0x3, 0x2, 0x2, 0x2, 0x3c, 0x217, 0x3, 0x2, 0x2, 0x2, 0x3e, 0x21f, 0x3, 
    0x2, 0x2, 0x2, 0x40, 0x227, 0x3, 0x2, 0x2, 0x2, 0x42, 0x22f, 0x3, 0x2, 
    0x2, 0x2, 0x44, 0x237, 0x3, 0x2, 0x2, 0x2, 0x46, 0x23f, 0x3, 0x2, 0x2, 
    0x2, 0x48, 0x24b, 0x3, 0x2, 0x2, 0x2, 0x4a, 0x24d, 0x3, 0x2, 0x2, 0x2, 
    0x4c, 0x255, 0x3, 0x2, 0x2, 0x2, 0x4e, 0x257, 0x3, 0x2, 0x2, 0x2, 0x50, 
    0x259, 0x3, 0x2, 0x2, 0x2, 0x52, 0x263, 0x3, 0x2, 0x2, 0x2, 0x54, 0x265, 
    0x3, 0x2, 0x2, 0x2, 0x56, 0x26a, 0x3, 0x2, 0x2, 0x2, 0x58, 0x26f, 0x3, 
    0x2, 0x2, 0x2, 0x5a, 0x27a, 0x3, 0x2, 0x2, 0x2, 0x5c, 0x280, 0x3, 0x2, 
    0x2, 0x2, 0x5e, 0x285, 0x3, 0x2, 0x2, 0x2, 0x60, 0x287, 0x3, 0x2, 0x2, 
    0x2, 0x62, 0x291, 0x3, 0x2, 0x2, 0x2, 0x64, 0x293, 0x3, 0x2, 0x2, 0x2, 
    0x66, 0x295, 0x3, 0x2, 0x2, 0x2, 0x68, 0x29b, 0x3, 0x2, 0x2, 0x2, 0x6a, 
    0x29f, 0x3, 0x2, 0x2, 0x2, 0x6c, 0x2a4, 0x3, 0x2, 0x2, 0x2, 0x6e, 0x2a6, 
    0x3, 0x2, 0x2, 0x2, 0x70, 0x2a8, 0x3, 0x2, 0x2, 0x2, 0x72, 0x2aa, 0x3, 
    0x2, 0x2, 0x2, 0x74, 0x2b0, 0x3, 0x2, 0x2, 0x2, 0x76, 0x2b2, 0x3, 0x2, 
    0x2, 0x2, 0x78, 0x2b5, 0x3, 0x2, 0x2, 0x2, 0x7a, 0x2b8, 0x3, 0x2, 0x2, 
    0x2, 0x7c, 0x2bc, 0x3, 0x2, 0x2, 0x2, 0x7e, 0x2be, 0x3, 0x2, 0x2, 0x2, 
    0x80, 0x2c0, 0x3, 0x2, 0x2, 0x2, 0x82, 0x2c2, 0x3, 0x2, 0x2, 0x2, 0x84, 
    0x2c4, 0x3, 0x2, 0x2, 0x2, 0x86, 0x2c6, 0x3, 0x2, 0x2, 0x2, 0x88, 0x2c8, 
    0x3, 0x2, 0x2, 0x2, 0x8a, 0x2cf, 0x3, 0x2, 0x2, 0x2, 0x8c, 0x2d3, 0x3, 
    0x2, 0x2, 0x2, 0x8e, 0x2d7, 0x3, 0x2, 0x2, 0x2, 0x90, 0x2e6, 0x3, 0x2, 
    0x2, 0x2, 0x92, 0x2e9, 0x3, 0x2, 0x2, 0x2, 0x94, 0x2ee, 0x3, 0x2, 0x2, 
    0x2, 0x96, 0x2fb, 0x3, 0x2, 0x2, 0x2, 0x98, 0x2fd, 0x3, 0x2, 0x2, 0x2, 
    0x9a, 0x300, 0x3, 0x2, 0x2, 0x2, 0x9c, 0x30d, 0x3, 0x2, 0x2, 0x2, 0x9e, 
    0x31b, 0x3, 0x2, 0x2, 0x2, 0xa0, 0x323, 0x3, 0x2, 0x2, 0x2, 0xa2, 0x32b, 
    0x3, 0x2, 0x2, 0x2, 0xa4, 0x32d, 0x3, 0x2, 0x2, 0x2, 0xa6, 0x333, 0x3, 
    0x2, 0x2, 0x2, 0xa8, 0x339, 0x3, 0x2, 0x2, 0x2, 0xaa, 0x33b, 0x3, 0x2, 
    0x2, 0x2, 0xac, 0x347, 0x3, 0x2, 0x2, 0x2, 0xae, 0x352, 0x3, 0x2, 0x2, 
    0x2, 0xb0, 0x356, 0x3, 0x2, 0x2, 0x2, 0xb2, 0x365, 0x3, 0x2, 0x2, 0x2, 
    0xb4, 0x367, 0x3, 0x2, 0x2, 0x2, 0xb6, 0x36b, 0x3, 0x2, 0x2, 0x2, 0xb8, 
    0x36d, 0x3, 0x2, 0x2, 0x2, 0xba, 0x379, 0x3, 0x2, 0x2, 0x2, 0xbc, 0x389, 
    0x3, 0x2, 0x2, 0x2, 0xbe, 0x38b, 0x3, 0x2, 0x2, 0x2, 0xc0, 0x392, 0x3, 
    0x2, 0x2, 0x2, 0xc2, 0x394, 0x3, 0x2, 0x2, 0x2, 0xc4, 0x39a, 0x3, 0x2, 
    0x2, 0x2, 0xc6, 0x39c, 0x3, 0x2, 0x2, 0x2, 0xc8, 0x3a2, 0x3, 0x2, 0x2, 
    0x2, 0xca, 0x3a4, 0x3, 0x2, 0x2, 0x2, 0xcc, 0x3a8, 0x3, 0x2, 0x2, 0x2, 
    0xce, 0x3ac, 0x3, 0x2, 0x2, 0x2, 0xd0, 0x3bc, 0x3, 0x2, 0x2, 0x2, 0xd2, 
    0x3be, 0x3, 0x2, 0x2, 0x2, 0xd4, 0x3cd, 0x3, 0x2, 0x2, 0x2, 0xd6, 0x3d4, 
    0x3, 0x2, 0x2, 0x2, 0xd8, 0x3d6, 0x3, 0x2, 0x2, 0x2, 0xda, 0x3d9, 0x3, 
    0x2, 0x2, 0x2, 0xdc, 0x3dc, 0x3, 0x2, 0x2, 0x2, 0xde, 0x3e9, 0x3, 0x2, 
    0x2, 0x2, 0xe0, 0x3eb, 0x3, 0x2, 0x2, 0x2, 0xe2, 0x3ee, 0x3, 0x2, 0x2, 
    0x2, 0xe4, 0x3f3, 0x3, 0x2, 0x2, 0x2, 0xe6, 0x3fb, 0x3, 0x2, 0x2, 0x2, 
    0xe8, 0x404, 0x3, 0x2, 0x2, 0x2, 0xea, 0x40a, 0x3, 0x2, 0x2, 0x2, 0xec, 
    0x41f, 0x3, 0x2, 0x2, 0x2, 0xee, 0x421, 0x3, 0x2, 0x2, 0x2, 0xf0, 0x427, 
    0x3, 0x2, 0x2, 0x2, 0xf2, 0x429, 0x3, 0x2, 0x2, 0x2, 0xf4, 0x430, 0x3, 
    0x2, 0x2, 0x2, 0xf6, 0x434, 0x3, 0x2, 0x2, 0x2, 0xf8, 0x438, 0x3, 0x2, 
    0x2, 0x2, 0xfa, 0x43c, 0x3, 0x2, 0x2, 0x2, 0xfc, 0x43f, 0x3, 0x2, 0x2, 
    0x2, 0xfe, 0x44c, 0x3, 0x2, 0x2, 0x2, 0x100, 0x44f, 0x3, 0x2, 0x2, 0x2, 
    0x102, 0x452, 0x3, 0x2, 0x2, 0x2, 0x104, 0x462, 0x3, 0x2, 0x2, 0x2, 
    0x106, 0x464, 0x3, 0x2, 0x2, 0x2, 0x108, 0x46e, 0x3, 0x2, 0x2, 0x2, 
    0x10a, 0x47b, 0x3, 0x2, 0x2, 0x2, 0x10c, 0x47e, 0x3, 0x2, 0x2, 0x2, 
    0x10e, 0x483, 0x3, 0x2, 0x2, 0x2, 0x110, 0x490, 0x3, 0x2, 0x2, 0x2, 
    0x112, 0x49b, 0x3, 0x2, 0x2, 0x2, 0x114, 0x116, 0x5, 0xc6, 0x64, 0x2, 
    0x115, 0x114, 0x3, 0x2, 0x2, 0x2, 0x116, 0x119, 0x3, 0x2, 0x2, 0x2, 
    0x117, 0x115, 0x3, 0x2, 0x2, 0x2, 0x117, 0x118, 0x3, 0x2, 0x2, 0x2, 
    0x118, 0x11b, 0x3, 0x2, 0x2, 0x2, 0x119, 0x117, 0x3, 0x2, 0x2, 0x2, 
    0x11a, 0x11c, 0x5, 0x4, 0x3, 0x2, 0x11b, 0x11a, 0x3, 0x2, 0x2, 0x2, 
    0x11c, 0x11d, 0x3, 0x2, 0x2, 0x2, 0x11d, 0x11b, 0x3, 0x2, 0x2, 0x2, 
    0x11d, 0x11e, 0x3, 0x2, 0x2, 0x2, 0x11e, 0x3, 0x3, 0x2, 0x2, 0x2, 0x11f, 
    0x120, 0x5, 0x52, 0x2a, 0x2, 0x120, 0x121, 0x7, 0xd, 0x2, 0x2, 0x121, 
    0x141, 0x3, 0x2, 0x2, 0x2, 0x122, 0x123, 0x5, 0x36, 0x1c, 0x2, 0x123, 
    0x124, 0x7, 0xd, 0x2, 0x2, 0x124, 0x141, 0x3, 0x2, 0x2, 0x2, 0x125, 
    0x126, 0x5, 0xaa, 0x56, 0x2, 0x126, 0x127, 0x7, 0xd, 0x2, 0x2, 0x127, 
    0x141, 0x3, 0x2, 0x2, 0x2, 0x128, 0x129, 0x5, 0x8, 0x5, 0x2, 0x129, 
    0x12a, 0x7, 0xd, 0x2, 0x2, 0x12a, 0x141, 0x3, 0x2, 0x2, 0x2, 0x12b, 
    0x12c, 0x5, 0x6, 0x4, 0x2, 0x12c, 0x12d, 0x7, 0xd, 0x2, 0x2, 0x12d, 
    0x141, 0x3, 0x2, 0x2, 0x2, 0x12e, 0x12f, 0x5, 0x1a, 0xe, 0x2, 0x12f, 
    0x130, 0x7, 0xd, 0x2, 0x2, 0x130, 0x141, 0x3, 0x2, 0x2, 0x2, 0x131, 
    0x132, 0x5, 0xca, 0x66, 0x2, 0x132, 0x133, 0x7, 0xd, 0x2, 0x2, 0x133, 
    0x141, 0x3, 0x2, 0x2, 0x2, 0x134, 0x135, 0x5, 0xcc, 0x67, 0x2, 0x135, 
    0x136, 0x7, 0xd, 0x2, 0x2, 0x136, 0x141, 0x3, 0x2, 0x2, 0x2, 0x137, 
    0x138, 0x5, 0x10a, 0x86, 0x2, 0x138, 0x139, 0x7, 0xd, 0x2, 0x2, 0x139, 
    0x141, 0x3, 0x2, 0x2, 0x2, 0x13a, 0x13b, 0x5, 0xde, 0x70, 0x2, 0x13b, 
    0x13c, 0x7, 0xd, 0x2, 0x2, 0x13c, 0x141, 0x3, 0x2, 0x2, 0x2, 0x13d, 
    0x13e, 0x5, 0xfa, 0x7e, 0x2, 0x13e, 0x13f, 0x7, 0xd, 0x2, 0x2, 0x13f, 
    0x141, 0x3, 0x2, 0x2, 0x2, 0x140, 0x11f, 0x3, 0x2, 0x2, 0x2, 0x140, 
    0x122, 0x3, 0x2, 0x2, 0x2, 0x140, 0x125, 0x3, 0x2, 0x2, 0x2, 0x140, 
    0x128, 0x3, 0x2, 0x2, 0x2, 0x140, 0x12b, 0x3, 0x2, 0x2, 0x2, 0x140, 
    0x12e, 0x3, 0x2, 0x2, 0x2, 0x140, 0x131, 0x3, 0x2, 0x2, 0x2, 0x140, 
    0x134, 0x3, 0x2, 0x2, 0x2, 0x140, 0x137, 0x3, 0x2, 0x2, 0x2, 0x140, 
    0x13a, 0x3, 0x2, 0x2, 0x2, 0x140, 0x13d, 0x3, 0x2, 0x2, 0x2, 0x141, 
    0x5, 0x3, 0x2, 0x2, 0x2, 0x142, 0x143, 0x7, 0x4b, 0x2, 0x2, 0x143, 0x144, 
    0x7, 0x64, 0x2, 0x2, 0x144, 0x146, 0x7, 0x10, 0x2, 0x2, 0x145, 0x147, 
    0x5, 0x4, 0x3, 0x2, 0x146, 0x145, 0x3, 0x2, 0x2, 0x2, 0x147, 0x148, 
    0x3, 0x2, 0x2, 0x2, 0x148, 0x146, 0x3, 0x2, 0x2, 0x2, 0x148, 0x149, 
    0x3, 0x2, 0x2, 0x2, 0x149, 0x14a, 0x3, 0x2, 0x2, 0x2, 0x14a, 0x14b, 
    0x7, 0x11, 0x2, 0x2, 0x14b, 0x7, 0x3, 0x2, 0x2, 0x2, 0x14c, 0x14f, 0x5, 
    0xa, 0x6, 0x2, 0x14d, 0x14f, 0x5, 0xc, 0x7, 0x2, 0x14e, 0x14c, 0x3, 
    0x2, 0x2, 0x2, 0x14e, 0x14d, 0x3, 0x2, 0x2, 0x2, 0x14f, 0x9, 0x3, 0x2, 
    0x2, 0x2, 0x150, 0x151, 0x5, 0xe, 0x8, 0x2, 0x151, 0x152, 0x7, 0x10, 
    0x2, 0x2, 0x152, 0x153, 0x5, 0x10, 0x9, 0x2, 0x153, 0x154, 0x7, 0x11, 
    0x2, 0x2, 0x154, 0xb, 0x3, 0x2, 0x2, 0x2, 0x155, 0x157, 0x9, 0x2, 0x2, 
    0x2, 0x156, 0x155, 0x3, 0x2, 0x2, 0x2, 0x156, 0x157, 0x3, 0x2, 0x2, 
    0x2, 0x157, 0x158, 0x3, 0x2, 0x2, 0x2, 0x158, 0x159, 0x7, 0x62, 0x2, 
    0x2, 0x159, 0x15a, 0x7, 0x64, 0x2, 0x2, 0x15a, 0xd, 0x3, 0x2, 0x2, 0x2, 
    0x15b, 0x15d, 0x9, 0x2, 0x2, 0x2, 0x15c, 0x15b, 0x3, 0x2, 0x2, 0x2, 
    0x15c, 0x15d, 0x3, 0x2, 0x2, 0x2, 0x15d, 0x15e, 0x3, 0x2, 0x2, 0x2, 
    0x15e, 0x15f, 0x7, 0x62, 0x2, 0x2, 0x15f, 0x161, 0x7, 0x64, 0x2, 0x2, 
    0x160, 0x162, 0x5, 0x14, 0xb, 0x2, 0x161, 0x160, 0x3, 0x2, 0x2, 0x2, 
    0x161, 0x162, 0x3, 0x2, 0x2, 0x2, 0x162, 0xf, 0x3, 0x2, 0x2, 0x2, 0x163, 
    0x165, 0x5, 0x12, 0xa, 0x2, 0x164, 0x163, 0x3, 0x2, 0x2, 0x2, 0x165, 
    0x168, 0x3, 0x2, 0x2, 0x2, 0x166, 0x164, 0x3, 0x2, 0x2, 0x2, 0x166, 
    0x167, 0x3, 0x2, 0x2, 0x2, 0x167, 0x11, 0x3, 0x2, 0x2, 0x2, 0x168, 0x166, 
    0x3, 0x2, 0x2, 0x2, 0x169, 0x16a, 0x5, 0x52, 0x2a, 0x2, 0x16a, 0x16b, 
    0x7, 0xd, 0x2, 0x2, 0x16b, 0x17f, 0x3, 0x2, 0x2, 0x2, 0x16c, 0x16d, 
    0x5, 0x36, 0x1c, 0x2, 0x16d, 0x16e, 0x7, 0xd, 0x2, 0x2, 0x16e, 0x17f, 
    0x3, 0x2, 0x2, 0x2, 0x16f, 0x170, 0x5, 0xaa, 0x56, 0x2, 0x170, 0x171, 
    0x7, 0xd, 0x2, 0x2, 0x171, 0x17f, 0x3, 0x2, 0x2, 0x2, 0x172, 0x173, 
    0x5, 0xa8, 0x55, 0x2, 0x173, 0x174, 0x7, 0xd, 0x2, 0x2, 0x174, 0x17f, 
    0x3, 0x2, 0x2, 0x2, 0x175, 0x176, 0x5, 0xac, 0x57, 0x2, 0x176, 0x177, 
    0x7, 0xd, 0x2, 0x2, 0x177, 0x17f, 0x3, 0x2, 0x2, 0x2, 0x178, 0x179, 
    0x5, 0xca, 0x66, 0x2, 0x179, 0x17a, 0x7, 0xd, 0x2, 0x2, 0x17a, 0x17f, 
    0x3, 0x2, 0x2, 0x2, 0x17b, 0x17c, 0x5, 0xcc, 0x67, 0x2, 0x17c, 0x17d, 
    0x7, 0xd, 0x2, 0x2, 0x17d, 0x17f, 0x3, 0x2, 0x2, 0x2, 0x17e, 0x169, 
    0x3, 0x2, 0x2, 0x2, 0x17e, 0x16c, 0x3, 0x2, 0x2, 0x2, 0x17e, 0x16f, 
    0x3, 0x2, 0x2, 0x2, 0x17e, 0x172, 0x3, 0x2, 0x2, 0x2, 0x17e, 0x175, 
    0x3, 0x2, 0x2, 0x2, 0x17e, 0x178, 0x3, 0x2, 0x2, 0x2, 0x17e, 0x17b, 
    0x3, 0x2, 0x2, 0x2, 0x17f, 0x13, 0x3, 0x2, 0x2, 0x2, 0x180, 0x181, 0x7, 
    0xe, 0x2, 0x2, 0x181, 0x186, 0x5, 0x16, 0xc, 0x2, 0x182, 0x183, 0x7, 
    0xf, 0x2, 0x2, 0x183, 0x185, 0x5, 0x16, 0xc, 0x2, 0x184, 0x182, 0x3, 
    0x2, 0x2, 0x2, 0x185, 0x188, 0x3, 0x2, 0x2, 0x2, 0x186, 0x184, 0x3, 
    0x2, 0x2, 0x2, 0x186, 0x187, 0x3, 0x2, 0x2, 0x2, 0x187, 0x15, 0x3, 0x2, 
    0x2, 0x2, 0x188, 0x186, 0x3, 0x2, 0x2, 0x2, 0x189, 0x18a, 0x5, 0x18, 
    0xd, 0x2, 0x18a, 0x17, 0x3, 0x2, 0x2, 0x2, 0x18b, 0x18d, 0x7, 0x22, 
    0x2, 0x2, 0x18c, 0x18b, 0x3, 0x2, 0x2, 0x2, 0x18c, 0x18d, 0x3, 0x2, 
    0x2, 0x2, 0x18d, 0x18e, 0x3, 0x2, 0x2, 0x2, 0x18e, 0x193, 0x7, 0x64, 
    0x2, 0x2, 0x18f, 0x190, 0x7, 0x22, 0x2, 0x2, 0x190, 0x192, 0x7, 0x64, 
    0x2, 0x2, 0x191, 0x18f, 0x3, 0x2, 0x2, 0x2, 0x192, 0x195, 0x3, 0x2, 
    0x2, 0x2, 0x193, 0x191, 0x3, 0x2, 0x2, 0x2, 0x193, 0x194, 0x3, 0x2, 
    0x2, 0x2, 0x194, 0x19, 0x3, 0x2, 0x2, 0x2, 0x195, 0x193, 0x3, 0x2, 0x2, 
    0x2, 0x196, 0x19b, 0x5, 0x22, 0x12, 0x2, 0x197, 0x19b, 0x5, 0x20, 0x11, 
    0x2, 0x198, 0x19b, 0x5, 0x1e, 0x10, 0x2, 0x199, 0x19b, 0x5, 0x1c, 0xf, 
    0x2, 0x19a, 0x196, 0x3, 0x2, 0x2, 0x2, 0x19a, 0x197, 0x3, 0x2, 0x2, 
    0x2, 0x19a, 0x198, 0x3, 0x2, 0x2, 0x2, 0x19a, 0x199, 0x3, 0x2, 0x2, 
    0x2, 0x19b, 0x1b, 0x3, 0x2, 0x2, 0x2, 0x19c, 0x19e, 0x7, 0x58, 0x2, 
    0x2, 0x19d, 0x19c, 0x3, 0x2, 0x2, 0x2, 0x19d, 0x19e, 0x3, 0x2, 0x2, 
    0x2, 0x19e, 0x19f, 0x3, 0x2, 0x2, 0x2, 0x19f, 0x1a0, 0x7, 0x49, 0x2, 
    0x2, 0x1a0, 0x1a1, 0x7, 0x64, 0x2, 0x2, 0x1a1, 0x1d, 0x3, 0x2, 0x2, 
    0x2, 0x1a2, 0x1a3, 0x7, 0x49, 0x2, 0x2, 0x1a3, 0x1a4, 0x7, 0x64, 0x2, 
    0x2, 0x1a4, 0x1a5, 0x5, 0x56, 0x2c, 0x2, 0x1a5, 0x1f, 0x3, 0x2, 0x2, 
    0x2, 0x1a6, 0x1a7, 0x7, 0x58, 0x2, 0x2, 0x1a7, 0x1a8, 0x7, 0x49, 0x2, 
    0x2, 0x1a8, 0x1a9, 0x7, 0x64, 0x2, 0x2, 0x1a9, 0x1aa, 0x5, 0x26, 0x14, 
    0x2, 0x1aa, 0x1ae, 0x7, 0x10, 0x2, 0x2, 0x1ab, 0x1ad, 0x5, 0x12, 0xa, 
    0x2, 0x1ac, 0x1ab, 0x3, 0x2, 0x2, 0x2, 0x1ad, 0x1b0, 0x3, 0x2, 0x2, 
    0x2, 0x1ae, 0x1ac, 0x3, 0x2, 0x2, 0x2, 0x1ae, 0x1af, 0x3, 0x2, 0x2, 
    0x2, 0x1af, 0x1b1, 0x3, 0x2, 0x2, 0x2, 0x1b0, 0x1ae, 0x3, 0x2, 0x2, 
    0x2, 0x1b1, 0x1b2, 0x7, 0x11, 0x2, 0x2, 0x1b2, 0x21, 0x3, 0x2, 0x2, 
    0x2, 0x1b3, 0x1b4, 0x5, 0x24, 0x13, 0x2, 0x1b4, 0x1b8, 0x7, 0x10, 0x2, 
    0x2, 0x1b5, 0x1b7, 0x5, 0x2a, 0x16, 0x2, 0x1b6, 0x1b5, 0x3, 0x2, 0x2, 
    0x2, 0x1b7, 0x1ba, 0x3, 0x2, 0x2, 0x2, 0x1b8, 0x1b6, 0x3, 0x2, 0x2, 
    0x2, 0x1b8, 0x1b9, 0x3, 0x2, 0x2, 0x2, 0x1b9, 0x1bb, 0x3, 0x2, 0x2, 
    0x2, 0x1ba, 0x1b8, 0x3, 0x2, 0x2, 0x2, 0x1bb, 0x1bc, 0x7, 0x11, 0x2, 
    0x2, 0x1bc, 0x23, 0x3, 0x2, 0x2, 0x2, 0x1bd, 0x1bf, 0x7, 0x2e, 0x2, 
    0x2, 0x1be, 0x1bd, 0x3, 0x2, 0x2, 0x2, 0x1be, 0x1bf, 0x3, 0x2, 0x2, 
    0x2, 0x1bf, 0x1c0, 0x3, 0x2, 0x2, 0x2, 0x1c0, 0x1c1, 0x7, 0x49, 0x2, 
    0x2, 0x1c1, 0x1c2, 0x7, 0x64, 0x2, 0x2, 0x1c2, 0x1c3, 0x5, 0x26, 0x14, 
    0x2, 0x1c3, 0x25, 0x3, 0x2, 0x2, 0x2, 0x1c4, 0x1c6, 0x7, 0xe, 0x2, 0x2, 
    0x1c5, 0x1c7, 0x7, 0x4d, 0x2, 0x2, 0x1c6, 0x1c5, 0x3, 0x2, 0x2, 0x2, 
    0x1c6, 0x1c7, 0x3, 0x2, 0x2, 0x2, 0x1c7, 0x1c8, 0x3, 0x2, 0x2, 0x2, 
    0x1c8, 0x1cd, 0x5, 0x28, 0x15, 0x2, 0x1c9, 0x1ca, 0x7, 0xf, 0x2, 0x2, 
    0x1ca, 0x1cc, 0x5, 0x28, 0x15, 0x2, 0x1cb, 0x1c9, 0x3, 0x2, 0x2, 0x2, 
    0x1cc, 0x1cf, 0x3, 0x2, 0x2, 0x2, 0x1cd, 0x1cb, 0x3, 0x2, 0x2, 0x2, 
    0x1cd, 0x1ce, 0x3, 0x2, 0x2, 0x2, 0x1ce, 0x1d1, 0x3, 0x2, 0x2, 0x2, 
    0x1cf, 0x1cd, 0x3, 0x2, 0x2, 0x2, 0x1d0, 0x1c4, 0x3, 0x2, 0x2, 0x2, 
    0x1d0, 0x1d1, 0x3, 0x2, 0x2, 0x2, 0x1d1, 0x1db, 0x3, 0x2, 0x2, 0x2, 
    0x1d2, 0x1d3, 0x7, 0x4a, 0x2, 0x2, 0x1d3, 0x1d8, 0x5, 0x16, 0xc, 0x2, 
    0x1d4, 0x1d5, 0x7, 0xf, 0x2, 0x2, 0x1d5, 0x1d7, 0x5, 0x16, 0xc, 0x2, 
    0x1d6, 0x1d4, 0x3, 0x2, 0x2, 0x2, 0x1d7, 0x1da, 0x3, 0x2, 0x2, 0x2, 
    0x1d8, 0x1d6, 0x3, 0x2, 0x2, 0x2, 0x1d8, 0x1d9, 0x3, 0x2, 0x2, 0x2, 
    0x1d9, 0x1dc, 0x3, 0x2, 0x2, 0x2, 0x1da, 0x1d8, 0x3, 0x2, 0x2, 0x2, 
    0x1db, 0x1d2, 0x3, 0x2, 0x2, 0x2, 0x1db, 0x1dc, 0x3, 0x2, 0x2, 0x2, 
    0x1dc, 0x27, 0x3, 0x2, 0x2, 0x2, 0x1dd, 0x1de, 0x5, 0x18, 0xd, 0x2, 
    0x1de, 0x29, 0x3, 0x2, 0x2, 0x2, 0x1df, 0x1e3, 0x5, 0x12, 0xa, 0x2, 
    0x1e0, 0x1e3, 0x5, 0x2c, 0x17, 0x2, 0x1e1, 0x1e3, 0x5, 0x2e, 0x18, 0x2, 
    0x1e2, 0x1df, 0x3, 0x2, 0x2, 0x2, 0x1e2, 0x1e0, 0x3, 0x2, 0x2, 0x2, 
    0x1e2, 0x1e1, 0x3, 0x2, 0x2, 0x2, 0x1e3, 0x2b, 0x3, 0x2, 0x2, 0x2, 0x1e4, 
    0x1e5, 0x9, 0x3, 0x2, 0x2, 0x1e5, 0x1e6, 0x5, 0x56, 0x2c, 0x2, 0x1e6, 
    0x1e7, 0x5, 0x60, 0x31, 0x2, 0x1e7, 0x1e8, 0x7, 0xd, 0x2, 0x2, 0x1e8, 
    0x2d, 0x3, 0x2, 0x2, 0x2, 0x1e9, 0x1ea, 0x7, 0x44, 0x2, 0x2, 0x1ea, 
    0x1eb, 0x7, 0x64, 0x2, 0x2, 0x1eb, 0x1ed, 0x7, 0x12, 0x2, 0x2, 0x1ec, 
    0x1ee, 0x5, 0x30, 0x19, 0x2, 0x1ed, 0x1ec, 0x3, 0x2, 0x2, 0x2, 0x1ed, 
    0x1ee, 0x3, 0x2, 0x2, 0x2, 0x1ee, 0x1ef, 0x3, 0x2, 0x2, 0x2, 0x1ef, 
    0x1f1, 0x7, 0x13, 0x2, 0x2, 0x1f0, 0x1f2, 0x5, 0xb8, 0x5d, 0x2, 0x1f1, 
    0x1f0, 0x3, 0x2, 0x2, 0x2, 0x1f1, 0x1f2, 0x3, 0x2, 0x2, 0x2, 0x1f2, 
    0x1f3, 0x3, 0x2, 0x2, 0x2, 0x1f3, 0x1f4, 0x7, 0xd, 0x2, 0x2, 0x1f4, 
    0x2f, 0x3, 0x2, 0x2, 0x2, 0x1f5, 0x1fa, 0x5, 0x32, 0x1a, 0x2, 0x1f6, 
    0x1f7, 0x7, 0xf, 0x2, 0x2, 0x1f7, 0x1f9, 0x5, 0x32, 0x1a, 0x2, 0x1f8, 
    0x1f6, 0x3, 0x2, 0x2, 0x2, 0x1f9, 0x1fc, 0x3, 0x2, 0x2, 0x2, 0x1fa, 
    0x1f8, 0x3, 0x2, 0x2, 0x2, 0x1fa, 0x1fb, 0x3, 0x2, 0x2, 0x2, 0x1fb, 
    0x31, 0x3, 0x2, 0x2, 0x2, 0x1fc, 0x1fa, 0x3, 0x2, 0x2, 0x2, 0x1fd, 0x1fe, 
    0x5, 0x34, 0x1b, 0x2, 0x1fe, 0x1ff, 0x5, 0xbc, 0x5f, 0x2, 0x1ff, 0x200, 
    0x5, 0x64, 0x33, 0x2, 0x200, 0x33, 0x3, 0x2, 0x2, 0x2, 0x201, 0x202, 
    0x7, 0x3b, 0x2, 0x2, 0x202, 0x35, 0x3, 0x2, 0x2, 0x2, 0x203, 0x204, 
    0x7, 0x47, 0x2, 0x2, 0x204, 0x205, 0x5, 0x38, 0x1d, 0x2, 0x205, 0x206, 
    0x7, 0x64, 0x2, 0x2, 0x206, 0x207, 0x7, 0x20, 0x2, 0x2, 0x207, 0x208, 
    0x5, 0x3a, 0x1e, 0x2, 0x208, 0x37, 0x3, 0x2, 0x2, 0x2, 0x209, 0x214, 
    0x5, 0x6a, 0x36, 0x2, 0x20a, 0x214, 0x5, 0x7c, 0x3f, 0x2, 0x20b, 0x214, 
    0x5, 0x7e, 0x40, 0x2, 0x20c, 0x214, 0x5, 0x80, 0x41, 0x2, 0x20d, 0x214, 
    0x5, 0x68, 0x35, 0x2, 0x20e, 0x214, 0x5, 0xa0, 0x51, 0x2, 0x20f, 0x214, 
    0x5, 0xa2, 0x52, 0x2, 0x210, 0x214, 0x5, 0xc0, 0x61, 0x2, 0x211, 0x214, 
    0x5, 0x18, 0xd, 0x2, 0x212, 0x214, 0x5, 0x82, 0x42, 0x2, 0x213, 0x209, 
    0x3, 0x2, 0x2, 0x2, 0x213, 0x20a, 0x3, 0x2, 0x2, 0x2, 0x213, 0x20b, 
    0x3, 0x2, 0x2, 0x2, 0x213, 0x20c, 0x3, 0x2, 0x2, 0x2, 0x213, 0x20d, 
    0x3, 0x2, 0x2, 0x2, 0x213, 0x20e, 0x3, 0x2, 0x2, 0x2, 0x213, 0x20f, 
    0x3, 0x2, 0x2, 0x2, 0x213, 0x210, 0x3, 0x2, 0x2, 0x2, 0x213, 0x211, 
    0x3, 0x2, 0x2, 0x2, 0x213, 0x212, 0x3, 0x2, 0x2, 0x2, 0x214, 0x39, 0x3, 
    0x2, 0x2, 0x2, 0x215, 0x216, 0x5, 0x3c, 0x1f, 0x2, 0x216, 0x3b, 0x3, 
    0x2, 0x2, 0x2, 0x217, 0x21c, 0x5, 0x3e, 0x20, 0x2, 0x218, 0x219, 0x7, 
    0x1f, 0x2, 0x2, 0x219, 0x21b, 0x5, 0x3e, 0x20, 0x2, 0x21a, 0x218, 0x3, 
    0x2, 0x2, 0x2, 0x21b, 0x21e, 0x3, 0x2, 0x2, 0x2, 0x21c, 0x21a, 0x3, 
    0x2, 0x2, 0x2, 0x21c, 0x21d, 0x3, 0x2, 0x2, 0x2, 0x21d, 0x3d, 0x3, 0x2, 
    0x2, 0x2, 0x21e, 0x21c, 0x3, 0x2, 0x2, 0x2, 0x21f, 0x224, 0x5, 0x40, 
    0x21, 0x2, 0x220, 0x221, 0x7, 0x1d, 0x2, 0x2, 0x221, 0x223, 0x5, 0x40, 
    0x21, 0x2, 0x222, 0x220, 0x3, 0x2, 0x2, 0x2, 0x223, 0x226, 0x3, 0x2, 
    0x2, 0x2, 0x224, 0x222, 0x3, 0x2, 0x2, 0x2, 0x224, 0x225, 0x3, 0x2, 
    0x2, 0x2, 0x225, 0x3f, 0x3, 0x2, 0x2, 0x2, 0x226, 0x224, 0x3, 0x2, 0x2, 
    0x2, 0x227, 0x22c, 0x5, 0x42, 0x22, 0x2, 0x228, 0x229, 0x7, 0x1e, 0x2, 
    0x2, 0x229, 0x22b, 0x5, 0x42, 0x22, 0x2, 0x22a, 0x228, 0x3, 0x2, 0x2, 
    0x2, 0x22b, 0x22e, 0x3, 0x2, 0x2, 0x2, 0x22c, 0x22a, 0x3, 0x2, 0x2, 
    0x2, 0x22c, 0x22d, 0x3, 0x2, 0x2, 0x2, 0x22d, 0x41, 0x3, 0x2, 0x2, 0x2, 
    0x22e, 0x22c, 0x3, 0x2, 0x2, 0x2, 0x22f, 0x234, 0x5, 0x44, 0x23, 0x2, 
    0x230, 0x231, 0x9, 0x4, 0x2, 0x2, 0x231, 0x233, 0x5, 0x44, 0x23, 0x2, 
    0x232, 0x230, 0x3, 0x2, 0x2, 0x2, 0x233, 0x236, 0x3, 0x2, 0x2, 0x2, 
    0x234, 0x232, 0x3, 0x2, 0x2, 0x2, 0x234, 0x235, 0x3, 0x2, 0x2, 0x2, 
    0x235, 0x43, 0x3, 0x2, 0x2, 0x2, 0x236, 0x234, 0x3, 0x2, 0x2, 0x2, 0x237, 
    0x23c, 0x5, 0x46, 0x24, 0x2, 0x238, 0x239, 0x9, 0x5, 0x2, 0x2, 0x239, 
    0x23b, 0x5, 0x46, 0x24, 0x2, 0x23a, 0x238, 0x3, 0x2, 0x2, 0x2, 0x23b, 
    0x23e, 0x3, 0x2, 0x2, 0x2, 0x23c, 0x23a, 0x3, 0x2, 0x2, 0x2, 0x23c, 
    0x23d, 0x3, 0x2, 0x2, 0x2, 0x23d, 0x45, 0x3, 0x2, 0x2, 0x2, 0x23e, 0x23c, 
    0x3, 0x2, 0x2, 0x2, 0x23f, 0x244, 0x5, 0x48, 0x25, 0x2, 0x240, 0x241, 
    0x9, 0x6, 0x2, 0x2, 0x241, 0x243, 0x5, 0x48, 0x25, 0x2, 0x242, 0x240, 
    0x3, 0x2, 0x2, 0x2, 0x243, 0x246, 0x3, 0x2, 0x2, 0x2, 0x244, 0x242, 
    0x3, 0x2, 0x2, 0x2, 0x244, 0x245, 0x3, 0x2, 0x2, 0x2, 0x245, 0x47, 0x3, 
    0x2, 0x2, 0x2, 0x246, 0x244, 0x3, 0x2, 0x2, 0x2, 0x247, 0x248, 0x5, 
    0x4a, 0x26, 0x2, 0x248, 0x249, 0x5, 0x4c, 0x27, 0x2, 0x249, 0x24c, 0x3, 
    0x2, 0x2, 0x2, 0x24a, 0x24c, 0x5, 0x4c, 0x27, 0x2, 0x24b, 0x247, 0x3, 
    0x2, 0x2, 0x2, 0x24b, 0x24a, 0x3, 0x2, 0x2, 0x2, 0x24c, 0x49, 0x3, 0x2, 
    0x2, 0x2, 0x24d, 0x24e, 0x9, 0x7, 0x2, 0x2, 0x24e, 0x4b, 0x3, 0x2, 0x2, 
    0x2, 0x24f, 0x256, 0x5, 0x18, 0xd, 0x2, 0x250, 0x256, 0x5, 0x4e, 0x28, 
    0x2, 0x251, 0x252, 0x7, 0x12, 0x2, 0x2, 0x252, 0x253, 0x5, 0x3a, 0x1e, 
    0x2, 0x253, 0x254, 0x7, 0x13, 0x2, 0x2, 0x254, 0x256, 0x3, 0x2, 0x2, 
    0x2, 0x255, 0x24f, 0x3, 0x2, 0x2, 0x2, 0x255, 0x250, 0x3, 0x2, 0x2, 
    0x2, 0x255, 0x251, 0x3, 0x2, 0x2, 0x2, 0x256, 0x4d, 0x3, 0x2, 0x2, 0x2, 
    0x257, 0x258, 0x9, 0x8, 0x2, 0x2, 0x258, 0x4f, 0x3, 0x2, 0x2, 0x2, 0x259, 
    0x25a, 0x5, 0x3a, 0x1e, 0x2, 0x25a, 0x51, 0x3, 0x2, 0x2, 0x2, 0x25b, 
    0x25c, 0x7, 0x2b, 0x2, 0x2, 0x25c, 0x264, 0x5, 0x54, 0x2b, 0x2, 0x25d, 
    0x264, 0x5, 0x88, 0x45, 0x2, 0x25e, 0x264, 0x5, 0x8e, 0x48, 0x2, 0x25f, 
    0x264, 0x5, 0x9a, 0x4e, 0x2, 0x260, 0x261, 0x7, 0x33, 0x2, 0x2, 0x261, 
    0x264, 0x5, 0x64, 0x33, 0x2, 0x262, 0x264, 0x5, 0xc4, 0x63, 0x2, 0x263, 
    0x25b, 0x3, 0x2, 0x2, 0x2, 0x263, 0x25d, 0x3, 0x2, 0x2, 0x2, 0x263, 
    0x25e, 0x3, 0x2, 0x2, 0x2, 0x263, 0x25f, 0x3, 0x2, 0x2, 0x2, 0x263, 
    0x260, 0x3, 0x2, 0x2, 0x2, 0x263, 0x262, 0x3, 0x2, 0x2, 0x2, 0x264, 
    0x53, 0x3, 0x2, 0x2, 0x2, 0x265, 0x266, 0x5, 0x56, 0x2c, 0x2, 0x266, 
    0x267, 0x5, 0x60, 0x31, 0x2, 0x267, 0x55, 0x3, 0x2, 0x2, 0x2, 0x268, 
    0x26b, 0x5, 0x58, 0x2d, 0x2, 0x269, 0x26b, 0x5, 0x5e, 0x30, 0x2, 0x26a, 
    0x268, 0x3, 0x2, 0x2, 0x2, 0x26a, 0x269, 0x3, 0x2, 0x2, 0x2, 0x26b, 
    0x57, 0x3, 0x2, 0x2, 0x2, 0x26c, 0x270, 0x5, 0x5a, 0x2e, 0x2, 0x26d, 
    0x270, 0x5, 0x5c, 0x2f, 0x2, 0x26e, 0x270, 0x5, 0x18, 0xd, 0x2, 0x26f, 
    0x26c, 0x3, 0x2, 0x2, 0x2, 0x26f, 0x26d, 0x3, 0x2, 0x2, 0x2, 0x26f, 
    0x26e, 0x3, 0x2, 0x2, 0x2, 0x270, 0x59, 0x3, 0x2, 0x2, 0x2, 0x271, 0x27b, 
    0x5, 0x68, 0x35, 0x2, 0x272, 0x27b, 0x5, 0x6a, 0x36, 0x2, 0x273, 0x27b, 
    0x5, 0x7c, 0x3f, 0x2, 0x274, 0x27b, 0x5, 0x7e, 0x40, 0x2, 0x275, 0x27b, 
    0x5, 0x80, 0x41, 0x2, 0x276, 0x27b, 0x5, 0x82, 0x42, 0x2, 0x277, 0x27b, 
    0x5, 0x84, 0x43, 0x2, 0x278, 0x27b, 0x5, 0x86, 0x44, 0x2, 0x279, 0x27b, 
    0x5, 0xc2, 0x62, 0x2, 0x27a, 0x271, 0x3, 0x2, 0x2, 0x2, 0x27a, 0x272, 
    0x3, 0x2, 0x2, 0x2, 0x27a, 0x273, 0x3, 0x2, 0x2, 0x2, 0x27a, 0x274, 
    0x3, 0x2, 0x2, 0x2, 0x27a, 0x275, 0x3, 0x2, 0x2, 0x2, 0x27a, 0x276, 
    0x3, 0x2, 0x2, 0x2, 0x27a, 0x277, 0x3, 0x2, 0x2, 0x2, 0x27a, 0x278, 
    0x3, 0x2, 0x2, 0x2, 0x27a, 0x279, 0x3, 0x2, 0x2, 0x2, 0x27b, 0x5b, 0x3, 
    0x2, 0x2, 0x2, 0x27c, 0x281, 0x5, 0x9e, 0x50, 0x2, 0x27d, 0x281, 0x5, 
    0xa0, 0x51, 0x2, 0x27e, 0x281, 0x5, 0xa2, 0x52, 0x2, 0x27f, 0x281, 0x5, 
    0xbe, 0x60, 0x2, 0x280, 0x27c, 0x3, 0x2, 0x2, 0x2, 0x280, 0x27d, 0x3, 
    0x2, 0x2, 0x2, 0x280, 0x27e, 0x3, 0x2, 0x2, 0x2, 0x280, 0x27f, 0x3, 
    0x2, 0x2, 0x2, 0x281, 0x5d, 0x3, 0x2, 0x2, 0x2, 0x282, 0x286, 0x5, 0x88, 
    0x45, 0x2, 0x283, 0x286, 0x5, 0x8e, 0x48, 0x2, 0x284, 0x286, 0x5, 0x9a, 
    0x4e, 0x2, 0x285, 0x282, 0x3, 0x2, 0x2, 0x2, 0x285, 0x283, 0x3, 0x2, 
    0x2, 0x2, 0x285, 0x284, 0x3, 0x2, 0x2, 0x2, 0x286, 0x5f, 0x3, 0x2, 0x2, 
    0x2, 0x287, 0x28c, 0x5, 0x62, 0x32, 0x2, 0x288, 0x289, 0x7, 0xf, 0x2, 
    0x2, 0x289, 0x28b, 0x5, 0x62, 0x32, 0x2, 0x28a, 0x288, 0x3, 0x2, 0x2, 
    0x2, 0x28b, 0x28e, 0x3, 0x2, 0x2, 0x2, 0x28c, 0x28a, 0x3, 0x2, 0x2, 
    0x2, 0x28c, 0x28d, 0x3, 0x2, 0x2, 0x2, 0x28d, 0x61, 0x3, 0x2, 0x2, 0x2, 
    0x28e, 0x28c, 0x3, 0x2, 0x2, 0x2, 0x28f, 0x292, 0x5, 0x64, 0x33, 0x2, 
    0x290, 0x292, 0x5, 0x66, 0x34, 0x2, 0x291, 0x28f, 0x3, 0x2, 0x2, 0x2, 
    0x291, 0x290, 0x3, 0x2, 0x2, 0x2, 0x292, 0x63, 0x3, 0x2, 0x2, 0x2, 0x293, 
    0x294, 0x7, 0x64, 0x2, 0x2, 0x294, 0x65, 0x3, 0x2, 0x2, 0x2, 0x295, 
    0x296, 0x5, 0xa4, 0x53, 0x2, 0x296, 0x67, 0x3, 0x2, 0x2, 0x2, 0x297, 
    0x29c, 0x7, 0x55, 0x2, 0x2, 0x298, 0x29c, 0x7, 0x5c, 0x2, 0x2, 0x299, 
    0x29a, 0x7, 0x3f, 0x2, 0x2, 0x29a, 0x29c, 0x7, 0x5c, 0x2, 0x2, 0x29b, 
    0x297, 0x3, 0x2, 0x2, 0x2, 0x29b, 0x298, 0x3, 0x2, 0x2, 0x2, 0x29b, 
    0x299, 0x3, 0x2, 0x2, 0x2, 0x29c, 0x69, 0x3, 0x2, 0x2, 0x2, 0x29d, 0x2a0, 
    0x5, 0x6c, 0x37, 0x2, 0x29e, 0x2a0, 0x5, 0x74, 0x3b, 0x2, 0x29f, 0x29d, 
    0x3, 0x2, 0x2, 0x2, 0x29f, 0x29e, 0x3, 0x2, 0x2, 0x2, 0x2a0, 0x6b, 0x3, 
    0x2, 0x2, 0x2, 0x2a1, 0x2a5, 0x5, 0x6e, 0x38, 0x2, 0x2a2, 0x2a5, 0x5, 
    0x70, 0x39, 0x2, 0x2a3, 0x2a5, 0x5, 0x72, 0x3a, 0x2, 0x2a4, 0x2a1, 0x3, 
    0x2, 0x2, 0x2, 0x2a4, 0x2a2, 0x3, 0x2, 0x2, 0x2, 0x2a4, 0x2a3, 0x3, 
    0x2, 0x2, 0x2, 0x2a5, 0x6d, 0x3, 0x2, 0x2, 0x2, 0x2a6, 0x2a7, 0x7, 0x3e, 
    0x2, 0x2, 0x2a7, 0x6f, 0x3, 0x2, 0x2, 0x2, 0x2a8, 0x2a9, 0x7, 0x3f, 
    0x2, 0x2, 0x2a9, 0x71, 0x3, 0x2, 0x2, 0x2, 0x2aa, 0x2ab, 0x7, 0x3f, 
    0x2, 0x2, 0x2ab, 0x2ac, 0x7, 0x3f, 0x2, 0x2, 0x2ac, 0x73, 0x3, 0x2, 
    0x2, 0x2, 0x2ad, 0x2b1, 0x5, 0x76, 0x3c, 0x2, 0x2ae, 0x2b1, 0x5, 0x78, 
    0x3d, 0x2, 0x2af, 0x2b1, 0x5, 0x7a, 0x3e, 0x2, 0x2b0, 0x2ad, 0x3, 0x2, 
    0x2, 0x2, 0x2b0, 0x2ae, 0x3, 0x2, 0x2, 0x2, 0x2b0, 0x2af, 0x3, 0x2, 
    0x2, 0x2, 0x2b1, 0x75, 0x3, 0x2, 0x2, 0x2, 0x2b2, 0x2b3, 0x7, 0x4e, 
    0x2, 0x2, 0x2b3, 0x2b4, 0x7, 0x3e, 0x2, 0x2, 0x2b4, 0x77, 0x3, 0x2, 
    0x2, 0x2, 0x2b5, 0x2b6, 0x7, 0x4e, 0x2, 0x2, 0x2b6, 0x2b7, 0x7, 0x3f, 
    0x2, 0x2, 0x2b7, 0x79, 0x3, 0x2, 0x2, 0x2, 0x2b8, 0x2b9, 0x7, 0x4e, 
    0x2, 0x2, 0x2b9, 0x2ba, 0x7, 0x3f, 0x2, 0x2, 0x2ba, 0x2bb, 0x7, 0x3f, 
    0x2, 0x2, 0x2bb, 0x7b, 0x3, 0x2, 0x2, 0x2, 0x2bc, 0x2bd, 0x7, 0x53, 
    0x2, 0x2, 0x2bd, 0x7d, 0x3, 0x2, 0x2, 0x2, 0x2be, 0x2bf, 0x7, 0x3a, 
    0x2, 0x2, 0x2bf, 0x7f, 0x3, 0x2, 0x2, 0x2, 0x2c0, 0x2c1, 0x7, 0x56, 
    0x2, 0x2, 0x2c1, 0x81, 0x3, 0x2, 0x2, 0x2, 0x2c2, 0x2c3, 0x7, 0x2f, 
    0x2, 0x2, 0x2c3, 0x83, 0x3, 0x2, 0x2, 0x2, 0x2c4, 0x2c5, 0x7, 0x52, 
    0x2, 0x2, 0x2c5, 0x85, 0x3, 0x2, 0x2, 0x2, 0x2c6, 0x2c7, 0x7, 0x4c, 
    0x2, 0x2, 0x2c7, 0x87, 0x3, 0x2, 0x2, 0x2, 0x2c8, 0x2c9, 0x7, 0x32, 
    0x2, 0x2, 0x2c9, 0x2ca, 0x7, 0x64, 0x2, 0x2, 0x2ca, 0x2cb, 0x7, 0x10, 
    0x2, 0x2, 0x2cb, 0x2cc, 0x5, 0x8a, 0x46, 0x2, 0x2cc, 0x2cd, 0x7, 0x11, 
    0x2, 0x2, 0x2cd, 0x89, 0x3, 0x2, 0x2, 0x2, 0x2ce, 0x2d0, 0x5, 0x8c, 
    0x47, 0x2, 0x2cf, 0x2ce, 0x3, 0x2, 0x2, 0x2, 0x2d0, 0x2d1, 0x3, 0x2, 
    0x2, 0x2, 0x2d1, 0x2cf, 0x3, 0x2, 0x2, 0x2, 0x2d1, 0x2d2, 0x3, 0x2, 
    0x2, 0x2, 0x2d2, 0x8b, 0x3, 0x2, 0x2, 0x2, 0x2d3, 0x2d4, 0x5, 0x56, 
    0x2c, 0x2, 0x2d4, 0x2d5, 0x5, 0x60, 0x31, 0x2, 0x2d5, 0x2d6, 0x7, 0xd, 
    0x2, 0x2, 0x2d6, 0x8d, 0x3, 0x2, 0x2, 0x2, 0x2d7, 0x2d8, 0x7, 0x50, 
    0x2, 0x2, 0x2d8, 0x2d9, 0x7, 0x64, 0x2, 0x2, 0x2d9, 0x2da, 0x7, 0x29, 
    0x2, 0x2, 0x2da, 0x2db, 0x7, 0x12, 0x2, 0x2, 0x2db, 0x2dc, 0x5, 0x90, 
    0x49, 0x2, 0x2dc, 0x2dd, 0x7, 0x13, 0x2, 0x2, 0x2dd, 0x2de, 0x7, 0x10, 
    0x2, 0x2, 0x2de, 0x2df, 0x5, 0x92, 0x4a, 0x2, 0x2df, 0x2e0, 0x7, 0x11, 
    0x2, 0x2, 0x2e0, 0x8f, 0x3, 0x2, 0x2, 0x2, 0x2e1, 0x2e7, 0x5, 0x6a, 
    0x36, 0x2, 0x2e2, 0x2e7, 0x5, 0x7c, 0x3f, 0x2, 0x2e3, 0x2e7, 0x5, 0x80, 
    0x41, 0x2, 0x2e4, 0x2e7, 0x5, 0x9a, 0x4e, 0x2, 0x2e5, 0x2e7, 0x5, 0x18, 
    0xd, 0x2, 0x2e6, 0x2e1, 0x3, 0x2, 0x2, 0x2, 0x2e6, 0x2e2, 0x3, 0x2, 
    0x2, 0x2, 0x2e6, 0x2e3, 0x3, 0x2, 0x2, 0x2, 0x2e6, 0x2e4, 0x3, 0x2, 
    0x2, 0x2, 0x2e6, 0x2e5, 0x3, 0x2, 0x2, 0x2, 0x2e7, 0x91, 0x3, 0x2, 0x2, 
    0x2, 0x2e8, 0x2ea, 0x5, 0x94, 0x4b, 0x2, 0x2e9, 0x2e8, 0x3, 0x2, 0x2, 
    0x2, 0x2ea, 0x2eb, 0x3, 0x2, 0x2, 0x2, 0x2eb, 0x2e9, 0x3, 0x2, 0x2, 
    0x2, 0x2eb, 0x2ec, 0x3, 0x2, 0x2, 0x2, 0x2ec, 0x93, 0x3, 0x2, 0x2, 0x2, 
    0x2ed, 0x2ef, 0x5, 0x96, 0x4c, 0x2, 0x2ee, 0x2ed, 0x3, 0x2, 0x2, 0x2, 
    0x2ef, 0x2f0, 0x3, 0x2, 0x2, 0x2, 0x2f0, 0x2ee, 0x3, 0x2, 0x2, 0x2, 
    0x2f0, 0x2f1, 0x3, 0x2, 0x2, 0x2, 0x2f1, 0x2f2, 0x3, 0x2, 0x2, 0x2, 
    0x2f2, 0x2f3, 0x5, 0x98, 0x4d, 0x2, 0x2f3, 0x2f4, 0x7, 0xd, 0x2, 0x2, 
    0x2f4, 0x95, 0x3, 0x2, 0x2, 0x2, 0x2f5, 0x2f6, 0x7, 0x54, 0x2, 0x2, 
    0x2f6, 0x2f7, 0x5, 0x3a, 0x1e, 0x2, 0x2f7, 0x2f8, 0x7, 0xe, 0x2, 0x2, 
    0x2f8, 0x2fc, 0x3, 0x2, 0x2, 0x2, 0x2f9, 0x2fa, 0x7, 0x3c, 0x2, 0x2, 
    0x2fa, 0x2fc, 0x7, 0xe, 0x2, 0x2, 0x2fb, 0x2f5, 0x3, 0x2, 0x2, 0x2, 
    0x2fb, 0x2f9, 0x3, 0x2, 0x2, 0x2, 0x2fc, 0x97, 0x3, 0x2, 0x2, 0x2, 0x2fd, 
    0x2fe, 0x5, 0x56, 0x2c, 0x2, 0x2fe, 0x2ff, 0x5, 0x62, 0x32, 0x2, 0x2ff, 
    0x99, 0x3, 0x2, 0x2, 0x2, 0x300, 0x301, 0x7, 0x40, 0x2, 0x2, 0x301, 
    0x302, 0x7, 0x64, 0x2, 0x2, 0x302, 0x303, 0x7, 0x10, 0x2, 0x2, 0x303, 
    0x308, 0x5, 0x9c, 0x4f, 0x2, 0x304, 0x305, 0x7, 0xf, 0x2, 0x2, 0x305, 
    0x307, 0x5, 0x9c, 0x4f, 0x2, 0x306, 0x304, 0x3, 0x2, 0x2, 0x2, 0x307, 
    0x30a, 0x3, 0x2, 0x2, 0x2, 0x308, 0x306, 0x3, 0x2, 0x2, 0x2, 0x308, 
    0x309, 0x3, 0x2, 0x2, 0x2, 0x309, 0x30b, 0x3, 0x2, 0x2, 0x2, 0x30a, 
    0x308, 0x3, 0x2, 0x2, 0x2, 0x30b, 0x30c, 0x7, 0x11, 0x2, 0x2, 0x30c, 
    0x9b, 0x3, 0x2, 0x2, 0x2, 0x30d, 0x30e, 0x7, 0x64, 0x2, 0x2, 0x30e, 
    0x9d, 0x3, 0x2, 0x2, 0x2, 0x30f, 0x310, 0x7, 0x30, 0x2, 0x2, 0x310, 
    0x311, 0x7, 0x18, 0x2, 0x2, 0x311, 0x312, 0x5, 0x58, 0x2d, 0x2, 0x312, 
    0x313, 0x7, 0xf, 0x2, 0x2, 0x313, 0x314, 0x5, 0x50, 0x29, 0x2, 0x314, 
    0x315, 0x7, 0x19, 0x2, 0x2, 0x315, 0x31c, 0x3, 0x2, 0x2, 0x2, 0x316, 
    0x317, 0x7, 0x30, 0x2, 0x2, 0x317, 0x318, 0x7, 0x18, 0x2, 0x2, 0x318, 
    0x319, 0x5, 0x58, 0x2d, 0x2, 0x319, 0x31a, 0x7, 0x19, 0x2, 0x2, 0x31a, 
    0x31c, 0x3, 0x2, 0x2, 0x2, 0x31b, 0x30f, 0x3, 0x2, 0x2, 0x2, 0x31b, 
    0x316, 0x3, 0x2, 0x2, 0x2, 0x31c, 0x9f, 0x3, 0x2, 0x2, 0x2, 0x31d, 0x31e, 
    0x7, 0x28, 0x2, 0x2, 0x31e, 0x31f, 0x7, 0x18, 0x2, 0x2, 0x31f, 0x320, 
    0x5, 0x50, 0x29, 0x2, 0x320, 0x321, 0x7, 0x19, 0x2, 0x2, 0x321, 0x324, 
    0x3, 0x2, 0x2, 0x2, 0x322, 0x324, 0x7, 0x28, 0x2, 0x2, 0x323, 0x31d, 
    0x3, 0x2, 0x2, 0x2, 0x323, 0x322, 0x3, 0x2, 0x2, 0x2, 0x324, 0xa1, 0x3, 
    0x2, 0x2, 0x2, 0x325, 0x326, 0x7, 0x41, 0x2, 0x2, 0x326, 0x327, 0x7, 
    0x18, 0x2, 0x2, 0x327, 0x328, 0x5, 0x50, 0x29, 0x2, 0x328, 0x329, 0x7, 
    0x19, 0x2, 0x2, 0x329, 0x32c, 0x3, 0x2, 0x2, 0x2, 0x32a, 0x32c, 0x7, 
    0x41, 0x2, 0x2, 0x32b, 0x325, 0x3, 0x2, 0x2, 0x2, 0x32b, 0x32a, 0x3, 
    0x2, 0x2, 0x2, 0x32c, 0xa3, 0x3, 0x2, 0x2, 0x2, 0x32d, 0x32f, 0x7, 0x64, 
    0x2, 0x2, 0x32e, 0x330, 0x5, 0xa6, 0x54, 0x2, 0x32f, 0x32e, 0x3, 0x2, 
    0x2, 0x2, 0x330, 0x331, 0x3, 0x2, 0x2, 0x2, 0x331, 0x32f, 0x3, 0x2, 
    0x2, 0x2, 0x331, 0x332, 0x3, 0x2, 0x2, 0x2, 0x332, 0xa5, 0x3, 0x2, 0x2, 
    0x2, 0x333, 0x334, 0x7, 0x14, 0x2, 0x2, 0x334, 0x335, 0x5, 0x50, 0x29, 
    0x2, 0x335, 0x336, 0x7, 0x15, 0x2, 0x2, 0x336, 0xa7, 0x3, 0x2, 0x2, 
    0x2, 0x337, 0x33a, 0x5, 0xce, 0x68, 0x2, 0x338, 0x33a, 0x5, 0xd2, 0x6a, 
    0x2, 0x339, 0x337, 0x3, 0x2, 0x2, 0x2, 0x339, 0x338, 0x3, 0x2, 0x2, 
    0x2, 0x33a, 0xa9, 0x3, 0x2, 0x2, 0x2, 0x33b, 0x33c, 0x7, 0x45, 0x2, 
    0x2, 0x33c, 0x33d, 0x7, 0x64, 0x2, 0x2, 0x33d, 0x341, 0x7, 0x10, 0x2, 
    0x2, 0x33e, 0x340, 0x5, 0x8c, 0x47, 0x2, 0x33f, 0x33e, 0x3, 0x2, 0x2, 
    0x2, 0x340, 0x343, 0x3, 0x2, 0x2, 0x2, 0x341, 0x33f, 0x3, 0x2, 0x2, 
    0x2, 0x341, 0x342, 0x3, 0x2, 0x2, 0x2, 0x342, 0x344, 0x3, 0x2, 0x2, 
    0x2, 0x343, 0x341, 0x3, 0x2, 0x2, 0x2, 0x344, 0x345, 0x7, 0x11, 0x2, 
    0x2, 0x345, 0xab, 0x3, 0x2, 0x2, 0x2, 0x346, 0x348, 0x5, 0xae, 0x58, 
    0x2, 0x347, 0x346, 0x3, 0x2, 0x2, 0x2, 0x347, 0x348, 0x3, 0x2, 0x2, 
    0x2, 0x348, 0x349, 0x3, 0x2, 0x2, 0x2, 0x349, 0x34a, 0x5, 0xb0, 0x59, 
    0x2, 0x34a, 0x34b, 0x7, 0x64, 0x2, 0x2, 0x34b, 0x34d, 0x5, 0xb2, 0x5a, 
    0x2, 0x34c, 0x34e, 0x5, 0xb8, 0x5d, 0x2, 0x34d, 0x34c, 0x3, 0x2, 0x2, 
    0x2, 0x34d, 0x34e, 0x3, 0x2, 0x2, 0x2, 0x34e, 0x350, 0x3, 0x2, 0x2, 
    0x2, 0x34f, 0x351, 0x5, 0xba, 0x5e, 0x2, 0x350, 0x34f, 0x3, 0x2, 0x2, 
    0x2, 0x350, 0x351, 0x3, 0x2, 0x2, 0x2, 0x351, 0xad, 0x3, 0x2, 0x2, 0x2, 
    0x352, 0x353, 0x7, 0x51, 0x2, 0x2, 0x353, 0xaf, 0x3, 0x2, 0x2, 0x2, 
    0x354, 0x357, 0x5, 0xbc, 0x5f, 0x2, 0x355, 0x357, 0x7, 0x37, 0x2, 0x2, 
    0x356, 0x354, 0x3, 0x2, 0x2, 0x2, 0x356, 0x355, 0x3, 0x2, 0x2, 0x2, 
    0x357, 0xb1, 0x3, 0x2, 0x2, 0x2, 0x358, 0x359, 0x7, 0x12, 0x2, 0x2, 
    0x359, 0x35e, 0x5, 0xb4, 0x5b, 0x2, 0x35a, 0x35b, 0x7, 0xf, 0x2, 0x2, 
    0x35b, 0x35d, 0x5, 0xb4, 0x5b, 0x2, 0x35c, 0x35a, 0x3, 0x2, 0x2, 0x2, 
    0x35d, 0x360, 0x3, 0x2, 0x2, 0x2, 0x35e, 0x35c, 0x3, 0x2, 0x2, 0x2, 
    0x35e, 0x35f, 0x3, 0x2, 0x2, 0x2, 0x35f, 0x361, 0x3, 0x2, 0x2, 0x2, 
    0x360, 0x35e, 0x3, 0x2, 0x2, 0x2, 0x361, 0x362, 0x7, 0x13, 0x2, 0x2, 
    0x362, 0x366, 0x3, 0x2, 0x2, 0x2, 0x363, 0x364, 0x7, 0x12, 0x2, 0x2, 
    0x364, 0x366, 0x7, 0x13, 0x2, 0x2, 0x365, 0x358, 0x3, 0x2, 0x2, 0x2, 
    0x365, 0x363, 0x3, 0x2, 0x2, 0x2, 0x366, 0xb3, 0x3, 0x2, 0x2, 0x2, 0x367, 
    0x368, 0x5, 0xb6, 0x5c, 0x2, 0x368, 0x369, 0x5, 0xbc, 0x5f, 0x2, 0x369, 
    0x36a, 0x5, 0x64, 0x33, 0x2, 0x36a, 0xb5, 0x3, 0x2, 0x2, 0x2, 0x36b, 
    0x36c, 0x9, 0x9, 0x2, 0x2, 0x36c, 0xb7, 0x3, 0x2, 0x2, 0x2, 0x36d, 0x36e, 
    0x7, 0x36, 0x2, 0x2, 0x36e, 0x36f, 0x7, 0x12, 0x2, 0x2, 0x36f, 0x374, 
    0x5, 0x18, 0xd, 0x2, 0x370, 0x371, 0x7, 0xf, 0x2, 0x2, 0x371, 0x373, 
    0x5, 0x18, 0xd, 0x2, 0x372, 0x370, 0x3, 0x2, 0x2, 0x2, 0x373, 0x376, 
    0x3, 0x2, 0x2, 0x2, 0x374, 0x372, 0x3, 0x2, 0x2, 0x2, 0x374, 0x375, 
    0x3, 0x2, 0x2, 0x2, 0x375, 0x377, 0x3, 0x2, 0x2, 0x2, 0x376, 0x374, 
    0x3, 0x2, 0x2, 0x2, 0x377, 0x378, 0x7, 0x13, 0x2, 0x2, 0x378, 0xb9, 
    0x3, 0x2, 0x2, 0x2, 0x379, 0x37a, 0x7, 0x42, 0x2, 0x2, 0x37a, 0x37b, 
    0x7, 0x12, 0x2, 0x2, 0x37b, 0x380, 0x7, 0xb, 0x2, 0x2, 0x37c, 0x37d, 
    0x7, 0xf, 0x2, 0x2, 0x37d, 0x37f, 0x7, 0xb, 0x2, 0x2, 0x37e, 0x37c, 
    0x3, 0x2, 0x2, 0x2, 0x37f, 0x382, 0x3, 0x2, 0x2, 0x2, 0x380, 0x37e, 
    0x3, 0x2, 0x2, 0x2, 0x380, 0x381, 0x3, 0x2, 0x2, 0x2, 0x381, 0x383, 
    0x3, 0x2, 0x2, 0x2, 0x382, 0x380, 0x3, 0x2, 0x2, 0x2, 0x383, 0x384, 
    0x7, 0x13, 0x2, 0x2, 0x384, 0xbb, 0x3, 0x2, 0x2, 0x2, 0x385, 0x38a, 
    0x5, 0x5a, 0x2e, 0x2, 0x386, 0x38a, 0x5, 0xa0, 0x51, 0x2, 0x387, 0x38a, 
    0x5, 0xa2, 0x52, 0x2, 0x388, 0x38a, 0x5, 0x18, 0xd, 0x2, 0x389, 0x385, 
    0x3, 0x2, 0x2, 0x2, 0x389, 0x386, 0x3, 0x2, 0x2, 0x2, 0x389, 0x387, 
    0x3, 0x2, 0x2, 0x2, 0x389, 0x388, 0x3, 0x2, 0x2, 0x2, 0x38a, 0xbd, 0x3, 
    0x2, 0x2, 0x2, 0x38b, 0x38c, 0x7, 0x4f, 0x2, 0x2, 0x38c, 0x38d, 0x7, 
    0x18, 0x2, 0x2, 0x38d, 0x38e, 0x5, 0x50, 0x29, 0x2, 0x38e, 0x38f, 0x7, 
    0xf, 0x2, 0x2, 0x38f, 0x390, 0x5, 0x50, 0x29, 0x2, 0x390, 0x391, 0x7, 
    0x19, 0x2, 0x2, 0x391, 0xbf, 0x3, 0x2, 0x2, 0x2, 0x392, 0x393, 0x7, 
    0x4f, 0x2, 0x2, 0x393, 0xc1, 0x3, 0x2, 0x2, 0x2, 0x394, 0x395, 0x7, 
    0x48, 0x2, 0x2, 0x395, 0xc3, 0x3, 0x2, 0x2, 0x2, 0x396, 0x397, 0x7, 
    0x32, 0x2, 0x2, 0x397, 0x39b, 0x7, 0x64, 0x2, 0x2, 0x398, 0x399, 0x7, 
    0x50, 0x2, 0x2, 0x399, 0x39b, 0x7, 0x64, 0x2, 0x2, 0x39a, 0x396, 0x3, 
    0x2, 0x2, 0x2, 0x39a, 0x398, 0x3, 0x2, 0x2, 0x2, 0x39b, 0xc5, 0x3, 0x2, 
    0x2, 0x2, 0x39c, 0x39d, 0x7, 0x31, 0x2, 0x2, 0x39d, 0x39e, 0x5, 0xc8, 
    0x65, 0x2, 0x39e, 0x39f, 0x7, 0xd, 0x2, 0x2, 0x39f, 0xc7, 0x3, 0x2, 
    0x2, 0x2, 0x3a0, 0x3a3, 0x5, 0x18, 0xd, 0x2, 0x3a1, 0x3a3, 0x7, 0xb, 
    0x2, 0x2, 0x3a2, 0x3a0, 0x3, 0x2, 0x2, 0x2, 0x3a2, 0x3a1, 0x3, 0x2, 
    0x2, 0x2, 0x3a3, 0xc9, 0x3, 0x2, 0x2, 0x2, 0x3a4, 0x3a5, 0x7, 0x5e, 
    0x2, 0x2, 0x3a5, 0x3a6, 0x5, 0x18, 0xd, 0x2, 0x3a6, 0x3a7, 0x7, 0xb, 
    0x2, 0x2, 0x3a7, 0xcb, 0x3, 0x2, 0x2, 0x2, 0x3a8, 0x3a9, 0x7, 0x5d, 
    0x2, 0x2, 0x3a9, 0x3aa, 0x5, 0x18, 0xd, 0x2, 0x3aa, 0x3ab, 0x7, 0xb, 
    0x2, 0x2, 0x3ab, 0xcd, 0x3, 0x2, 0x2, 0x2, 0x3ac, 0x3ad, 0x7, 0x34, 
    0x2, 0x2, 0x3ad, 0x3ae, 0x7, 0x5f, 0x2, 0x2, 0x3ae, 0x3af, 0x5, 0xbc, 
    0x5f, 0x2, 0x3af, 0x3b0, 0x5, 0xd0, 0x69, 0x2, 0x3b0, 0xcf, 0x3, 0x2, 
    0x2, 0x2, 0x3b1, 0x3b2, 0x5, 0x64, 0x33, 0x2, 0x3b2, 0x3b3, 0x5, 0xb8, 
    0x5d, 0x2, 0x3b3, 0x3bd, 0x3, 0x2, 0x2, 0x2, 0x3b4, 0x3b9, 0x5, 0x64, 
    0x33, 0x2, 0x3b5, 0x3b6, 0x7, 0xf, 0x2, 0x2, 0x3b6, 0x3b8, 0x5, 0x64, 
    0x33, 0x2, 0x3b7, 0x3b5, 0x3, 0x2, 0x2, 0x2, 0x3b8, 0x3bb, 0x3, 0x2, 
    0x2, 0x2, 0x3b9, 0x3b7, 0x3, 0x2, 0x2, 0x2, 0x3b9, 0x3ba, 0x3, 0x2, 
    0x2, 0x2, 0x3ba, 0x3bd, 0x3, 0x2, 0x2, 0x2, 0x3bb, 0x3b9, 0x3, 0x2, 
    0x2, 0x2, 0x3bc, 0x3b1, 0x3, 0x2, 0x2, 0x2, 0x3bc, 0x3b4, 0x3, 0x2, 
    0x2, 0x2, 0x3bd, 0xd1, 0x3, 0x2, 0x2, 0x2, 0x3be, 0x3bf, 0x7, 0x5f, 
    0x2, 0x2, 0x3bf, 0x3c0, 0x5, 0xbc, 0x5f, 0x2, 0x3c0, 0x3c1, 0x5, 0xd4, 
    0x6b, 0x2, 0x3c1, 0xd3, 0x3, 0x2, 0x2, 0x2, 0x3c2, 0x3c3, 0x5, 0x64, 
    0x33, 0x2, 0x3c3, 0x3c4, 0x5, 0xd6, 0x6c, 0x2, 0x3c4, 0x3ce, 0x3, 0x2, 
    0x2, 0x2, 0x3c5, 0x3ca, 0x5, 0x64, 0x33, 0x2, 0x3c6, 0x3c7, 0x7, 0xf, 
    0x2, 0x2, 0x3c7, 0x3c9, 0x5, 0x64, 0x33, 0x2, 0x3c8, 0x3c6, 0x3, 0x2, 
    0x2, 0x2, 0x3c9, 0x3cc, 0x3, 0x2, 0x2, 0x2, 0x3ca, 0x3c8, 0x3, 0x2, 
    0x2, 0x2, 0x3ca, 0x3cb, 0x3, 0x2, 0x2, 0x2, 0x3cb, 0x3ce, 0x3, 0x2, 
    0x2, 0x2, 0x3cc, 0x3ca, 0x3, 0x2, 0x2, 0x2, 0x3cd, 0x3c2, 0x3, 0x2, 
    0x2, 0x2, 0x3cd, 0x3c5, 0x3, 0x2, 0x2, 0x2, 0x3ce, 0xd5, 0x3, 0x2, 0x2, 
    0x2, 0x3cf, 0x3d1, 0x5, 0xd8, 0x6d, 0x2, 0x3d0, 0x3d2, 0x5, 0xda, 0x6e, 
    0x2, 0x3d1, 0x3d0, 0x3, 0x2, 0x2, 0x2, 0x3d1, 0x3d2, 0x3, 0x2, 0x2, 
    0x2, 0x3d2, 0x3d5, 0x3, 0x2, 0x2, 0x2, 0x3d3, 0x3d5, 0x5, 0xda, 0x6e, 
    0x2, 0x3d4, 0x3cf, 0x3, 0x2, 0x2, 0x2, 0x3d4, 0x3d3, 0x3, 0x2, 0x2, 
    0x2, 0x3d5, 0xd7, 0x3, 0x2, 0x2, 0x2, 0x3d6, 0x3d7, 0x7, 0x46, 0x2, 
    0x2, 0x3d7, 0x3d8, 0x5, 0xdc, 0x6f, 0x2, 0x3d8, 0xd9, 0x3, 0x2, 0x2, 
    0x2, 0x3d9, 0x3da, 0x7, 0x25, 0x2, 0x2, 0x3da, 0x3db, 0x5, 0xdc, 0x6f, 
    0x2, 0x3db, 0xdb, 0x3, 0x2, 0x2, 0x2, 0x3dc, 0x3dd, 0x7, 0x12, 0x2, 
    0x2, 0x3dd, 0x3e2, 0x5, 0x18, 0xd, 0x2, 0x3de, 0x3df, 0x7, 0xf, 0x2, 
    0x2, 0x3df, 0x3e1, 0x5, 0x18, 0xd, 0x2, 0x3e0, 0x3de, 0x3, 0x2, 0x2, 
    0x2, 0x3e1, 0x3e4, 0x3, 0x2, 0x2, 0x2, 0x3e2, 0x3e0, 0x3, 0x2, 0x2, 
    0x2, 0x3e2, 0x3e3, 0x3, 0x2, 0x2, 0x2, 0x3e3, 0x3e5, 0x3, 0x2, 0x2, 
    0x2, 0x3e4, 0x3e2, 0x3, 0x2, 0x2, 0x2, 0x3e5, 0x3e6, 0x7, 0x13, 0x2, 
    0x2, 0x3e6, 0xdd, 0x3, 0x2, 0x2, 0x2, 0x3e7, 0x3ea, 0x5, 0xe2, 0x72, 
    0x2, 0x3e8, 0x3ea, 0x5, 0xe0, 0x71, 0x2, 0x3e9, 0x3e7, 0x3, 0x2, 0x2, 
    0x2, 0x3e9, 0x3e8, 0x3, 0x2, 0x2, 0x2, 0x3ea, 0xdf, 0x3, 0x2, 0x2, 0x2, 
    0x3eb, 0x3ec, 0x7, 0x63, 0x2, 0x2, 0x3ec, 0x3ed, 0x7, 0x64, 0x2, 0x2, 
    0x3ed, 0xe1, 0x3, 0x2, 0x2, 0x2, 0x3ee, 0x3ef, 0x5, 0xe4, 0x73, 0x2, 
    0x3ef, 0x3f0, 0x7, 0x10, 0x2, 0x2, 0x3f0, 0x3f1, 0x5, 0xea, 0x76, 0x2, 
    0x3f1, 0x3f2, 0x7, 0x11, 0x2, 0x2, 0x3f2, 0xe3, 0x3, 0x2, 0x2, 0x2, 
    0x3f3, 0x3f4, 0x7, 0x63, 0x2, 0x2, 0x3f4, 0x3f6, 0x7, 0x64, 0x2, 0x2, 
    0x3f5, 0x3f7, 0x5, 0xe8, 0x75, 0x2, 0x3f6, 0x3f5, 0x3, 0x2, 0x2, 0x2, 
    0x3f6, 0x3f7, 0x3, 0x2, 0x2, 0x2, 0x3f7, 0x3f9, 0x3, 0x2, 0x2, 0x2, 
    0x3f8, 0x3fa, 0x5, 0xe6, 0x74, 0x2, 0x3f9, 0x3f8, 0x3, 0x2, 0x2, 0x2, 
    0x3f9, 0x3fa, 0x3, 0x2, 0x2, 0x2, 0x3fa, 0xe5, 0x3, 0x2, 0x2, 0x2, 0x3fb, 
    0x3fc, 0x7, 0x4a, 0x2, 0x2, 0x3fc, 0x401, 0x5, 0x18, 0xd, 0x2, 0x3fd, 
    0x3fe, 0x7, 0xf, 0x2, 0x2, 0x3fe, 0x400, 0x5, 0x18, 0xd, 0x2, 0x3ff, 
    0x3fd, 0x3, 0x2, 0x2, 0x2, 0x400, 0x403, 0x3, 0x2, 0x2, 0x2, 0x401, 
    0x3ff, 0x3, 0x2, 0x2, 0x2, 0x401, 0x402, 0x3, 0x2, 0x2, 0x2, 0x402, 
    0xe7, 0x3, 0x2, 0x2, 0x2, 0x403, 0x401, 0x3, 0x2, 0x2, 0x2, 0x404, 0x405, 
    0x7, 0xe, 0x2, 0x2, 0x405, 0x406, 0x5, 0x18, 0xd, 0x2, 0x406, 0xe9, 
    0x3, 0x2, 0x2, 0x2, 0x407, 0x409, 0x5, 0xec, 0x77, 0x2, 0x408, 0x407, 
    0x3, 0x2, 0x2, 0x2, 0x409, 0x40c, 0x3, 0x2, 0x2, 0x2, 0x40a, 0x408, 
    0x3, 0x2, 0x2, 0x2, 0x40a, 0x40b, 0x3, 0x2, 0x2, 0x2, 0x40b, 0xeb, 0x3, 
    0x2, 0x2, 0x2, 0x40c, 0x40a, 0x3, 0x2, 0x2, 0x2, 0x40d, 0x40e, 0x5, 
    0xee, 0x78, 0x2, 0x40e, 0x40f, 0x7, 0xd, 0x2, 0x2, 0x40f, 0x420, 0x3, 
    0x2, 0x2, 0x2, 0x410, 0x411, 0x5, 0xf2, 0x7a, 0x2, 0x411, 0x412, 0x7, 
    0xd, 0x2, 0x2, 0x412, 0x420, 0x3, 0x2, 0x2, 0x2, 0x413, 0x414, 0x5, 
    0xf4, 0x7b, 0x2, 0x414, 0x415, 0x7, 0xd, 0x2, 0x2, 0x415, 0x420, 0x3, 
    0x2, 0x2, 0x2, 0x416, 0x417, 0x5, 0xf6, 0x7c, 0x2, 0x417, 0x418, 0x7, 
    0xd, 0x2, 0x2, 0x418, 0x420, 0x3, 0x2, 0x2, 0x2, 0x419, 0x41a, 0x5, 
    0xf8, 0x7d, 0x2, 0x41a, 0x41b, 0x7, 0xd, 0x2, 0x2, 0x41b, 0x420, 0x3, 
    0x2, 0x2, 0x2, 0x41c, 0x41d, 0x5, 0xa8, 0x55, 0x2, 0x41d, 0x41e, 0x7, 
    0xd, 0x2, 0x2, 0x41e, 0x420, 0x3, 0x2, 0x2, 0x2, 0x41f, 0x40d, 0x3, 
    0x2, 0x2, 0x2, 0x41f, 0x410, 0x3, 0x2, 0x2, 0x2, 0x41f, 0x413, 0x3, 
    0x2, 0x2, 0x2, 0x41f, 0x416, 0x3, 0x2, 0x2, 0x2, 0x41f, 0x419, 0x3, 
    0x2, 0x2, 0x2, 0x41f, 0x41c, 0x3, 0x2, 0x2, 0x2, 0x420, 0xed, 0x3, 0x2, 
    0x2, 0x2, 0x421, 0x422, 0x7, 0x5a, 0x2, 0x2, 0x422, 0x423, 0x5, 0xf0, 
    0x79, 0x2, 0x423, 0x424, 0x7, 0x64, 0x2, 0x2, 0x424, 0xef, 0x3, 0x2, 
    0x2, 0x2, 0x425, 0x428, 0x5, 0x18, 0xd, 0x2, 0x426, 0x428, 0x7, 0x4c, 
    0x2, 0x2, 0x427, 0x425, 0x3, 0x2, 0x2, 0x2, 0x427, 0x426, 0x3, 0x2, 
    0x2, 0x2, 0x428, 0xf1, 0x3, 0x2, 0x2, 0x2, 0x429, 0x42b, 0x7, 0x2c, 
    0x2, 0x2, 0x42a, 0x42c, 0x7, 0x57, 0x2, 0x2, 0x42b, 0x42a, 0x3, 0x2, 
    0x2, 0x2, 0x42b, 0x42c, 0x3, 0x2, 0x2, 0x2, 0x42c, 0x42d, 0x3, 0x2, 
    0x2, 0x2, 0x42d, 0x42e, 0x5, 0xf0, 0x79, 0x2, 0x42e, 0x42f, 0x7, 0x64, 
    0x2, 0x2, 0x42f, 0xf3, 0x3, 0x2, 0x2, 0x2, 0x430, 0x431, 0x7, 0x27, 
    0x2, 0x2, 0x431, 0x432, 0x5, 0x18, 0xd, 0x2, 0x432, 0x433, 0x7, 0x64, 
    0x2, 0x2, 0x433, 0xf5, 0x3, 0x2, 0x2, 0x2, 0x434, 0x435, 0x7, 0x2a, 
    0x2, 0x2, 0x435, 0x436, 0x5, 0x18, 0xd, 0x2, 0x436, 0x437, 0x7, 0x64, 
    0x2, 0x2, 0x437, 0xf7, 0x3, 0x2, 0x2, 0x2, 0x438, 0x439, 0x7, 0x5b, 
    0x2, 0x2, 0x439, 0x43a, 0x5, 0x18, 0xd, 0x2, 0x43a, 0x43b, 0x7, 0x64, 
    0x2, 0x2, 0x43b, 0xf9, 0x3, 0x2, 0x2, 0x2, 0x43c, 0x43d, 0x5, 0xfc, 
    0x7f, 0x2, 0x43d, 0x43e, 0x5, 0x102, 0x82, 0x2, 0x43e, 0xfb, 0x3, 0x2, 
    0x2, 0x2, 0x43f, 0x440, 0x7, 0x43, 0x2, 0x2, 0x440, 0x442, 0x7, 0x64, 
    0x2, 0x2, 0x441, 0x443, 0x5, 0xfe, 0x80, 0x2, 0x442, 0x441, 0x3, 0x2, 
    0x2, 0x2, 0x442, 0x443, 0x3, 0x2, 0x2, 0x2, 0x443, 0x445, 0x3, 0x2, 
    0x2, 0x2, 0x444, 0x446, 0x5, 0xe6, 0x74, 0x2, 0x445, 0x444, 0x3, 0x2, 
    0x2, 0x2, 0x445, 0x446, 0x3, 0x2, 0x2, 0x2, 0x446, 0x447, 0x3, 0x2, 
    0x2, 0x2, 0x447, 0x448, 0x7, 0x61, 0x2, 0x2, 0x448, 0x44a, 0x5, 0x18, 
    0xd, 0x2, 0x449, 0x44b, 0x5, 0x100, 0x81, 0x2, 0x44a, 0x449, 0x3, 0x2, 
    0x2, 0x2, 0x44a, 0x44b, 0x3, 0x2, 0x2, 0x2, 0x44b, 0xfd, 0x3, 0x2, 0x2, 
    0x2, 0x44c, 0x44d, 0x7, 0xe, 0x2, 0x2, 0x44d, 0x44e, 0x5, 0x18, 0xd, 
    0x2, 0x44e, 0xff, 0x3, 0x2, 0x2, 0x2, 0x44f, 0x450, 0x7, 0x2d, 0x2, 
    0x2, 0x450, 0x451, 0x5, 0x18, 0xd, 0x2, 0x451, 0x101, 0x3, 0x2, 0x2, 
    0x2, 0x452, 0x456, 0x7, 0x10, 0x2, 0x2, 0x453, 0x455, 0x5, 0x104, 0x83, 
    0x2, 0x454, 0x453, 0x3, 0x2, 0x2, 0x2, 0x455, 0x458, 0x3, 0x2, 0x2, 
    0x2, 0x456, 0x454, 0x3, 0x2, 0x2, 0x2, 0x456, 0x457, 0x3, 0x2, 0x2, 
    0x2, 0x457, 0x459, 0x3, 0x2, 0x2, 0x2, 0x458, 0x456, 0x3, 0x2, 0x2, 
    0x2, 0x459, 0x45a, 0x7, 0x11, 0x2, 0x2, 0x45a, 0x103, 0x3, 0x2, 0x2, 
    0x2, 0x45b, 0x463, 0x5, 0x12, 0xa, 0x2, 0x45c, 0x45d, 0x5, 0x106, 0x84, 
    0x2, 0x45d, 0x45e, 0x7, 0xd, 0x2, 0x2, 0x45e, 0x463, 0x3, 0x2, 0x2, 
    0x2, 0x45f, 0x460, 0x5, 0x108, 0x85, 0x2, 0x460, 0x461, 0x7, 0xd, 0x2, 
    0x2, 0x461, 0x463, 0x3, 0x2, 0x2, 0x2, 0x462, 0x45b, 0x3, 0x2, 0x2, 
    0x2, 0x462, 0x45c, 0x3, 0x2, 0x2, 0x2, 0x462, 0x45f, 0x3, 0x2, 0x2, 
    0x2, 0x463, 0x105, 0x3, 0x2, 0x2, 0x2, 0x464, 0x465, 0x7, 0x44, 0x2, 
    0x2, 0x465, 0x466, 0x7, 0x64, 0x2, 0x2, 0x466, 0x468, 0x7, 0x12, 0x2, 
    0x2, 0x467, 0x469, 0x5, 0x30, 0x19, 0x2, 0x468, 0x467, 0x3, 0x2, 0x2, 
    0x2, 0x468, 0x469, 0x3, 0x2, 0x2, 0x2, 0x469, 0x46a, 0x3, 0x2, 0x2, 
    0x2, 0x46a, 0x46c, 0x7, 0x13, 0x2, 0x2, 0x46b, 0x46d, 0x5, 0xb8, 0x5d, 
    0x2, 0x46c, 0x46b, 0x3, 0x2, 0x2, 0x2, 0x46c, 0x46d, 0x3, 0x2, 0x2, 
    0x2, 0x46d, 0x107, 0x3, 0x2, 0x2, 0x2, 0x46e, 0x46f, 0x7, 0x35, 0x2, 
    0x2, 0x46f, 0x470, 0x7, 0x64, 0x2, 0x2, 0x470, 0x472, 0x7, 0x12, 0x2, 
    0x2, 0x471, 0x473, 0x5, 0x30, 0x19, 0x2, 0x472, 0x471, 0x3, 0x2, 0x2, 
    0x2, 0x472, 0x473, 0x3, 0x2, 0x2, 0x2, 0x473, 0x474, 0x3, 0x2, 0x2, 
    0x2, 0x474, 0x476, 0x7, 0x13, 0x2, 0x2, 0x475, 0x477, 0x5, 0xb8, 0x5d, 
    0x2, 0x476, 0x475, 0x3, 0x2, 0x2, 0x2, 0x476, 0x477, 0x3, 0x2, 0x2, 
    0x2, 0x477, 0x109, 0x3, 0x2, 0x2, 0x2, 0x478, 0x47c, 0x5, 0x110, 0x89, 
    0x2, 0x479, 0x47c, 0x5, 0x10e, 0x88, 0x2, 0x47a, 0x47c, 0x5, 0x10c, 
    0x87, 0x2, 0x47b, 0x478, 0x3, 0x2, 0x2, 0x2, 0x47b, 0x479, 0x3, 0x2, 
    0x2, 0x2, 0x47b, 0x47a, 0x3, 0x2, 0x2, 0x2, 0x47c, 0x10b, 0x3, 0x2, 
    0x2, 0x2, 0x47d, 0x47f, 0x7, 0x58, 0x2, 0x2, 0x47e, 0x47d, 0x3, 0x2, 
    0x2, 0x2, 0x47e, 0x47f, 0x3, 0x2, 0x2, 0x2, 0x47f, 0x480, 0x3, 0x2, 
    0x2, 0x2, 0x480, 0x481, 0x7, 0x39, 0x2, 0x2, 0x481, 0x482, 0x7, 0x64, 
    0x2, 0x2, 0x482, 0x10d, 0x3, 0x2, 0x2, 0x2, 0x483, 0x484, 0x7, 0x58, 
    0x2, 0x2, 0x484, 0x485, 0x7, 0x39, 0x2, 0x2, 0x485, 0x486, 0x7, 0x64, 
    0x2, 0x2, 0x486, 0x487, 0x5, 0x26, 0x14, 0x2, 0x487, 0x48b, 0x7, 0x10, 
    0x2, 0x2, 0x488, 0x48a, 0x5, 0x12, 0xa, 0x2, 0x489, 0x488, 0x3, 0x2, 
    0x2, 0x2, 0x48a, 0x48d, 0x3, 0x2, 0x2, 0x2, 0x48b, 0x489, 0x3, 0x2, 
    0x2, 0x2, 0x48b, 0x48c, 0x3, 0x2, 0x2, 0x2, 0x48c, 0x48e, 0x3, 0x2, 
    0x2, 0x2, 0x48d, 0x48b, 0x3, 0x2, 0x2, 0x2, 0x48e, 0x48f, 0x7, 0x11, 
    0x2, 0x2, 0x48f, 0x10f, 0x3, 0x2, 0x2, 0x2, 0x490, 0x491, 0x5, 0x112, 
    0x8a, 0x2, 0x491, 0x495, 0x7, 0x10, 0x2, 0x2, 0x492, 0x494, 0x5, 0x2a, 
    0x16, 0x2, 0x493, 0x492, 0x3, 0x2, 0x2, 0x2, 0x494, 0x497, 0x3, 0x2, 
    0x2, 0x2, 0x495, 0x493, 0x3, 0x2, 0x2, 0x2, 0x495, 0x496, 0x3, 0x2, 
    0x2, 0x2, 0x496, 0x498, 0x3, 0x2, 0x2, 0x2, 0x497, 0x495, 0x3, 0x2, 
    0x2, 0x2, 0x498, 0x499, 0x7, 0x11, 0x2, 0x2, 0x499, 0x111, 0x3, 0x2, 
    0x2, 0x2, 0x49a, 0x49c, 0x7, 0x2e, 0x2, 0x2, 0x49b, 0x49a, 0x3, 0x2, 
    0x2, 0x2, 0x49b, 0x49c, 0x3, 0x2, 0x2, 0x2, 0x49c, 0x49d, 0x3, 0x2, 
    0x2, 0x2, 0x49d, 0x49e, 0x7, 0x39, 0x2, 0x2, 0x49e, 0x49f, 0x7, 0x64, 
    0x2, 0x2, 0x49f, 0x4a0, 0x5, 0x26, 0x14, 0x2, 0x4a0, 0x113, 0x3, 0x2, 
    0x2, 0x2, 0x66, 0x117, 0x11d, 0x140, 0x148, 0x14e, 0x156, 0x15c, 0x161, 
    0x166, 0x17e, 0x186, 0x18c, 0x193, 0x19a, 0x19d, 0x1ae, 0x1b8, 0x1be, 
    0x1c6, 0x1cd, 0x1d0, 0x1d8, 0x1db, 0x1e2, 0x1ed, 0x1f1, 0x1fa, 0x213, 
    0x21c, 0x224, 0x22c, 0x234, 0x23c, 0x244, 0x24b, 0x255, 0x263, 0x26a, 
    0x26f, 0x27a, 0x280, 0x285, 0x28c, 0x291, 0x29b, 0x29f, 0x2a4, 0x2b0, 
    0x2d1, 0x2e6, 0x2eb, 0x2f0, 0x2fb, 0x308, 0x31b, 0x323, 0x32b, 0x331, 
    0x339, 0x341, 0x347, 0x34d, 0x350, 0x356, 0x35e, 0x365, 0x374, 0x380, 
    0x389, 0x39a, 0x3a2, 0x3b9, 0x3bc, 0x3ca, 0x3cd, 0x3d1, 0x3d4, 0x3e2, 
    0x3e9, 0x3f6, 0x3f9, 0x401, 0x40a, 0x41f, 0x427, 0x42b, 0x442, 0x445, 
    0x44a, 0x456, 0x462, 0x468, 0x46c, 0x472, 0x476, 0x47b, 0x47e, 0x48b, 
    0x495, 0x49b, 
  };

  atn::ATNDeserializer deserializer;
  _atn = deserializer.deserialize(_serializedATN);

  size_t count = _atn.getNumberOfDecisions();
  _decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    _decisionToDFA.emplace_back(_atn.getDecisionState(i), i);
  }
}

IDLParser::Initializer IDLParser::_init;
