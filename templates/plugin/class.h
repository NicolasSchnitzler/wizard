#pragma once

#include <dtkCore>
#include <medCore.h>

#include "legacy/itkFiltersGaussianProcess.h"

#include <medAbstractGaussianFilter.h>


class ${CLASS_NAME} : public medAbstractGaussianFilter
{
    Q_OBJECT

public:
     ${CLASS_NAME}(void);
    ~${CLASS_NAME}(void);



public:
    virtual void setSigma(double sigma);
    virtual void setData(medAbstractImageData* data);

public: 
    virtual medAbstractImageData* filteredImage(void) const;

public:
    void run();

private:
    itkFiltersGaussianProcess process;
    medAbstractImageData* res;

};


inline medAbstractGaussianFilter *${CLASS_NAME}Creator(void)
{
    return new ${CLASS_NAME}();
}
