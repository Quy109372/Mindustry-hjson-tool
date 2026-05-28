#include <iostream>
#include <string>
#include <cctype>
#include "important.h"
#include "EFI.h"
int tmp;
int GetMain() {
	std::cout << "name the hjson file: " << '\n';
	std::cin >> DisplayName;
	std::cout << "name the unit: ";
	std::cin >> name;
	//int part
	std::cout << "input health: " << '\n';
	std::cin >> health;
	std::cout << "input speed: " << '\n';
	std::cin >> speed;
	std::cout << "input armor: " << '\n';
	std::cin >> armor;
	std::cout << "input range: " << '\n';
	std::cin >> range;
	//bool part :○
	std::cout << "flying: <1/0> (that mean true/false)" << '\n';
	std::cin >> flying;
	std::cout << "low Altitude: <1/0> (that mean true/false)" << '\n';
	std::cin >> lowAltitude;
	std::cout << "face Target: <1/0> (that mean true/false)" << '\n';
	std::cin >> tmp;
	faceTarget = (tmp == 1);

	//EFI handle
	if(EFIactive != 0) {
		std::cout << "input hit size (EFI): " << '\n';
		std::cin >> hitSize;
		std::cout << "input rotate speed (EFI): " << '\n';
		std::cin >> rotateSpeed;
		std::cout << "input accel (EFI): " << '\n';
		std::cin >> accel;
		std::cout << "input build range (EFI): " << '\n';
		std::cin >> buildRange;
		std::cout << "input build speed (EFI): " << '\n';
		std::cin >> buildSpeed;
		std::cout << "input aim distance (EFI): " << '\n';
		std::cin >> aimDst;
		std::cout << "input boost multiplier (EFI): " << '\n';
		std::cin >> boostMultiplier;
		std::cout << "input drown time multiplier (EFI): " << '\n';
		std::cin >> drownTimeMultiplier;
		std::cout << "input research cost multiplier (EFI): " << '\n';
		std::cin >> researchCostMultiplier;
	}
	//exit if you input stupid shit into cin
	return 0; //wawa
}

void debug() {
	std::cout << "important.cpp loaded";
}

