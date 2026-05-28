#pragma once
#include <string>

int GetMain();
void debug();

inline std::string name{};
inline std::string DisplayName{};

inline int health{}, speed{}, armor{}, range{};
inline bool flying{}, lowAltitude{}, faceTarget{};
