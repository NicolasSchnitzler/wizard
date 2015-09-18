#include "iowidget.h"

IOWidget::IOWidget(QWidget *parent): QWidget(parent)
{
 m_layout=new QVBoxLayout();
 this->setLayout(m_layout);
 m_nextId=0;
}

void IOWidget::add()
{
   IoLineWidget* w= new IoLineWidget(m_nextId);
   m_ioLineMap.insert(m_nextId,w);
   m_layout->addWidget(w);
   connect(w,SIGNAL(removeRequest(int)),this,SLOT(remove(int)));
   m_nextId++;
}

QMap<QString,QString> IOWidget::table()
{
    QMap<QString,QString> pairs;
    for(IoLineWidget* w: m_ioLineMap.values())
    {
        pairs[w->type()]=w->name();
    }
    return pairs;
}

void IOWidget::remove(int id)
{
    IoLineWidget* w= m_ioLineMap[id];
    w->hide();
    m_layout->removeWidget(w);
    m_ioLineMap.remove(id);
}
