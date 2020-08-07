#include <QtTest>

#include <morseencoder.h>

class MorseCode : public QObject
{
    Q_OBJECT

private slots:
    void it_encodes_individual_characters_data();
    void it_encodes_individual_characters();
    void it_decodes_individual_characters_data();
    void it_decodes_individual_characters();
    void encode_roundtrip_test_data();
    void encode_roundtrip_test();
    void decode_roundtrip_test_data();
    void decode_roundtrip_test();
};

void MorseCode::it_encodes_individual_characters_data()
{
    QTest::addColumn<QString>("input");
    QTest::addColumn<QString>("expected");
    QTest::newRow("a") << "a" << ".-";
    QTest::newRow("b") << "b" << "-...";
    QTest::newRow("c") << "c" << "-.-.";
    QTest::newRow("d") << "d" << "-..";
    QTest::newRow("e") << "e" << ".";
    QTest::newRow("f") << "f" << "..-.";
    QTest::newRow("g") << "g" << "--.";
    QTest::newRow("h") << "h" << "....";
    QTest::newRow("i") << "i" << "..";
    QTest::newRow("j") << "j" << ".---";
    QTest::newRow("k") << "k" << "-.-";
    QTest::newRow("l") << "l" << ".-..";
    QTest::newRow("m") << "m" << "--";
    QTest::newRow("n") << "n" << "-.";
    QTest::newRow("o") << "o" << "---";
    QTest::newRow("p") << "p" << ".--.";
    QTest::newRow("q") << "q" << "--.-";
    QTest::newRow("r") << "r" << ".-.";
    QTest::newRow("s") << "s" << "...";
    QTest::newRow("t") << "t" << "-";
    QTest::newRow("u") << "u" << "..-";
    QTest::newRow("v") << "v" << "...-";
    QTest::newRow("w") << "w" << ".--";
    QTest::newRow("x") << "x" << "-..-";
    QTest::newRow("y") << "y" << "-.--";
    QTest::newRow("z") << "z" << "--..";
    QTest::newRow("A") << "A" << ".-";
    QTest::newRow("B") << "B" << "-...";
    QTest::newRow("C") << "C" << "-.-.";
    QTest::newRow("D") << "D" << "-..";
    QTest::newRow("E") << "E" << ".";
    QTest::newRow("F") << "F" << "..-.";
    QTest::newRow("G") << "G" << "--.";
    QTest::newRow("H") << "H" << "....";
    QTest::newRow("I") << "I" << "..";
    QTest::newRow("J") << "J" << ".---";
    QTest::newRow("K") << "K" << "-.-";
    QTest::newRow("L") << "L" << ".-..";
    QTest::newRow("M") << "M" << "--";
    QTest::newRow("N") << "N" << "-.";
    QTest::newRow("O") << "O" << "---";
    QTest::newRow("P") << "P" << ".--.";
    QTest::newRow("Q") << "Q" << "--.-";
    QTest::newRow("R") << "R" << ".-.";
    QTest::newRow("S") << "S" << "...";
    QTest::newRow("T") << "T" << "-";
    QTest::newRow("U") << "U" << "..-";
    QTest::newRow("V") << "V" << "...-";
    QTest::newRow("W") << "W" << ".--";
    QTest::newRow("X") << "X" << "-..-";
    QTest::newRow("Y") << "Y" << "-.--";
    QTest::newRow("Z") << "Z" << "--..";
}

void MorseCode::it_encodes_individual_characters()
{
    QFETCH(QString, input);
    QFETCH(QString, expected);

    QCOMPARE(morseEncode(input, " "), expected);
}

