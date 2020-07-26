#include <QtTest>

#include <morseencoder.h>

class MorseCode : public QObject
{
    Q_OBJECT

private slots:
    void it_encodes_individual_characters_data() {};
    void it_encodes_individual_characters() {};
};

QTEST_APPLESS_MAIN(MorseCode)

#include "tst_morsecode.moc"
