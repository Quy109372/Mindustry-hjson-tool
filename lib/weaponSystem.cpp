#include <iostream>
#include <vector>
#include <string>
#include "weaponSystem.h"

int weaponSetup() {
	//std::vector<std::string> weaponType = {"basicBulletType","basicBulletType","laserBulletType","lightningBulletType", "missileBulletType"};
	std::cout << "choose your bullet type: (1.basic, 2.laser, 3.lightning, 4.missile)" << '\n';
	for(int i = 1; i < weaponType.size(); i++) {
		std::cout << weaponType[i] << '\n';
	}
	std::cin >> chsAr;
	std::cout << weaponType[chsAr] << '\n';
	return 0;
}
int requestWeapon() {
	if(request !=0) {
		std::cout << "weapon request: true" << '\n';
	} else {
		std::cout << "weapon request: false" << '\n';
	}

	return 0;
}
