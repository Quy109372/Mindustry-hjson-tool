#include <iostream>
#include <vector>
#include <string>
#include "weaponSystem.h"

int WeaponSetup() {
	std::vector<std::string> weaponType = {"basicBulletType","laserBulletType","lightingBulletType", "missileBulletType"};
	std::cout << "choose your bullet type: (1.basic, 2.laser, 3.lighting, 4.missile";
	for(int i = 0; i < weaponType.size(); i++) {
		std::cout << weaponType[i] << " ";
	}
	std::cin >> chWeapon;
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
