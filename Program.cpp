#include<iostream>
#include<vector>
#include "Array.h"
using namespace std;

int main()
{
	Array<int> arr_obj = new Array();
	arr_obj.Insert(5);
	arr_obj.Insert(3);
	arr_obj.Insert(9);
	arr_obj.Insert(5);
	arr_obj.Print();
	return 0;
}