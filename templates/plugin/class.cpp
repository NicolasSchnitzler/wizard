#include "${CLASS_NAME}.h"
#include <iostream>

// ///////////////////////////////////////////////////////////////////
//
// ///////////////////////////////////////////////////////////////////

${CLASS_NAME}::${CLASS_NAME}(void)
{

}

${CLASS_NAME}::~${CLASS_NAME}(void)
{

}

void ${CLASS_NAME}::setSigma(double sigma)
{
    process.setParameter(sigma,0);
}

void ${CLASS_NAME}::setData(medAbstractImageData* data)
{
    process.setInput(data);
}

medAbstractImageData* ${CLASS_NAME}::filteredImage(void) const
{
    return res;
}

void ${CLASS_NAME}::run(void)
{
    process.update();

    res=dynamic_cast<medAbstractImageData*>(process.output());
    std::cerr<<res;
}
