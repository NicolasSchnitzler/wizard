#ifndef IOWIDGET_H
#define IOWIDGET_H

#include "QVBoxLayout"
#include <QMap>
#include "iolinewidget.h"



class IOWidget : public QWidget
{
    Q_OBJECT

public:
    IOWidget(QWidget* parent);
    QMap<QString,QString> table();

public slots:
    void add();
    void remove(int);

private:
    QMap<int,IoLineWidget*> m_ioLineMap;
    QVBoxLayout* m_layout;
    int m_nextId;
};

#endif // IOWIDGET_H
