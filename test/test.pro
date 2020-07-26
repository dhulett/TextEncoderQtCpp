QT += testlib
QT -= gui

CONFIG += qt console warn_on depend_includepath testcase
CONFIG -= app_bundle

TEMPLATE = app

SOURCES +=  tst_morsecode.cpp

include(../MorseCodeLib/morsecodelib.pri)

CONFIG(debug, debug|release){
DESTDIR = $$PWD/bin/debug
}
CONFIG(release, debug|release){
DESTDIR = $$PWD/bin/release
}
