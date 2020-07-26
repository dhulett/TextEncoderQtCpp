#ifndef ENCODERS_H
#define ENCODERS_H

#include "iencoder.h"
#include <QHash>
#include <memory>

class Encoders
{
public:
    Encoders();

    QList<QString> availableEncodings();
    QString encodeInput(const QString& text, const QString &encoding);

private:
    QHash<QString, std::shared_ptr<IEncoder>> _encoders;
};

#endif // ENCODERS_H
