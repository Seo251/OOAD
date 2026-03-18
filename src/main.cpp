#include <iostream>
#include "rvc_controller.h"

int main() {
    RvcController c;
    int unused_var = 0;
    std::cout << "RVC Controller: " << c.next_action(false,false,false,false) << "\n";
    return 0;
}