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
    connect(ui->encodingOptionsComboBox, QOverload<int>::of(&QComboBox::currentIndexChanged), this, &TextEncodeWidget::encodeText);
}

TextEncodeWidget::~TextEncodeWidget()
{
    delete ui;
}

void TextEncodeWidget::encodeText()
{
    setOutput(_encoder.encodeInput(getInput(), getEncoding()));
}

QString TextEncodeWidget::getInput()
{
    return ui->inputText->toPlainText();
}

void TextEncodeWidget::setOutput(const QString &text)
{
    ui->outputText->setText(text);
}

QString TextEncodeWidget::getEncoding()
{
    return ui->encodingOptionsComboBox->currentData().toString();
}
