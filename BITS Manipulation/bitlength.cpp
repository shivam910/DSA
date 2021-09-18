//Program to print total no. of bits in a given number

#include <bits/stdc++.h>
using namespace std;

int main()
{
      int number,bitlength=0;
      cout<<"Enter the number whose no. of bits is to be calculated: ";
      cin>>number;
      while((1<<bitlength)<=number)
      bitlength++;
      cout<<"\n Total no of bits in the given no. is: "<<bitlength;
}
