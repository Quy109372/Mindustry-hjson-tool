#include <iostream>
#include <fstream>
#include "lib/important.h"
#include "lib/writeSys.h"
#include "lib/EFI.h"


int main() {
    debug();
    std::cout << '\n';

    accept();

    std::cin.clear();
    std::cin.ignore(10000, '\n');

    GetMain();

    write();

    return 0;
}
