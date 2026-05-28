#include <iostream>
#include "EFI.h"

int accept() {
	std::cout << "input code 1/0 (as true/false) to active EFI (extend for important variables)" << '\n';
	std::cin >> EFIactive;
	std::cout << "debug code output as: " << EFIactive << '\n';
	if(EFIactive !=0) {
		std::cout << "extend for important variables activate" << '\n';
	} else {
		std::cout << "extend for important variables inactivate" << '\n';
	}

	return 0;
}
