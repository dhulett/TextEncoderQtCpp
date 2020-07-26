#include <QtTest>

#include <morseencoder.h>

class MorseCode : public QObject
{
    Q_OBJECT

private slots:
    void it_encodes_individual_characters_data();
    void it_encodes_individual_characters();
};

void MorseCode::it_encodes_individual_characters_data()
{
    QTest::addColumn<QString>("input");
    QTest::addColumn<QString>("expected");
    QTest::newRow("A") << "a" << ".-";
    QTest::newRow("B") << "b" << "-...";
    QTest::newRow("C") << "c" << "-.-.";
    QTest::newRow("D") << "d" << "-..";
    QTest::newRow("E") << "e" << ".";
    QTest::newRow("F") << "f" << "..-.";
    QTest::newRow("G") << "g" << "--.";
    QTest::newRow("H") << "h" << "....";
    QTest::newRow("I") << "i" << "..";
    QTest::newRow("J") << "j" << ".---";
    QTest::newRow("K") << "k" << "-.-";
    QTest::newRow("L") << "l" << ".-..";
    QTest::newRow("M") << "m" << "--";
    QTest::newRow("N") << "n" << "-.";
    QTest::newRow("O") << "o" << "---";
    QTest::newRow("P") << "p" << ".--.";
    QTest::newRow("Q") << "q" << "--.-";
    QTest::newRow("R") << "r" << ".-.";
    QTest::newRow("S") << "s" << "...";
    QTest::newRow("T") << "t" << "-";
    QTest::newRow("U") << "u" << "..-";
    QTest::newRow("V") << "v" << "...-";
    QTest::newRow("W") << "w" << ".--";
    QTest::newRow("X") << "x" << "-..-";
    QTest::newRow("Y") << "y" << "-.--";
    QTest::newRow("Z") << "z" << "--..";
}

void MorseCode::it_encodes_individual_characters()
{
    QFETCH(QString, input);
    QFETCH(QString, expected);

    QCOMPARE(morseEncode(input), expected);
}

QTEST_APPLESS_MAIN(MorseCode)

#include "tst_morsecode.moc"
