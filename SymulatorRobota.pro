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
    rejestracja.cpp \
    zalogowanie.cpp

HEADERS  += mainwindow.h \
    paneluzytkownika.h \
    rejestracja.h \
    zalogowanie.h

FORMS    += mainwindow.ui \
    paneluzytkownika.ui \
    rejestracja.ui \
    zalogowanie.ui
