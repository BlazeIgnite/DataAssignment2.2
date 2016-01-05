#ifndef OUTFIT_H
#define OUTFIT_H

/****************************************************************************/
/*!
\file Outfit.h
\author Tan Teck Ling
\par email: teckling1998@gmail.com
\brief
Class that defines the S.P.E.C.I.A.L. value of Outfit initialized
*/
/****************************************************************************/

#include "Item.h"

/****************************************************************************/
/*!
Class Outfit:
\brief
Defines the kSPECIAL value of an outfit
*/
/****************************************************************************/

class Outfit : public Item
{
private:
	const int kSPECIAL;
public:
	Outfit(const string&name, const int&durability, const int&Special);
	virtual ~Outfit();
	const int getSPECIAL();
	virtual void receiveDamage(const int&DamageReceive);
};



#endif