#include "introPage.h"
#include "ui_introPage.h"

IntroPage::IntroPage(QWidget *parent) :
    QWizardPage(parent),
    ui(new Ui::IntroPage)
{
    ui->setupUi(this);

    registerField("intro.abstraction",ui->m_abstraction);
    registerField("intro.plugin"     ,ui->m_plugin     );
    registerField("intro.node"       ,ui->m_node       );

}

bool IntroPage::validatePage()
{
    QString generator;
    if(ui->m_abstraction->isChecked())
        generator="abstraction";
    if(ui->m_plugin->isChecked())
        generator="plugin";
    if(ui->m_node->isChecked())
        generator="node";
    emit generatorSet(generator);
    return QWizardPage::validatePage();
}

IntroPage::~IntroPage()
{
    delete ui;
}
