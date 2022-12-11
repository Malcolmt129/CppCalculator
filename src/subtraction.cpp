#include "../command.h"
#include <iostream>

using namespace std;

class SubtractionCommand : public Command {

    private:
        double f_operand1;
        double f_operand2;
        double result;

    public:
        SubtractionCommand(double operand1, double operand2): f_operand1(operand1), f_operand2(operand2) {}

        double execute() {
            result = f_operand1 - f_operand2;
            return result;
        }

        double undo() {
            result -= result;
            return result;
        }

        void printRes() {
            cout << result << "\n";
        }
};