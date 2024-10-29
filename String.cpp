#include "String.h"
#include <iostream>
using namespace std; 

String::String()
{ 
	this->size = 80;
	this->length = 0;
	this->str = new char[this->size];
}

String::String(int size)
{
	this->str = new char[size];
	this->size = size;
	this->length = 0;

}

String::String(char* arr,int leng,int size)
{
	this->str = new char[length];
	for (int i = 0; i < length; i++) {
		this->str[i] = str[i];
	}
	this->size = length;
	this->length = length;
}

String::String(const String& str)
{
	this->str = new char[str.size];
	for (int i = 0; i < str.size; i++) {
		this->str[i] = str.str[i];
	}
	this->size = str.size;
	this->length = str.length;
}

String::~String()
{
	delete[] this->str;
}

int String::getSize()
{
	return this-> size;
}

char* String::getStr()
{
	return this-> str;
}

void String::setStr()
{
	for (int i = 0; i < this->size; i++) {
		cin >> this->str[i];
	}
}

int String::getLength()
{
	return this-> length;
}