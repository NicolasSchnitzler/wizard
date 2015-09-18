#include "iolinewidget.h"
#include "ui_iolinewidget.h"

IoLineWidget::IoLineWidget(int id, QWidget *parent) :
    QWidget(parent),
    ui(new Ui::IoLineWidget)
{
    ui->setupUi(this);
    connect(ui->m_remove,SIGNAL(clicked(bool)),this,SLOT(onClicked()));
    this->m_id=id;
    setMinimumHeight(20);
}

QString IoLineWidget::type()
{
    return ui->m_type->text();
}

QString IoLineWidget::name()
{
    return ui->m_name->text();
}


void IoLineWidget::onClicked()
{
    emit removeRequest(m_id);
}

IoLineWidget::~IoLineWidget()
{
    delete ui;
}
