#include "encoders.h"

#include "encoders/noencode.h"
#include "encoders/morsecode.h"

Encoders::Encoders()
{
    _encoders.insert("No Encode", std::make_shared<NoEncode>());
    _encoders.insert("Morse Code", std::make_shared<MorseCode>(" "));
}

QString Encoders::encodeInput(const QString &text, const QString& encoding)
{
    return _encoders[encoding]->encode(text);

}

QList<QString> Encoders::availableEncodings()
{
    return _encoders.keys();
}
