#-------------------------------------------------
#
# Project created by QtCreator 2019-07-11T10:57:00
#
#-------------------------------------------------
TARGET = FDScript
TEMPLATE = lib
CONFIG += console c++17
CONFIG -= app_bundle
CONFIG -= qt

DESTDIR = ../build/lib
MAKEFILE = ../build/makefiles/$${TARGET}
OBJECTS_DIR = ../build/obj/$${TARGET}

LIBS += -L../build/lib

INCLUDEPATH += include \

SOURCES += \
    src/BaseInterpreter.cpp \
    src/BaseValue.cpp

HEADERS += \
    include/FDScript/BaseInterpreter.h \
    include/FDScript/BaseValue.h

unix {
    target.path = /usr/lib
    INSTALLS += target
}
