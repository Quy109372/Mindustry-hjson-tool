#include <iostream>
#include <fstream>
#include "lib/important.h"
#include "lib/writeSys.h"
#include "lib/EFI.h"
#include "lib/weaponSystem.h"

int main() {
    debug();
    std::cout << '\n';
    requestWeapon();

    if(request != 0) {
	weaponSetup();
    }

    accept();
    std::cin.clear();
    std::cin.ignore(10000, '\n');


    GetMain();
    write();

    return 0;
}
