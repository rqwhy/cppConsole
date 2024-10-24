#include "point.h"

point::point(int x, int y, int z)
{
    this-> x = x;
    this->y = y;
    this->z = z;
}

point::~point()
{
}

void point::setX(int x)
{
}

int point::getX()
{
    return this-> x;
}

void point::setY(int y)
{
}

int point::getY()
{
    return this->y;
}

void point::setZ(int z)
{
}

int point::getZ()
{
    return this->z;
}

void point::setPointEnter()
{
    cout << "Name" << this->getX() << " ";
    cout << "Surname" << this->getY() << " ";
    cout << "Fathername" << this->getZ() << " ";
}

int point::getPointEnter()
{
	return 0;
}

void point::print(int, int, int)
{
}

void point::save(int, int, int)
{
}

void point::load(int, int, int)
{
}
