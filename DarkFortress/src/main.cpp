#include <iostream>
#include <string>
#include "Hero.h"


int main ( )
{

	WeaponManager wm;
	Weapon Spear = wm.GetSpear ( );

	int test = 0;
	std::cout << "\n Begin Game \n" << std::endl;
	Hero h ( "Idexa" );
	h.WeaponEquip ( Spear );
	h.Attack (  );


	std::cin.get ( );

}