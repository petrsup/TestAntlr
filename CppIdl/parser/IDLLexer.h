
// Generated from IDL.g4 by ANTLR 4.7.1

#pragma once


#include "antlr4-runtime.h"


namespace idl {


class  IDLLexer : public antlr4::Lexer {
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

  IDLLexer(antlr4::CharStream *input);
  ~IDLLexer();

  virtual std::string getGrammarFileName() const override;
  virtual const std::vector<std::string>& getRuleNames() const override;

  virtual const std::vector<std::string>& getChannelNames() const override;
  virtual const std::vector<std::string>& getModeNames() const override;
  virtual const std::vector<std::string>& getTokenNames() const override; // deprecated, use vocabulary instead
  virtual antlr4::dfa::Vocabulary& getVocabulary() const override;

  virtual const std::vector<uint16_t> getSerializedATN() const override;
  virtual const antlr4::atn::ATN& getATN() const override;

private:
  static std::vector<antlr4::dfa::DFA> _decisionToDFA;
  static antlr4::atn::PredictionContextCache _sharedContextCache;
  static std::vector<std::string> _ruleNames;
  static std::vector<std::string> _tokenNames;
  static std::vector<std::string> _channelNames;
  static std::vector<std::string> _modeNames;

  static std::vector<std::string> _literalNames;
  static std::vector<std::string> _symbolicNames;
  static antlr4::dfa::Vocabulary _vocabulary;
  static antlr4::atn::ATN _atn;
  static std::vector<uint16_t> _serializedATN;


  // Individual action functions triggered by action() above.

  // Individual semantic predicate functions triggered by sempred() above.

  struct Initializer {
    Initializer();
  };
  static Initializer _init;
};

}  // namespace idl
