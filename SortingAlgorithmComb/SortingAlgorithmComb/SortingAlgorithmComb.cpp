// SortingAlgorithmComb.cpp : Defines the entry point for the console application.
//

// SortingAlgorithmBucket.cpp : Defines the entry point for the console application.
//

// SortingAlgorithmInsertion.cpp : Defines the entry point for the console application.
//
////Giant orangescle ////////////////
// SortingAlgorithmBubble.cpp : Defines the entry point for the console application.
//
///Insertion Sort Algorithm
/////-Set a marker for the sorted section after tge first element
////Repeat the following until the unsorted section is empty:
///     /////////////----Select the first unsorted element
////////-----------------Swap other element to the right to create 
//////// the correct position and shift the unsorted element
///////advance the marker to the right one element
#include "stdafx.h"
#include <iostream>
#include <algorithm>
#include <map>
#include <vector>
#include <iostream>
#include <cstdlib>

/////In this algorithm buckets are created to put elements into them
//////////
////Then apply sorting algorithm insertion sort to sort element
////into them
////Finally takes out and join them to get a sorted array

using namespace std;
void BubbleSort(int x [], int n);
void InsertionSort(int x [], int n);
void printArray(int arr[],int n);
int binarySearch(int arr[],int low,int high,int num);
void swap(int *a,int *b);
int getNextgap(int gap);
void CombSort(int x [], int n);

////////////Comb Sorting Algorithm
/////It is an improvement over Bubble Sort
////////by using a gap of size more than 1
//////the gap starts with a large value and 
////then shrinks by a factor of 1.3
////in every iteration until it reaches the value of 1

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
	

	cout <<"Now Sorting the array Insertion sort"<<endl;

	InsertionSort(Z, 10);

	cout<<"Let us try the comb sorting algorithm"<<endl;

	CombSort(Z, 10);

	return 0;
}

int binarySearch(int arr[],int low,int high,int num){
    if(low>high)return -1;
    int mid = (low+high)/2;
    if(arr[mid] == num)return mid;
    else if(arr[mid] > num)return binarySearch(arr,low,mid,num);
    else return binarySearch(arr,mid+1,high,num);
}

void printArray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
void BucketSort (int x [], int n)
{

	vector <int> b [10]; ///Create empty buckets
	int I, KEY , J;

	for(int i=0;i<n;i++)
	{
		int bi=n*x[i];        /////Put array elements in different buckets
		b[bi].push_back(x[i]);
	}

	for(int i=0;i<n;i++)
	{

		sort(b[i].begin(),b[i].end());

	}

}

int getNextgap(int gap)
{

	return (int) (gap/1.3);
}
void CombSort(int x [], int n)
{
	int gap=n;
	bool swapped =true;

	while(gap!=1 || swapped==true)
	{
		gap=getNextgap(gap);
		swapped=false;

		for(int i=0;i<n-gap;i++)
		{
			if(x[i]>x[i+gap])
			{
				swap(x[i],x[i+gap]);
				swapped=true;
			}

		}
	}

	printArray(x, n);

}

void InsertionSort(int x [], int n)
{

	int I, KEY , J;

	for(int i=1;i<n;i++)
	{
		KEY=x[i];

		J=i-1;

		while(J>= 0 && x[J] > KEY )
		{
			x[J+1]=x[J];
			J=J-1;

		}
		
		x[J+1]=KEY;
	}

	for(int i=0;i<n;i++)
	{
		cout<<x[i]<<endl;
	}



}
void swap(int *a,int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
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



