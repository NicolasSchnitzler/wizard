#include "inOutPage.h"
#include "ui_inOutPage.h"

InOutPage::InOutPage(QWidget *parent) :
    QWizardPage(parent),
    ui(new Ui::InOutPage)
{
    ui->setupUi(this);
    connect(ui->m_addInput,SIGNAL(clicked(bool)),ui->m_inputWidget,SLOT(add()));
    connect(ui->m_addOutput,SIGNAL(clicked(bool)),ui->m_outputWidget,SLOT(add()));
}

QString InOutPage::inputBlock(QString key)
{
    return generateIoBlocks(ui->m_inputWidget->table(),key);
}

QString InOutPage::outputBlock(QString key)
{
    return generateIoBlocks(ui->m_outputWidget->table(),key);
}

InOutPage::~InOutPage()
{
    delete ui;
}
