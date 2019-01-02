#include <iostream>
#include "WeaponManager.h"

class ICombat
{
public:
	virtual void Attack ( ) = 0;

};

class IEquip
{
public:
	virtual void WeaponEquip ( Weapon wpn ) = 0;
};