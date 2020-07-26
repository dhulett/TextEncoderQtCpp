CONFIG(debug, debug|release): LIBS += -L$$PWD/bin/debug/ -lMorseCodeLib
CONFIG(release, debug|release): LIBS += -L$$PWD/bin/release/ -lMorseCodeLib

INCLUDEPATH += $$PWD
DEPENDPATH += $$PWD
