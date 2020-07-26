QT += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

DEFINES += QT_DEPRECATED_WARNINGS

SOURCES += \
    encoders.cpp \
    encoders/morsecode.cpp \
    encoders/noencode.cpp \
    iencoder.cpp \
    main.cpp \
    mainwindow.cpp \
    textencodewidget.cpp

HEADERS += \
    encoders.h \
    encoders/morsecode.h \
    encoders/noencode.h \
    iencoder.h \
    mainwindow.h \
    textencodewidget.h

FORMS += \
    mainwindow.ui \
    textencodewidget.ui

include(../MorseCodeLib/morsecodelib.pri)

CONFIG(debug, debug|release){
DESTDIR = $$PWD/bin/debug
}
CONFIG(release, debug|release){
DESTDIR = $$PWD/bin/release
}
