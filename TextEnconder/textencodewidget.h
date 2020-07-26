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

private slots:

private:
    QString getInput();
    void setOutput(const QString& text);
    QString getEncoding();

    Encoders _encoder;
    Ui::TextEncodeWidget *ui;
};

#endif // TEXTENCODEWIDGET_H
