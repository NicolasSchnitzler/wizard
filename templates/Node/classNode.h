// Copyright: INRIA

#pragma once

#include <dtkComposer>
#include "${ABSTRACTION}.h"

class ${CLASS_NAME}Private;

// ///////////////////////////////////////////////////////////////////
// ${CLASS_NAME}
// ///////////////////////////////////////////////////////////////////

class ${CLASS_NAME} : public dtkComposerNodeObject<${ABSTRACTION}>
{
public:
     ${CLASS_NAME}(void);
    ~${CLASS_NAME}(void);

public:
    void run(void);

private:
    ${CLASS_NAME}Private *d;
};

//
// medBaseWriterNode.h ends here