void MorseCode::it_decodes_individual_characters_data()
{
    QTest::addColumn<QString>("input");
    QTest::addColumn<QString>("expected");
    QTest::newRow("a") << ".-" << "a";
    QTest::newRow("b") << "-..." << "b";
    QTest::newRow("c") << "-.-." << "c";
    QTest::newRow("d") << "-.." << "d";
    QTest::newRow("e") << "." << "e";
    QTest::newRow("f") << "..-." << "f";
    QTest::newRow("g") << "--." << "g";
    QTest::newRow("h") << "...." << "h";
    QTest::newRow("i") << ".." << "i";
    QTest::newRow("j") << ".---" << "j";
    QTest::newRow("k") << "-.-" << "k";
    QTest::newRow("l") << ".-.." << "l";
    QTest::newRow("m") << "--" << "m";
    QTest::newRow("n") << "-." << "n";
    QTest::newRow("o") << "---" << "o";
    QTest::newRow("p") << ".--." << "p";
    QTest::newRow("q") << "--.-" << "q";
    QTest::newRow("r") << ".-." << "r";
    QTest::newRow("s") << "..." << "s";
    QTest::newRow("t") << "-" << "t";
    QTest::newRow("u") << "..-" << "u";
    QTest::newRow("v") << "...-" << "v";
    QTest::newRow("w") << ".--" << "w";
    QTest::newRow("x") << "-..-" << "x";
    QTest::newRow("y") << "-.--" << "y";
    QTest::newRow("z") << "--.." << "z";
}

void MorseCode::it_decodes_individual_characters()
{
    QFETCH(QString, input);
    QFETCH(QString, expected);

    QCOMPARE(morseDecode(input, " "), expected);
}

void MorseCode::encode_roundtrip_test_data()
{
    QTest::addColumn<QString>("input");
    QTest::newRow("a") << "a";
    QTest::newRow("b") << "b";
    QTest::newRow("c") << "c";
    QTest::newRow("d") << "d";
    QTest::newRow("e") << "e";
    QTest::newRow("f") << "f";
    QTest::newRow("g") << "g";
    QTest::newRow("h") << "h";
    QTest::newRow("i") << "i";
    QTest::newRow("j") << "j";
    QTest::newRow("k") << "k";
    QTest::newRow("l") << "l";
    QTest::newRow("m") << "m";
    QTest::newRow("n") << "n";
    QTest::newRow("o") << "o";
    QTest::newRow("p") << "p";
    QTest::newRow("q") << "q";
    QTest::newRow("r") << "r";
    QTest::newRow("s") << "s";
    QTest::newRow("t") << "t";
    QTest::newRow("u") << "u";
    QTest::newRow("v") << "v";
    QTest::newRow("w") << "w";
    QTest::newRow("x") << "x";
    QTest::newRow("y") << "y";
    QTest::newRow("z") << "z";
}

void MorseCode::encode_roundtrip_test()
{
    QFETCH(QString, input);
    QCOMPARE(morseDecode(morseEncode(input, " "), " "), input);
}

void MorseCode::decode_roundtrip_test_data()
{
    QTest::addColumn<QString>("input");
    QTest::newRow("a") << ".-";
    QTest::newRow("b") << "-...";
    QTest::newRow("c") << "-.-.";
    QTest::newRow("d") << "-..";
    QTest::newRow("e") << ".";
    QTest::newRow("f") << "..-.";
    QTest::newRow("g") << "--.";
    QTest::newRow("h") << "....";
    QTest::newRow("i") << "..";
    QTest::newRow("j") << ".---";
    QTest::newRow("k") << "-.-";
    QTest::newRow("l") << ".-..";
    QTest::newRow("m") << "--";
    QTest::newRow("n") << "-.";
    QTest::newRow("o") << "---";
    QTest::newRow("p") << ".--.";
    QTest::newRow("q") << "--.-";
    QTest::newRow("r") << ".-.";
    QTest::newRow("s") << "...";
    QTest::newRow("t") << "-";
    QTest::newRow("u") << "..-";
    QTest::newRow("v") << "...-";
    QTest::newRow("w") << ".--";
    QTest::newRow("x") << "-..-";
    QTest::newRow("y") << "-.--";
    QTest::newRow("z") << "--..";
}

void MorseCode::decode_roundtrip_test()
{
    QFETCH(QString, input);
    QCOMPARE(morseEncode(morseDecode(input, " "), " "), input);
}

QTEST_APPLESS_MAIN(MorseCode)

#include "tst_morsecode.moc"
