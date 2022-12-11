#include "../command.h";
#include <iostream>;

using namespace std;

class AdditionCommand : public Command {

    private:
        double f_operand1;
        double f_operand2;
        double result;

    public:
        AdditionCommand(double operand1, double operand2): f_operand1(operand1), f_operand2(operand2) {}

        double execute() {
            result = f_operand1 + f_operand2;
        }


        void printRes() {
            cout << result << "\n";
        }
};