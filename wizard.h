#ifndef WIDGET_H
#define WIDGET_H

#include <QWizard>
#include <QVariant>
#include <QDebug>

#include "introPage.h"
#include "generalPage.h"
#include "inOutPage.h"
#include "generator.h"

class Wizard : public QWizard
{
    Q_OBJECT

public:
    explicit Wizard(QWidget *parent = 0);

public slots:
    void getGenerator(QString);

public:
    enum {INTRO_PAGE=0, GENERAL_PAGE=1, INOUTPAGE=2};

    void accept() Q_DECL_OVERRIDE;

    ~Wizard();

private:
    QString m_generator;
    InOutPage* m_inOutPage;


};

#endif // WIDGET_H
