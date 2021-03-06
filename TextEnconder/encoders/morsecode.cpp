#include "morsecode.h"

#include <morseencoder.h>

MorseCode::MorseCode(const QString& separator)
    : _separator(separator)
{}

QString MorseCode::encode(const QString &text)
{
    return morseEncode(text, _separator);
}
