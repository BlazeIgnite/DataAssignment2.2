#ifndef DWELLER_H
#define DWELLER_H

/****************************************************************************/
/*!
\file Dweller.h
\author Tan Teck Ling
\par email: teckling1998@gmail.com
\brief
Class that defines the statistics(position, S.P.E.C.I.A.L., health, radiation, stimpak, radaway, outfit*, and weapon*) of the initialized object
*/
/****************************************************************************/

#include "GameObject.h"
#include "Outfit.h"
#include "Weapon.h"
#include "Vec2D.h"

/****************************************************************************/
/*!
Class Dweller:
\brief
Defines the statistics(position, S.P.E.C.I.A.L., health, radiation, stimpak, radaway, outfit*, and weapon*) of the initialized object
*/
/****************************************************************************/

class Dweller : public GameObject
{
private:
	Vec2D position_;
	int SPECIAL_;
	int health_;
	int radiation_;
	int stimpak_;
	int radaway_;
	Outfit* outfit_;
	Weapon* weapon_;
public:
	Dweller(const string&name, const int&SPECIAL_);
	virtual ~Dweller();
	const int getSPECIAL();
	const int getCurrentHealth();
	const int getCurrentRadDamage();
	const int getAttackDmg();
	void setPosition(const Vec2D&position);
	const Vec2D getPosition();
	void receiveHealthDamage(const int&health);
	void receiveRadDamage(const int&radiation);
	void receiveEquipmentDamage(const int&damage);
	void addStimpak(const int&stimpak);
	void addRadAway(const int&radaway);
	void useStimpak();
	void useRadAway();
	Outfit* assignOutfit(Outfit* outfit);
	Weapon* assignWeapon(Weapon* weapon);
	bool isDead();

};

#endif