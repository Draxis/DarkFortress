#pragma once
#include "Weapon.h"

class WeaponManager
{

private:
	
	int  MAX_WEAPONS = 4;
	Weapon m_weaponArray [3];

public:
	WeaponManager (  );

	Weapon GetSword ( );
	Weapon GetSpear ( );
	Weapon GetAxe ( );


	~WeaponManager ( );
};

