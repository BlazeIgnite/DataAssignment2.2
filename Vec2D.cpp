#include "Vec2D.h"

/****************************************************************************/
/*!
\brief
Default constructor of Vec2D, sets x and y coord to 0
*/
/****************************************************************************/
Vec2D::Vec2D() : x(0), y(0)
{
}

/****************************************************************************/
/*!
\brief
Overloaded constructor of Vec2D
\param x
double value that will be initialized into x
\param y
double value that will be initialized into y
*/
/****************************************************************************/
Vec2D::Vec2D(double x, double y) : x(x), y(y)
{
}