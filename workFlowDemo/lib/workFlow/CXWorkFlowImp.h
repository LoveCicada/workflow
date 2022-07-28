
#pragma once

#include "CXWorkFlowInterface.h"

class CXWorkFlowImp : public IWorkerFlow
{
public:

public:
    //! process flow
    virtual bool Begin() override;
    virtual bool Middle() override;
    virtual bool End() override;

protected:
    
};