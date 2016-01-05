#ifndef VEC2D_H
#define VEC2D_H

/****************************************************************************/
/*!
\file Vec2D.h
\author Tan Teck Ling
\par email: teckling1998@gmail.com
\brief
Struct that defines the x and y coordinates of the dwellers
*/
/****************************************************************************/

/****************************************************************************/
/*!
Class Vec2D:
\brief
Defines the Coordinates of the Dweller
*/
/****************************************************************************/

struct Vec2D
{
	double x;
	double y;
	Vec2D();
	Vec2D(double x, double y);
};


#endif