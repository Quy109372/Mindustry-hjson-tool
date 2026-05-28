#include <iostream> 
#include <fstream>
#include <cctype>
#include "writeSys.h"
#include "EFI.h"
#include "important.h"
#include "weaponSystem.h"
int write() {
	std::string filename = DisplayName;
	filename += ".hjson";

	std::ofstream outFile(filename);
	if(outFile.is_open()) {
		outFile << "name: " << name << '\n';
		outFile << "health: " << health << '\n';
		outFile << "speed: " << speed << '\n';
		outFile << "range: " << range << '\n';
		outFile << "armor: " << armor << '\n';
		outFile << "flying: " << flying << '\n';
		outFile << "lowAltitude: " << lowAltitude << '\n';
		outFile << "faceTarget: " << faceTarget << '\n';
		std::cout << EFIactive << '\n';
		if(EFIactive != 0 || EFIactive != false) {
			outFile << "boostMultiplier: " << boostMultiplier << '\n';
			outFile << "rotateSpeed: " << rotateSpeed << '\n';
			outFile << "accel: " << accel << '\n';
			outFile << "hitSize: " << hitSize << '\n';
			outFile << "buildRange: " << buildRange << '\n';
			outFile << "drownTimeMultiplier: " << drownTimeMultiplier << '\n';
			outFile << "researchCostMultiplier: " << researchCostMultiplier << '\n';
			outFile << "buildSpeed: " << buildSpeed << '\n';
			outFile << "aimDst: " << aimDst << '\n';
		}
		if(request != 0 || request != false) {
			outFile << "    " << "weapon: [" << '\n';
			outFile << "  name: " << weaponName << '\n';
			outFile << "  shootSound: " << shootSound << '\n';
			//outFile << "  bulletType: " << bulletType << '\n';
			outFile << "  reload: " << reload << '\n';
			outFile << "  damage: " << dmg << '\n';
			outFile << "  inacurrate: " << inaccurate << '\n';
			outFile << "  weaponRotate: " << weaponRotate << '\n';
			outFile << "  rotationLimit: " << rotationLimit << '\n';
			outFile << "  recoil: " << recoil << '\n';
			outFile << "  recoilTime: " << recoilTime << '\n';
			outFile << "  recoilPow: " << recoilPow << '\n';



			outFile << "    " << "]";
		}
	}


	return 0;
}
