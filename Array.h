#pragma once
#include <iostream>
using namespace std;
class Array
{
private:
	int size;
	int* arr;
public:
	Array();
	Array(int);
	Array(const Array&);
	void GiveArr();
	void SortArr();
	void PrintArr();
	void CloneArr();
	void AdderArr();
	void MaxArr();
	void MinArr();
	~Array();
};

