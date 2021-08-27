#include <bits/stdc++.h>
using namespace std;

int deletex(int arr[], int n, int ele)
{
      int i;
      for(i=0; i<n; i++)
      {
            if(arr[i]== ele)
            break;
      }
      
      if(i<n)
      {     
            n-=1;
            for(int j=i; j<n; j++)
            {
                  arr[j]=arr[j+1];
            }
      }
      
      return n;
}

int main()
{
      int ele,n;
      cin>>ele>>n;
      int arr[n];
      
      for(int i=0; i<n ;i++)
      {
            cin>>arr[i];
      }
      
      cout<<"Array before deleteion is ";
      for(int i=0; i<n ;i++)
      {
            cout<<arr[i]<<" ";      
      }
      
      n =deletex(arr,n,ele);
      
      cout<<"\nArray after deleteion is ";
      for(int i=0; i<n ;i++)
      {
            cout<<arr[i]<<" ";      
      }
      return 0;
}