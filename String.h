#pragma once
class String
{
private:
	int size;
	char* str;
	int length;
public:
	String();
	String(int);
	String(char*,int,int);
	String(const String&);
	~String();

	int getSize();
	char* getStr();
	void setStr();
	int getLength();
};

