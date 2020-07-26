#ifndef MORSEENCODER_H
#define MORSEENCODER_H

#include "iencoder.h"

class MorseCode : public IEncoder
{
public:
    MorseCode(const QString& separator);

    QString encode(const QString &text) override;

private:
    QString _separator;
};

#endif // MORSEENCODER_H
