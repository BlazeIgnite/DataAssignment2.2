#include "Outfit.h"

/****************************************************************************/
/*!
\brief
Constructor of the class Outfit that initialize the name of the GameObject, the durability of the Item, and the S.P.E.C.I.A.L. value of the Outfit
\param name
String that would be initialized into kName
\param durability
const int value that will be initialized into durability_
\param special
const int value that will be initialized into kSPECIAL
*/
/****************************************************************************/
Outfit::Outfit(const string&name, const int&durability, const int&Special) : Item(name, durability), kSPECIAL(Special)
{
}

/****************************************************************************/
/*!
\brief
Destructor of the class Outfit
*/
/****************************************************************************/
Outfit::~Outfit()
{
}

/****************************************************************************/
/*!
\brief
Return a copy of kSPECIAL
\return
Value of the S.P.E.C.I.A.L. the outfit has
*/
/****************************************************************************/
const int Outfit::getSPECIAL()
{
	return kSPECIAL;
}

/****************************************************************************/
/*!
\brief
Reduces the durability of the Outfit by the damage it received
\param DamageReceive
const int value that is used to reduce the durability of the Outfit
*/
/****************************************************************************/
void Outfit::receiveDamage(const int&DamageReceive)
{
	durability_ -= DamageReceive;
}