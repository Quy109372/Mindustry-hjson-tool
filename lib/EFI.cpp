#include <iostream>
#include "EFI.h"

int accept() {
	std::cout << "input code 1/0 (as true/false) to active EFI (extend for important variables)";
	std::cin >> EFIactive;
	std::cout << EFIactive;
	if(EFIactive !=0) {
		std::cout << "EXTEND FOR IMPORTANT VARIABLES ACTIVE AS CODE 1" << '\n';
	} else {
		std::cout << "EXTEND FOR IMPORTANT VARIABLES DEACTIVE AS CODE 0" << '\n';
	}

	return 0;
}
