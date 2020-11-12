#ifndef _INVOKER_H
#define _INVOKER_H

#include "action_parameters.hpp"

class Invoker
{
public:
    virtual void invokeAction(ActionParameters parameters) = 0;
};

#endif