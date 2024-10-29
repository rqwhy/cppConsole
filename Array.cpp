#include "Array.h"


Array::Array()
{
	this->size = 10;
	this->arr = new int[size];
}

Array::Array(int size)
{
	this->arr = new int[];
	this->size = size;
}

Array::Array(const Array& arr2)
{
	this->arr = new int[arr2.size];
	for (int i = 0; i < arr2.size;i++) {
		this->arr[i] = arr2.arr[i];
	}
	this->size = arr2.size;
}

void Array::GiveArr()
{
	for (int i = 0; i < this->size; i++) {
		this->arr[i] = (this->size - 1);
	}
}

void Array::SortArr()
{
	for (int i = 0; i < this->size; i++) {
		for (int j = 0; j < 9; j++) {
			if (arr[j] > arr[j + 1]) {
				int b = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = b;
			}
		}
	}
}

void Array::PrintArr()
{
	for (int i = 0; i < this->size; i++) {
		cout << this->arr[i] << " ";
	}
}

void Array::CloneArr()
{
	int* arr = new int[this->size];
}

void Array::AdderArr()
{
	
}


void Array::MaxArr()
{
	int max = this->arr[0];
	for (int i = 0; i < this->size; i++) {
		if (max < arr[i])arr[i] = max;
	}
	cout << max;
}

void Array::MinArr()
{
	int min = this->arr[0];
	for (int i = 0; i < this->size; i++) {
		if (min > arr[i])arr[i] = min;
	}
	cout << min;
}

Array::~Array()
{
	delete[] this->arr;
}
