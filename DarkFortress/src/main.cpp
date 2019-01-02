#include <iostream>
#include <string>
#include "Hero.h"


int main ( )
{

	//Weapon Sword ( 23 );

	//Weapon Spear ( 27 );

	//switch (int x = 0)
	//{
	//case (1):
	//	{
	//		break;
	//	}
	//default:

	//}

	//Hero h ( Sword.CalculateDamage ( ) );
	//Weapon Sword ( "s", 23 );

	WeaponManager wm;
	Weapon Spear = wm.GetSpear ( );


	std::cout << "\n Begin Game \n" << std::endl;
	Hero h ( "Idexa" );
	h.WeaponEquip ( Spear );
	h.Attack (  );


	std::cin.get ( );

}