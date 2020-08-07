#ifndef NOENCODE_H
#define NOENCODE_H

#include "iencoder.h"

class NoEncode : public IEncoder
{
public:
    QString encode(const QString &text) override;
    QString decode(const QString& text) override;
};

#endif // NOENCODE_H
