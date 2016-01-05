#ifndef WEAPON_H
#define WEAPON_H

/****************************************************************************/
/*!
\file Weapon.h
\author Tan Teck Ling
\par email: teckling1998@gmail.com
\brief
Class that defines the Attack damage value of Weapon initialized
*/
/****************************************************************************/

#include "Item.h"

/****************************************************************************/
/*!
Class Weapon:
\brief
Defines the kAttackDmg of a weapon
*/
/****************************************************************************/

class Weapon : public Item
{
private:
	const int kAttackDmg;
public:
	Weapon(const string&name, const int&durability, const int&AttackDmg);
	virtual ~Weapon();
	const int getAttackDmg();
	virtual void receiveDamage(const int&DamageReceive);
};

#endif