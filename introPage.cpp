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
    registerField("intro.path"       ,ui->m_path       );

    connect(ui->m_browse,SIGNAL(clicked(bool)),this,SLOT(browse()));
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

void IntroPage::browse()
{
    ui->m_path->setText(QFileDialog::getExistingDirectory(this,"Save"));
}

IntroPage::~IntroPage()
{
    delete ui;
}
