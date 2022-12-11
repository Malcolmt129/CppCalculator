
class Command{
    public:
    virtual double execute() = 0;
    virtual void undo() = 0;
    virtual void printRes() = 0; 
};



