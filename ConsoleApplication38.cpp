#include <iostream>
#include "String.h"
#include "Array.h"
using namespace std;


int main()
{
    String obj(5);
    obj.setStr();
    cout << obj.getStr();
}