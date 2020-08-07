#include "morseencoder.h"

#include <QMap>
#include <QTextStream>

const QMap<QString, QString> morseCharacters =
    {
        {"a", ".-"},
        {"b", "-..."},
        {"c", "-.-."},
        {"d", "-.."},
        {"e", "."},
        {"f", "..-."},
        {"g", "--."},
        {"h", "...."},
        {"i", ".."},
        {"j", ".---"},
        {"k", "-.-"},
        {"l", ".-.."},
        {"m", "--"},
        {"n", "-."},
        {"o", "---"},
        {"p", ".--."},
        {"q", "--.-"},
        {"r", ".-."},
        {"s", "..."},
        {"t", "-"},
        {"u", "..-"},
        {"v", "...-"},
        {"w", ".--"},
        {"x", "-..-"},
        {"y", "-.--"},
        {"z", "--.."},
    };

QString morseEncode(const QString &text, const QString& separator)
{
    QString morseEncoded;
    QTextStream stream(&morseEncoded);

    for (const auto& character : text) {
        stream << morseCharacters[character] << separator;
    }
    return morseEncoded.trimmed();
}

QString morseDecode(const QString &text, const QString &separator)
{
    return text;
}
