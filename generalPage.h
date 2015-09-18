#ifndef GENERALPAGE_H
#define GENERALPAGE_H

#include <QWizardPage>

namespace Ui {
class GeneralPage;
}

class GeneralPage : public QWizardPage
{
    Q_OBJECT

public:
    explicit GeneralPage(QWidget *parent = 0);
    ~GeneralPage();

private:
    Ui::GeneralPage *ui;
};

#endif // GENERALPAGE_H
