#include <iostream>
#include <fstream>
#include <cctype>
#include "writeSys.h"
#include "EFI.h"
#include "important.h"
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
		if(EFIactive == 1) {
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
	}
	return 0;
}
