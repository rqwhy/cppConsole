#pragma once
#include <iostream>
using namespace std;
class point
{
private:
	int x;
	int y;
	int z;
public:
	point(int x,int y, int z);
	~point();
	void setX(int x);
	int getX();
	void setY(int y);
	int getY();
	void setZ(int z);
	int getZ();
	void setPointEnter();
	int getPointEnter();

	void print(int, int, int);
	void save(int, int, int);
	void load(int, int, int);
};

