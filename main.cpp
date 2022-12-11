#include "./src/addition.cpp"

int main() {

    AdditionCommand cmd(3.0,4.0);

    cmd.execute();
    cmd.printRes();

    return 0;
}