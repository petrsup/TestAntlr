TEMPLATE = app
CONFIG += console c++14
CONFIG -= app_bundle
CONFIG -= qt

INCLUDEPATH += /usr/include/antlr4-runtime
LIBS += -lantlr4-runtime

SOURCES += \
        main.cpp \
    parser/IDLLexer.cpp \
    parser/IDLParser.cpp \
    parser/IDLBaseVisitor.cpp \
    parser/IDLVisitor.cpp \
    DeclarationEmiter.cpp

HEADERS += \
    parser/IDLBaseListener.h \
    parser/IDLLexer.h \
    parser/IDLListener.h \
    parser/IDLParser.h \
    parser/IDLBaseVisitor.h \
    parser/IDLVisitor.h \
    DeclarationEmiter.h
