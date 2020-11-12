#ifndef _PARAMETERS_H
#define _PARAMETERS_H

#include <string>

enum ActionType {
    AppInit,
    InitWorkspace,
    AddTool,
    AddWorkspaceTemplate,
    OpenWorkspace
};


class Parameters {
    public:
        virtual std::string getParameter(std::string parameterName) = 0;
};

class ActionParameters : Parameters
{
public:
    virtual ActionType getType() = 0; 

};

class InitialParameters : Parameters 
{
    private:
        std::string __getParameter(std::string parameterName);
    public: 
        std::string getParameter(std::string parameterName) override {
            return __getParameter(parameterName);
        }
};

#endif
