#include "WeaponManager.h"


WeaponManager::WeaponManager ( )
{
	std::cout << "Weapon Manager initialized." << std::endl;
	Weapon Sword ( "Sword", 33 );
	Weapon Spear ( "Spear", 37 );
	Weapon Axe ( "Axe", 35 );

	m_weaponArray[0] = Sword;
	m_weaponArray[1] = Spear;
	m_weaponArray[2] = Axe;
}

Weapon WeaponManager::GetSword ( )
{
	return m_weaponArray[0];
	
}

Weapon WeaponManager::GetSpear ( )
{
	return m_weaponArray[1];
	
}

Weapon WeaponManager::GetAxe ( )
{
	return m_weaponArray[2];

}

WeaponManager::~WeaponManager ( )
{
}
