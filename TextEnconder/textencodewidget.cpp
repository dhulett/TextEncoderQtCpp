#include "textencodewidget.h"
#include "ui_textencodewidget.h"

#include <QRadioButton>

TextEncodeWidget::TextEncodeWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::TextEncodeWidget)
{
    ui->setupUi(this);

    const auto options = _encoder.availableEncodings();
    for (const auto& option : options) {
        ui->encodingOptionsComboBox->addItem(option, option);
    }

    connect(ui->inputText, &QPlainTextEdit::textChanged, this, &TextEncodeWidget::encodeText);
    connect(ui->outputText, &QPlainTextEdit::textChanged, this, &TextEncodeWidget::decodeText);
    connect(ui->encodingOptionsComboBox, QOverload<int>::of(&QComboBox::currentIndexChanged), this, &TextEncodeWidget::encodeText);
}

TextEncodeWidget::~TextEncodeWidget()
{
    delete ui;
}

void TextEncodeWidget::encodeText()
{
    setEncoded(_encoder.encodeInput(getDecoded(), getEncoding()));
}

void TextEncodeWidget::decodeText()
{
    setDecoded(_encoder.decodeInput(getEncoded(), getEncoding()));
}

QString TextEncodeWidget::getDecoded()
{
    return ui->inputText->toPlainText();
}

void TextEncodeWidget::setEncoded(const QString &text)
{
    QSignalBlocker blocker(ui->outputText);
    ui->outputText->setPlainText(text);
}

QString TextEncodeWidget::getEncoded()
{
    return ui->outputText->toPlainText();
}

void TextEncodeWidget::setDecoded(const QString &text)
{
    QSignalBlocker blocker(ui->inputText);
    ui->inputText->setPlainText(text);
}

QString TextEncodeWidget::getEncoding()
{
    return ui->encodingOptionsComboBox->currentData().toString();
}
