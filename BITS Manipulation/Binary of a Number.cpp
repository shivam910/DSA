// Program to convert Number into binary

#include <bits/stdc++.h>
using namespace std;

int main()
{
      int a[10],n,i;
      cout<<"Enter a number whose binary is to be calculated\n";
      cin>>n;
      for(i=0; n>0; i++)
      {
            a[i]= n%2;
            n= n/2;
      }
      cout<<"\nThe binary of given number is ";
      for( i=i-1; i>=0; i--)
      {
            cout<<a[i];
      }
}
