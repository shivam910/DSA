#include <bits/stdc++.h>
using namespace std;

int binarySearch(int arr[], int start, int end, int ele)
{
	while(start<=end)
	{
		int mid = (start + (end-start) / 2);
		
		if(arr[mid] == ele)
		return mid;
		
		else if(arr[mid] < ele )
		start = mid + 1;
		
		else end = mid - 1;
	}
	return -1;
}

int main()
{
	int size,ele;
	cout<<"Enter the size of the array\n";
	cin>>size;
	int arr[size];
	cout<<"Enter the array\n";
	for(int i=0; i<size; i++)
	{
		cin>>arr[i];
	}
	cout<<"Enter the element to be searched ";
	cin>>ele;
	int result = binarySearch(arr,0,size-1,ele);
	(result ==-1) ? cout<<"\nElement is not present in the array" : cout<<"\nElement is present at index "<<result;
}
