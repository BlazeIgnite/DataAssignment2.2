#include "Item.h"

/****************************************************************************/
/*!
\brief
Constructor of the class Item that initialize the name of the GameObject and the durability of the Item
\param name
String that would be initialized into kName
\param durability
const int value that will be initialized into durability_
*/
/****************************************************************************/
Item::Item(const string&name, const int&durability) : GameObject(name), durability_(durability)
{
}

/****************************************************************************/
/*!
\brief
Destructor of the class Item
*/
/****************************************************************************/
Item::~Item()
{
}

/****************************************************************************/
/*!
\brief
Return a copy of durability_
\return
Value of the durability the item has left
*/
/****************************************************************************/
const int Item::getDurability()
{
	return durability_;
}


