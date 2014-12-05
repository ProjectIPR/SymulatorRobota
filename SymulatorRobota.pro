#-------------------------------------------------
#
# Project created by QtCreator 2014-12-05T13:08:09
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = SymulatorRobota
TEMPLATE = app

SOURCES += main.cpp\
        mainwindow.cpp \
    paneluzytkownika.cpp \
    form.cpp \
    edycjadanych.cpp \
    zmienhaslo.cpp \
    przypomnijhaslo.cpp \
    oknooperatora.cpp

HEADERS  += mainwindow.h \
    paneluzytkownika.h \
    form.h \
    edycjadanych.h \
    zmienhaslo.h \
    przypomnijhaslo.h \
    oknooperatora.h

FORMS    += mainwindow.ui \
    paneluzytkownika.ui \
    form.ui \
    edycjadanych.ui \
    zmienhaslo.ui \
    przypomnijhaslo.ui \
    oknooperatora.ui
