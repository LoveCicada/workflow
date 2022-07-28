
#include "CXWorkFlowInterface.h"

bool IWorkerFlow::Handle()
{
    bool bRet = true;
    bRet = Begin();
    if(!bRet)
    {
        //! todo: ***
    }
    bRet = Middle();
    if(!bRet)
    {
        //! todo: ***
    }
    bRet = End();
    if(!bRet)
    {
        //! todo: ***
    }
    return bRet;
}

bool IWorkerFlow::AddWork(IWorker*& pWork)
{
    bool bRet = true;
    //m_pWorkList.push_back(pWork);
    static_cast<IWorker*&>(pWork);
    return bRet;
}

bool IWorkerFlow::DelWork(IWorker*& pWork)
{
    bool bRet = true;
    static_cast<IWorker*&>(pWork);   

    return bRet;
}

