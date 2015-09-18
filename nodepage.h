#ifndef NODEPAGE_H
#define NODEPAGE_H

#include <QWizardPage>

namespace Ui {
class NodePage;
}

class NodePage : public QWizardPage
{
    Q_OBJECT

public:
    explicit NodePage(QWidget *parent = 0);
    ~NodePage();

private:
    Ui::NodePage *ui;
};

#endif // NODEPAGE_H
