
#pragma once

#include <list>

class IWorker;
typedef std::list<IWorker*> IWorkerList;


/**
 * @brief work abstract interface
 * 
 */
class IWorker
{
public:
    virtual ~IWorker() {}
    virtual bool Handle() = 0;
public:

};

