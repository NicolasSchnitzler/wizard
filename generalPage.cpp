#include "generalPage.h"
#include "ui_generalPage.h"

GeneralPage::GeneralPage(QWidget *parent) :
    QWizardPage(parent),
    ui(new Ui::GeneralPage)
{
    ui->setupUi(this);

    registerField("general.namespace",ui->m_namespace);
    registerField("general.layer",ui->m_layer);
    registerField("general.name*",ui->m_name);
    registerField("general.prefix*",ui->m_prefix);
    registerField("general.abstraction",ui->m_abstraction);
}

void GeneralPage::getGenerator(QString generator)
{
    if(generator=="node")
    {

    }
    else if(generator=="abstraction")
    {
        ui->m_abstraction->hide();
    }
    else if (generator=="plugin")
    {

    }
}


GeneralPage::~GeneralPage()
{
    delete ui;
}
