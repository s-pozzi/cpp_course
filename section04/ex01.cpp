/*

Write a function named printMonster() that prints out all of the struct’s members.

Instantiate an ogre and a slime, initialize them using an initializer list, and pass them to printMonster().

*/

#include <iostream>
#include <string>

enum class MonsterType
{
	OGRE,
	DRAGON,
	ORC,
	GIANT_SPIDER,
	SLIME,
};

struct Monster
{
	MonsterType type;
	std::string name;
	int health;
};

std::string getMonsterType(Monster monster)
{
	if (monster.type == MonsterType::OGRE)
		return "Ogre";
	if (monster.type == MonsterType::DRAGON)
		return "Dragon";
	if (monster.type == MonsterType::ORC)
		return "Ord";
	if (monster.type == MonsterType::GIANT_SPIDER)
		return "Giant Spider";
	if (monster.type == MonsterType::SLIME)
		return "Slime";
}

void printMonster(Monster monster)
{
	std::cout << "This " << getMonsterType(monster) << \
				 " is named " << monster.name << \
				 " and has " << monster.health << \
				 " health." << std::endl;
}

int main()
{
	Monster ogre = { MonsterType::OGRE, "Gino", 130 };
	Monster slime = { MonsterType::SLIME, "Pino", 36 };

	printMonster(ogre);
	printMonster(slime);

	return 0;
}