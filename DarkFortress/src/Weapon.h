#pragma once

#include <iostream>
#include <string>
#include "WeaponInterface.h"


class Weapon : public IWeaponStats
{
	std::string m_wname;
	int m_wdamage;

public:
	Weapon ( );

	Weapon ( std::string name, int dmg );

	~Weapon ( );

	std::string GetWeaponName ( );

	int CalculateDamage ( ) override;

};

