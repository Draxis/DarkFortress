#include "Hero.h"

Hero::Hero (  ) 
{
	std::cout << "Hero created" << std::endl;

}

Hero::Hero ( std::string name ) : m_name ( name )
{
	std::cout << "Hero created named: " << m_name << std::endl;
}

Hero::Hero ( Weapon wpn )
{
	std::cout << "Hero Created" << std::endl;
	m_damage = wpn.CalculateDamage ( );
}

void Hero::WeaponEquip ( Weapon wpn )
{
	m_CurrentWeapon = wpn;
	m_damage = wpn.CalculateDamage ( );
}

void Hero::Attack ( )
{
	std::cout << "Hero Attack! \nDamage dealt : " << m_damage << std::endl;
}
