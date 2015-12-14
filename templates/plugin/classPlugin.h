#pragma once

#include <dtkCore>
#include <${ABSTRACTION}.h>

class ${CLASS_NAME}Plugin: public ${ABSTRACTION}Plugin
{
    Q_OBJECT
    Q_INTERFACES(${ABSTRACTION}Plugin)
    Q_PLUGIN_METADATA(IID "fr.inria.${CLASS_NAME}Plugin" FILE "${CLASS_NAME}Plugin.json")

public:
     ${CLASS_NAME}Plugin(void) {}
    ~${CLASS_NAME}Plugin(void) {}

public:
    void initialize(void);
    void uninitialize(void);
};

