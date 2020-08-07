#ifndef IENCODER_H
#define IENCODER_H

#include <QString>

class IEncoder
{
public:
    virtual ~IEncoder() = default;
    virtual QString encode(const QString& text) = 0;
    virtual QString decode(const QString& text) = 0;
};

#endif // IENCODER_H
