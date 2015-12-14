#ifndef ABSTRACTIONENDPAGE_H
#define ABSTRACTIONENDPAGE_H

#include <QWizardPage>

namespace Ui {
class AbstractionEndPage;
}

class AbstractionEndPage : public QWizardPage
{
    Q_OBJECT

public:
    explicit AbstractionEndPage(QWidget *parent = 0);
    ~AbstractionEndPage();

private:
    Ui::AbstractionEndPage *ui;
};

#endif // ABSTRACTIONENDPAGE_H
