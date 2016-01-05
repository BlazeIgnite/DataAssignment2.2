#include "GameObject.h"

int GameObject::count_ = 0;

/****************************************************************************/
/*!
\brief
Constructor of the class GameObject that initialize the name of the GameObject
\param name
String that would be initialized into kName
*/
/****************************************************************************/
GameObject::GameObject(const string& name) : kName(name)
{
	count_++;
}

/****************************************************************************/
/*!
\brief
Destructor of the class GameObject
*/
/****************************************************************************/
GameObject::~GameObject()
{
}

/****************************************************************************/
/*!
\brief
Returns a copy of kName
\return
Name of the Item or Dweller
*/
/****************************************************************************/
string GameObject::getName(void)
{
	return kName;
}

/****************************************************************************/
/*!
\brief
Return a copy of count
\return
Number of GameObjects initialized
*/
/****************************************************************************/
int GameObject::getCount()
{
	return count_;
}