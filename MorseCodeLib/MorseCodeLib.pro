QT -= gui

TEMPLATE = lib

CONFIG += c++17

DEFINES += QT_DEPRECATED_WARNINGS

SOURCES += \
    morseencoder.cpp

HEADERS += \
    morseencoder.h

OTHER_FILES += \
    morsecodelib.pri

CONFIG(debug, debug|release){
DESTDIR = $$PWD/bin/debug
}
CONFIG(release, debug|release){
DESTDIR = $$PWD/bin/release
}
