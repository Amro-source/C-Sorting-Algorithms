// SortingAlgorithmBubble.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <algorithm>
#include <map>
#include <vector>

using namespace std;
void BubbleSort(int x [], int n);
int _tmain(int argc, _TCHAR* argv[])
{
	
	
	int x=10;

    int y=20;

	//int x  [4]={1,21,3,4};

	 int Z [10];

	 for(int i=0;i<10;i++)
	 {
		 Z[i]=i*3;
		 cout<<Z[i]<<endl;
		 
	 }

	
	


	//reverse(Z);
	 
	 cout<<"Altering the array"<<endl;


	Z[3]=20;
	
	 for(int i=0;i<10;i++)
	 {
//		 Z[i]=i*3;
		 cout<<Z[i]<<endl;
		 
	 }

	 cout<<"Sorting the array Bubble sort"<<endl;

	BubbleSort(Z, 10);
	
	return 0;
}

void BubbleSort(int  x [], int n)
{
	int i,j;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n-i-1;j++)
		{
			if(x[j]>x[j+1])
			{
				int temp=x[j];
				int temp2=x[j+1];
				x[j]=temp2;
				x[j+1]=temp;
			}
				
		}

	}

	for(i=0;i<n;i++)
	{
		cout<<x[i]<<endl;
	}

}
