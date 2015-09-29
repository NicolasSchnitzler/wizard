#include "${CLASS_NAME}.h"
#include "${CLASS_NAME}Plugin.h"

#include <dtkCore>
#include "${LAYER_NAME}.h"

// ///////////////////////////////////////////////////////////////////
// ${CLASS_NAME}Plugin
// ///////////////////////////////////////////////////////////////////

void ${CLASS_NAME}Plugin::initialize(void)
{
    qDebug()<<"loading filter plugin";
    ${LAYER_NAME}::${NAMESPACE}::pluginFactory().record("${CLASS_NAME}", ${CLASS_NAME}Creator);
}

void ${CLASS_NAME}Plugin::uninitialize(void)
{

}

// ///////////////////////////////////////////////////////////////////
// Plugin meta data
// ///////////////////////////////////////////////////////////////////

DTK_DEFINE_PLUGIN(${CLASS_NAME})

