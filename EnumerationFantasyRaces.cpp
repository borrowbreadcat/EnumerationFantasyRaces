// EnumerationFantasyRaces.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>

void splash()
{
	using namespace std;
	cout << "This program is a response to learncpp.com 4.5 section quiz.\n";
	cout << "\tVERSION HISTORY\n";
	cout << "\tv20180905 - use `enum class` in place of `enum`\n";
	cout << "\tv20180904 - creation.\n\n";
	cout << "1) Define an enumerated type to choose between the following \n";
	cout << "   monster races : orcs, goblins, trolls, ogres, and skeletons.\n";
	cout << "2) Define a variable of the enumerated type you defined \n";
	cout << "   and assign it the troll enumerator.\n\n";
}

enum class Race
{
	ORC,
	GOBLIN,
	TROLL,
	OGRE,
	SKELETON,
};
/*			//old `enum` replaced with better `enum class`
enum Race
{
	RACE_ORC,
	RACE_GOBLIN,
	RACE_TROLL,
	RACE_OGRE,
	RACE_SKELETON
};
*/
int main()
{
	splash();
	Race enemy_01{ Race::TROLL }; //change `RACE_TROLL` to `Race::TROLL`
	if (enemy_01 == Race::TROLL)
		std::cout << "The first enemy is a troll. Race value: " << static_cast<int>(enemy_01) << " \n";
	else
		std::cout << "something is wrong.  Race value: " << static_cast<int>(enemy_01) << " \n";
    return 0;
}

