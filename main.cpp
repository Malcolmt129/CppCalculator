#include "./src/addition.cpp"
#include "command.h"

int main() {

    AdditionCommand cmd(3.0,4.0);

    cmd.execute();
    cmd.printRes();

    return 0;
}