#pragma once

#include <dtkCore>

#include <QObject>
#include <QRunnable>


// ///////////////////////////////////////////////////////////////////
// ${CLASS_NAME} process interface
// ///////////////////////////////////////////////////////////////////

class ${_LAYER_NAME}_EXPORT ${CLASS_NAME} : public QObject, public QRunnable
{
    Q_OBJECT

public:
             ${CLASS_NAME}(QObject *parent = NULL) : QObject(parent), QRunnable() {}
    virtual ~${CLASS_NAME}(void) {}
    
public:
${ABS_INPUTS_TEXT}

public:
${ABS_OUTPUTS_TEXT}

};

// ///////////////////////////////////////////////////////////////////
// 
// ///////////////////////////////////////////////////////////////////
DTK_DECLARE_OBJECT        (${CLASS_NAME}*)
DTK_DECLARE_PLUGIN        (${CLASS_NAME}, ${_LAYER_NAME}_EXPORT)
DTK_DECLARE_PLUGIN_FACTORY(${CLASS_NAME}, ${_LAYER_NAME}_EXPORT)
DTK_DECLARE_PLUGIN_MANAGER(${CLASS_NAME}, ${_LAYER_NAME}_EXPORT)

