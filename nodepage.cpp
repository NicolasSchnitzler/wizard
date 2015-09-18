#include "nodepage.h"
#include "ui_nodepage.h"

NodePage::NodePage(QWidget *parent) :
    QWizardPage(parent),
    ui(new Ui::NodePage)
{
    ui->setupUi(this);
}

NodePage::~NodePage()
{
    delete ui;
}
