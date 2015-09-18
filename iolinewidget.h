#ifndef IOLINEWIDGET_H
#define IOLINEWIDGET_H

#include <QWidget>

namespace Ui {
class IoLineWidget;
}

class IoLineWidget : public QWidget
{
    Q_OBJECT

public:
    explicit IoLineWidget(int id,QWidget *parent = 0);

    QString type();
    QString name();

    ~IoLineWidget();

public slots:
    void onClicked();

signals:
    void removeRequest(int);

private:
    Ui::IoLineWidget *ui;
    int m_id;
};

#endif // IOLINEWIDGET_H
