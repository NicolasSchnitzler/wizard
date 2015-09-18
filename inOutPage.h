#ifndef INOUTPAGE_H
#define INOUTPAGE_H

#include <QWizardPage>
#include "generator.h"

namespace Ui {
class InOutPage;
}

class InOutPage : public QWizardPage
{
    Q_OBJECT

public:
    explicit InOutPage(QWidget *parent = 0);
    QString inputBlock(QString key);
    QString outputBlock(QString key);
    ~InOutPage();

private:
    Ui::InOutPage *ui;
};

#endif // INOUTPAGE_H
