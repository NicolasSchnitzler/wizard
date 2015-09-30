#ifndef INTROPAGE_H
#define INTROPAGE_H

#include <QWizardPage>
#include <QFileDialog>

namespace Ui {
class IntroPage;
}

class IntroPage : public QWizardPage
{
    Q_OBJECT

public:
    explicit IntroPage(QWidget *parent = 0);
    ~IntroPage();

public slots:
    void browse();

signals:
    void generatorSet(QString);

public:
    virtual bool validatePage();

private:
    Ui::IntroPage *ui;
};

#endif // INTROPAGE_H
