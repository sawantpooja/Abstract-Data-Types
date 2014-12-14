#include<iostream>
#include "Array.h"
#include<vector>
using namespace std;

void Array::Insert(data value)
{
	arr.append(value);
}

void Array::Delete(int index)
{
	arr.erase(arr.begin()+index-1);
}

void Array::Print()
{
	for(int i=0;i<arr.size();i++)
	{
		cout<<arr[i]<<" ";
	}
	cout<<endl;
}

void SortedArray::Insert(data value)
{
	if(arr.size()==0)
	{
		arr.append(value);
	}
}

int SortedArray::BinarySearch(data value)
{
	int start = 0;
	int end = arr.size()-1;
	int median =0;
	while(end>start)
	{
		int median = (end - start)/2;
		if(arr[median]>value)
		{
			end = median;
		}
		else if (arr[median]<value)
		{
			start = median;
		}
		
		if(arr[median]==value)
			break;
	}
	return median;
}