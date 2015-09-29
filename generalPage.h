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

public slots:
    void getGenerator(QString generator);


private:
    Ui::GeneralPage *ui;
};

#endif // GENERALPAGE_H
