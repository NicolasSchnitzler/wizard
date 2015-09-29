#include "generalPage.h"
#include "ui_generalPage.h"

GeneralPage::GeneralPage(QWidget *parent) :
    QWizardPage(parent),
    ui(new Ui::GeneralPage)
{
    ui->setupUi(this);

    registerField("general.namespace",  ui->m_namespace);
    registerField("general.layer",      ui->m_layer);
    registerField("general.name*",      ui->m_name);
    registerField("general.prefix*",    ui->m_prefix);
    registerField("general.abstraction",ui->m_abstraction);
}

void GeneralPage::getGenerator(QString generator)
{
    if(generator=="node")
    {
        ui->m_abstraction->show();
        ui->m_namespace->show();
        ui->m_namespaceLabel->show();
        ui->m_abstractionLabel->show();
    }
    else if(generator=="abstraction")
    {
        ui->m_abstraction->hide();
        ui->m_namespace->hide();
        ui->m_namespaceLabel->hide();
        ui->m_abstractionLabel->hide();

    }
    else if (generator=="plugin")
    {
        ui->m_abstraction->show();
        ui->m_namespace->show();
        ui->m_namespaceLabel->show();
        ui->m_abstractionLabel->show();
    }
}


GeneralPage::~GeneralPage()
{
    delete ui;
}
