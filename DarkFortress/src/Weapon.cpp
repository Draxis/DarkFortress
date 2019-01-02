#include "Weapon.h"



Weapon::Weapon ( )
{
	std::cout << "default weapon created." << std::endl;
}


Weapon::Weapon ( std::string name, int dmg  ) : m_wname ( name ), m_wdamage ( dmg )
{
	std::cout << name << " weapon created with " << m_wdamage << " damage " << std::endl;
}

std::string Weapon::GetWeaponName ( )
{
	return m_wname;
}

int Weapon::CalculateDamage ( )
{
	return m_wdamage;

}

Weapon::~Weapon ( )
{

}