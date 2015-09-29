#pragma once

#include <dtkCore>
#include <medCore.h>

#include <${ABSTRACTION}.h>


class ${CLASS_NAME} : public ${ABSTRACTION}
{
    Q_OBJECT

public:
     ${CLASS_NAME}(void);
    ~${CLASS_NAME}(void);



public:
    ${PLUGIN_INPUT_H}
public: 
    ${PLUGIN_OUTPUT_H}
public:
    void run();

private:
    ${PLUGIN_INPUT_MEMBERS_H}
    ${PLUGIN_OUTPUT_MEMBERS_H}
};


inline ${ABSTRACTION} *${CLASS_NAME}Creator(void)
{
    return new ${CLASS_NAME}();
}
