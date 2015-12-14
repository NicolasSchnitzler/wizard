#-------------------------------------------------
#
# Project created by QtCreator 2015-09-09T14:17:22
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Wizard
TEMPLATE = app
CONFIG+= c++11

SOURCES += main.cpp\
        wizard.cpp \
    introPage.cpp \
    inOutPage.cpp \
    generalPage.cpp \
    iowidget.cpp \
    iolinewidget.cpp \
    generator.cpp \
    nodepage.cpp \
    abstractionendpage.cpp

HEADERS  += wizard.h \
    introPage.h \
    inOutPage.h \
    generalPage.h \
    iowidget.h \
    iolinewidget.h \
    generator.h \
    nodepage.h \
    abstractionendpage.h

FORMS += \
    introPage.ui \
    inOutPage.ui \
    generalPage.ui \
    iolinewidget.ui \
    nodepage.ui \
    abstractionendpage.ui

RESOURCES += \
    templates.qrc
