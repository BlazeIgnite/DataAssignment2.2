#ifndef ITEM_H
#define ITEM_H

/****************************************************************************/
/*!
\file Item.h
\author Tan Teck Ling
\par email: teckling1998@gmail.com
\brief
Class that defines the durability of a weapon or an outfit, while declaring the name of the outfit or weapon in the GameObject class
*/
/****************************************************************************/

#include "GameObject.h"

/****************************************************************************/
/*!
Class Item:
\brief
Defines the durability of a weapon or an outfit
*/
/****************************************************************************/

class Item : public GameObject
{
protected:
	int durability_;
public:
	Item(const string&name, const int&durability);
	virtual ~Item();
	virtual void receiveDamage(const int& durability) = 0;
	const int getDurability();
};

#endif