#include "Dweller.h"

/****************************************************************************/
/*!
\brief
Constructor of the class Dweller that initialize the name of the GameObject, S.P.E.C.I.A.L. value, health, radiation, number of stimpak and radaway, outfit and weapon pointer, and x and y coord of the Dweller
\param name
String that would be initialized into kName
\param SPECIAL
const int value that will be initialized into SPECIAL_
*/
/****************************************************************************/
Dweller::Dweller(const string&name, const int&SPECIAL) : 
GameObject(name),
SPECIAL_(0),
position_(0, 0),
health_(100),
radiation_(0),
stimpak_(0),
radaway_(0),
outfit_(nullptr),
weapon_(nullptr)
{
	SPECIAL_ = SPECIAL;
}

/****************************************************************************/
/*!
\brief
Destructor of the class Dweller
*/
/****************************************************************************/
Dweller::~Dweller()
{
}

/****************************************************************************/
/*!
\brief
Add the S.P.E.C.I.A.L. of the Dweller and Outfit if avaliable and return the const int value
\return
Value of the S.P.E.C.I.A.L. of Dweller or Value of the sum of S.P.E.C.I.A.L. between Dweller and Outfit
*/
/****************************************************************************/
const int Dweller::getSPECIAL()
{
	if (outfit_ == nullptr || outfit_->getDurability() < 1)
	{
		return SPECIAL_;
	}
	else
	{
		int value;
		int result = 0;
		for (int i = 1000000; i > 0; i /= 10)
		{
			value = (SPECIAL_ / i) % 10;
			value += (outfit_->getSPECIAL() / i) % 10;
			if (value > 9)
			{
				value = 9;
			}
			result += (value * i);
			
		}
		SPECIAL_ = result;
		return result;
	}
	
}

/****************************************************************************/
/*!
\brief
Return a copy of health_ after reduced by radiation_
\return
Value of the health_ the Dweller has
/****************************************************************************/
const int Dweller::getCurrentHealth()
{
	return health_ - radiation_;
}

/****************************************************************************/
/*!
\brief
Return a copy of radiation_
\return
Value of the radiation_ the Dweller has
/****************************************************************************/
const int Dweller::getCurrentRadDamage()
{
	return radiation_;
}

/****************************************************************************/
/*!
\brief
Check if Dweller has a usable Weapon and return the const int value
\return
Value of the Attack Damage of the Dweller if no weapon is equipped, if one is equipped and has a durability value of above 0, return the value of the Attack Damage of the Weapon
*/
/****************************************************************************/
const int Dweller::getAttackDmg()
{
	if (weapon_ == nullptr || weapon_->getDurability() < 1)
	{
		return 1;
	}
	else
	{
		return weapon_->getAttackDmg();
	}
}

/****************************************************************************/
/*!
\brief
Set the x and y coord of the Dweller
\param position
const value that is to be initialized into Vec2D position_
*/
/****************************************************************************/
void Dweller::setPosition(const Vec2D& position)
{
	Vec2D(position.x, position.y);
}

/****************************************************************************/
/*!
\brief
return the x and y coord of the Dweller
\return
Vec2D x and y coord
*/
/****************************************************************************/
const Vec2D Dweller::getPosition()
{
	return Vec2D(position_.x, position_.y);
}

/****************************************************************************/
/*!
\brief
Reduce the Health of the Dweller by the damage taken
\param health
Const int value that is to reduce health_
*/
/****************************************************************************/
void Dweller::receiveHealthDamage(const int&health)
{
	health_ -= health;
}

/****************************************************************************/
/*!
\brief
Increase the Radiation of the Dweller by the damage taken
\param radiation
Const int value that is to be added into radiation_
*/
/****************************************************************************/
void Dweller::receiveRadDamage(const int&radiation)
{
	radiation_ += radiation;
}

/****************************************************************************/
/*!
\brief
Reduce the durability of the Outfit and the Weapon by the value damage
\param damage
Const int value that is to reduce the durability_ of Outfit and Weapon accordingly
*/
/****************************************************************************/
void Dweller::receiveEquipmentDamage(const int&damage)
{
	if (weapon_ != NULL && outfit_ == NULL)
	{
		weapon_->receiveDamage(damage);
	}
	else if (outfit_ != NULL && weapon_ == NULL)
	{
		outfit_->receiveDamage(damage);
	}
	else if (outfit_ != NULL && weapon_ != NULL)
	{
		weapon_->receiveDamage(damage);
		outfit_->receiveDamage(damage);
	}
	else
	{
		return;
	}
}

/****************************************************************************/
/*!
\brief
Increase the value of stimpak_
\param stimpak
Const int value that is to increase the value of stimpak_
*/
/****************************************************************************/
void Dweller::addStimpak(const int&stimpak)
{
	stimpak_ += stimpak;
}

/****************************************************************************/
/*!
\brief
Increase the value of radaway_
\param radaway
Const int value that is to increase the value of radaway_
*/
/****************************************************************************/
void Dweller::addRadAway(const int&radaway)
{
	radaway_ += radaway;
}

/****************************************************************************/
/*!
\brief
Increases the value of health_ at the cost of the value of stimpak_
*/
/****************************************************************************/
void Dweller::useStimpak()
{
	if (stimpak_ > 0)
	{
		if (health_ - radiation_ >= 80 - radiation_)
		{
			health_ = 100 - radiation_;
		}
		else
		{
			health_ += 20;
		}
		stimpak_--;
	}
}

/****************************************************************************/
/*!
\brief
Reduces the value of radiation_ at the cost of the value of radaway_
*/
/****************************************************************************/
void Dweller::useRadAway()
{
	if (radaway_ > 0)
	{
		if (radiation_ <= 10)
		{
			radiation_ = 0;
		}
		else
		{
			radiation_ -= 10;
		}
		radaway_--;
	}
}

/****************************************************************************/
/*!
\brief
Assigns a Outfit pointer to the Dweller
*/
/****************************************************************************/
Outfit* Dweller::assignOutfit(Outfit* outfit)
{
	outfit_ = outfit;
	return outfit_;
}

/****************************************************************************/
/*!
\brief
Assigns a Weapon pointer to the Dweller
*/
/****************************************************************************/
Weapon* Dweller::assignWeapon(Weapon* weapon)
{
	weapon_ = weapon;
	return weapon_;
}

/****************************************************************************/
/*!
\brief
Determine whether if the Dweller is dead
\return
True if Dweller is dead, else return False if Dweller is not dead
*/
/****************************************************************************/
bool Dweller::isDead()
{
	if (health_ <= 0)
	{
		return true;
	}
	else
	{
		return false;
	}
}