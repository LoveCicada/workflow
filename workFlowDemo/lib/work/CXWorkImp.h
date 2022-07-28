
#pragma once

#include "CXWorkInterface.h"

class CXWorkImp : public IWorker
{
public:
    bool Handle() override;
};