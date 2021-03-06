// Copyright: INRIA

#include <dtkComposer>

#include "${CLASS_NAME}.h"

class ${CLASS_NAME}Private
{
public:
    ${NODE_PRIVATE_INPUT_TEXT}
    ${NODE_PRIVATE_OUTPUT_TEXT}
};

${CLASS_NAME}::${CLASS_NAME}(void) : dtkComposerNodeObject<${ABSTRACTION}>(), d(new ${CLASS_NAME}Private())
{
    this->setFactory(${LAYER_NAME}::${NAMESPACE}::pluginFactory());

${NODE_CTR_INPUT_TEXT}
    
${NODE_CTR_OUTPUT_TEXT}

}

${CLASS_NAME}::~${CLASS_NAME}Node(void)
{
    delete d;
}

void ${CLASS_NAME}::run(void)
{
    
}

