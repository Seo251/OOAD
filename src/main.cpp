#include <iostream>
#include "rvc_controller.h"

int main() {
    RvcController c;
    std::cout << "RVC Controller: " << c.next_action(false,false,false,false) << "\n";
    return 0;
}