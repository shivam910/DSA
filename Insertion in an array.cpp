#include <bits/stdc++.h>
using namespace std;


int* insert (int ele, int pos, int n, int arr[])
{
      n++;
      for(int i=n; i>=pos; i--)
      {
            arr[i]=arr[i-1];
      }
      arr[pos-1]=ele;
      
      return arr;
}

int  main() {
            int ele,pos,n;
      cin>>ele>>pos>>n;
      int arr[n];
      
      for(int i=0;i<n;i++)
      {
            cin>>arr[i];
      }
      cout<<"Array before insertion is ";
      for(int i=0;i<n;i++)
            {
                  cout<<arr[i]<<" ";
            }
      insert(ele,pos,n,arr);
      
      cout<<"\nArray after insertion is ";
      for(int i=0;i<n+1 ;i++)
            {
                  cout<<arr[i]<<" ";
            }
	return 0;
}