#ifndef TEXTENCODEWIDGET_H
#define TEXTENCODEWIDGET_H

#include <QWidget>

#include "encoders.h"

namespace Ui {
class TextEncodeWidget;
}

class TextEncodeWidget : public QWidget
{
    Q_OBJECT

public:
    explicit TextEncodeWidget(QWidget *parent = nullptr);
    ~TextEncodeWidget();

public slots:
    void encodeText();
    void decodeText();

private slots:

private:
    QString getDecoded();
    QString getEncoded();
    void setEncoded(const QString& text);
    void setDecoded(const QString& text);
    QString getEncoding();
    bool shouldConvert();

    Encoders _encoder;
    Ui::TextEncodeWidget *ui;
};

#endif // TEXTENCODEWIDGET_H
