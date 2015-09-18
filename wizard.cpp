#include "wizard.h"


Wizard::Wizard(QWidget *parent) :    QWizard(parent)
{
    IntroPage *p=new IntroPage;
    connect(p,SIGNAL(generatorSet(QString)),this,SLOT(getGenerator(QString)));
    setPage(INTRO_PAGE, p);

    GeneralPage* g=new GeneralPage;
    setPage(GENERAL_PAGE, g);
    connect(g,SIGNAL(generatorSet(QString)),this,SLOT(getGenerator(QString)));

    m_inOutPage=new InOutPage;
    setPage(INOUTPAGE, m_inOutPage);

    setStartId(INTRO_PAGE);
}

void Wizard::getGenerator(QString generator)
{
    m_generator=generator;
}

void Wizard::accept()
{
    QString   name=field(  "general.name").toString();
    QString prefix=field("general.prefix").toString();
    QString  layer=field( "general.layer").toString();
    QString  abstraction=field( "general.abstraction").toString();


    QMap<QString,QString> values;
    if(m_generator=="node")
        values.insert("${CLASS_NAME}",prefix+name);
    else if(m_generator=="abstraction")
        values.insert("${CLASS_NAME}",prefix+"Abstract"+name);
    else if(m_generator=="plugin")
        values.insert("${CLASS_NAME}",prefix+name);


    values.insert("${LAYER_NAME}",prefix+layer);
    values.insert("${ABSTRACTION}",abstraction);


    values.insert("${ABS_INPUTS_TEXT}" , m_inOutPage->inputBlock ("abstractionInput" ));
    values.insert("${ABS_OUTPUTS_TEXT}", m_inOutPage->outputBlock("abstractionOutput"));

    values.insert("${NODE_CTR_INPUT_TEXT}"     , m_inOutPage->inputBlock ("nodeCtrInput"     ));
    values.insert("${NODE_CTR_OUTPUT_TEXT}"    , m_inOutPage->outputBlock("nodeCtrOutput"    ));
    values.insert("${NODE_PRIVATE_INPUT_TEXT}" , m_inOutPage->inputBlock ("nodePrivateInput" ));
    values.insert("${NODE_PRIVATE_OUTPUT_TEXT}", m_inOutPage->inputBlock ("nodePrivateOutput"));

    qDebug()<<m_generator;

    generate(m_generator,values);
    QWizard::accept();

}

Wizard::~Wizard()
{

}
