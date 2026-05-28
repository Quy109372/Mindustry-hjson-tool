#include <iostream>
#include <vector>
#include <string>
#include "weaponSystem.h"

int WeaponSetup() {
	std::vector<std::string> weaponType = {"basicBulletType","laserBulletType","lightingBulletType", "missileBulletType"};
	for(int i = 0; i < weaponType.size(); i++) {
		std::cout << weaponType[i] << '\n';
	}

	return 0;
}
