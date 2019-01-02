#pragma once
#include <iostream>
#include <string>
#include "Interface.h"

class Hero : public ICombat, public IEquip
{
private:
	int m_hp;
	int m_damage;
	std::string m_name;
	Weapon m_CurrentWeapon;


public:
	Hero ( );
	Hero ( std::string name ) ;
	Hero ( Weapon wpn );


	void WeaponEquip ( Weapon wpn ) override;
	void Attack ( ) override;

};