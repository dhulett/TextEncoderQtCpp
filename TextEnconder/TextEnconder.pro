QT += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

DEFINES += QT_DEPRECATED_WARNINGS

SOURCES += \
    encoders.cpp \
    iencoder.cpp \
    main.cpp \
    mainwindow.cpp

HEADERS += \
    encoders.h \
    iencoder.h \
    mainwindow.h

FORMS += \
    mainwindow.ui

include(../MorseCodeLib/morsecodelib.pri)

CONFIG(debug, debug|release){
DESTDIR = $$PWD/bin/debug
}
CONFIG(release, debug|release){
DESTDIR = $$PWD/bin/release
}
