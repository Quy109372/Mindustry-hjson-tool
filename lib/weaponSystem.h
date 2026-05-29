#pragma once
#include <string>
#include <vector>
inline std::vector<std::string> weaponType = {"basicBulletType","basicBulletType","laserBulletType","lightningBulletType", "missileBulletType"};
inline int chsAr{};
inline std::string weaponName{};
inline std::string shootSound{};
inline std::string bulletType{};
inline float reload{}, dmg{},inaccurate{}, weaponRotate{}, recoil{}, recoilTime{},recoilPow{}, cooldown{};
inline float shootCone{},rotationLimit{};
inline bool request = 1;
inline int chWeapon{};
int weaponSetup();
int requestWeapon();
