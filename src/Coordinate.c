#include <stdio.h>
#include "Coordinate.h"

Coordinate setCoordinate  (int x , int y)
{
	Coordinate coor;
	coor.x = x;
	coor.y = y;
	return coor;

}

Coordinate multiplyCoordinate (int x, int y ,int multiplier)
{
	Coordinate coor;
	coor.x = multiply(x,multiplier);
	return coor;
	
}
