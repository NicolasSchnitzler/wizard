#include "abstractionendpage.h"
#include "ui_abstractionendpage.h"

AbstractionEndPage::AbstractionEndPage(QWidget *parent) :
    QWizardPage(parent),
    ui(new Ui::AbstractionEndPage)
{
    ui->setupUi(this);
}

AbstractionEndPage::~AbstractionEndPage()
{
    delete ui;
}
