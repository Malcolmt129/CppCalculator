#ifndef COMMAND_H
#define COMMAND_H
class Command{
    public:
    virtual double execute() = 0;
    virtual double undo() = 0;
    virtual void printRes() = 0; 
};


#endif


