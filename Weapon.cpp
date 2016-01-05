#include "Weapon.h"

/****************************************************************************/
/*!
\brief
Constructor of the class Weapon that initialize the name of the GameObject, the durability of the Item, and the Attack Damage value of the Weapon
\param name
String that would be initialized into kName
\param durability
const int value that will be initialized into durability_
\param AttackDmg
const int value that will be initialized into kAttackDmg
*/
/****************************************************************************/
Weapon::Weapon(const string&name, const int&durability, const int&AttackDmg) : Item(name, durability), kAttackDmg(AttackDmg)
{
}

/****************************************************************************/
/*!
\brief
Destructor of the class Weapon
*/
/****************************************************************************/
Weapon::~Weapon()
{
}

/****************************************************************************/
/*!
\brief
Return a copy of kAttackDmg
\return
Value of the Attack Damage the weapon has
*/
/****************************************************************************/
const int Weapon::getAttackDmg()
{
	return kAttackDmg;
}

/****************************************************************************/
/*!
\brief
Reduces the durability of the Weapon by half of the damage it received
\param DamageReceive
const int value that is halved then used to reduce the durability of the Outfit
*/
/****************************************************************************/
void Weapon::receiveDamage(const int&DamageReceive)
{
	durability_ -= (DamageReceive / 2);
}

