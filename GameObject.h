#ifndef GAMEOBJECT_H
#define GAMEOBJECT_H

/****************************************************************************/
/*!
\file GameObject.h
\author Tan Teck Ling
\par email: teckling1998@gmail.com
\brief
Class that defines the name and the amount of outfits, weapons, or dwellers
*/
/****************************************************************************/


#include <string>

using std::string;

/****************************************************************************/
/*!
Class GameObject:
\brief 
Defines the name and the amount of outfits, weapons, or dwellers
*/
/****************************************************************************/

class GameObject
{

private:
	const string kName;
	static int count_;
protected:
	GameObject(const string&name);
public:
	virtual ~GameObject();
	string getName(void);
	static int getCount();
};


#endif