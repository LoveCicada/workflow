
#pragma once

#include "work/CXWorkInterface.h"
#include <list>

class IWorkerFlow;
typedef std::list<IWorkerFlow*> IWorkerFlowList;

/**
 * @brief workflow abstract interface
 * 
 */
class IWorkerFlow
{
public:
    virtual ~IWorkerFlow() {}
    virtual bool Handle();
public:
    
    //! porcess flow interface
    virtual bool Begin() = 0;
    virtual bool Middle() = 0;
    virtual bool End() = 0;

public:
    bool AddWork(IWorker*& pWork);
    bool DelWork(IWorker*& pWork);

protected:

    //! storage workflow node
    IWorkerList m_pWorkList;
};

