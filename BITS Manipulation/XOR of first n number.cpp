// Program to print OR's of "n" numbers

#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int n;
	cout<<"Enter a number till which XOR is to be calculated \n";
	cin>>n;
	cout<<"\nThe XOR of n numbers are\n";
	if(n%4 == 0) cout<<n;
	else
	if(n%4 == 1) cout<<1;
	else
	if(n%4 == 2) cout<<n+1;
	else cout<<0;
	
	return 0;
}
