#include <iostream>
#include <string>
#include "Hero.h"


int main ( )
{

	WeaponManager wm;
	Weapon Spear = wm.GetSpear ( );


	std::cout << "\n Begin Game \n" << std::endl;
	Hero h ( "Idexa" );
	h.WeaponEquip ( Spear );
	h.Attack (  );


	std::cin.get ( );

}