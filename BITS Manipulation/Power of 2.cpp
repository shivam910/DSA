// Program to find whether a number is power of 2

// if we left shift a number n by x, the number n gets multiplied by 2^x 
// ----------  n<<x = n * 2^x 

// Similarly when we right shift a number by x it gets divided by 2^x 
// ---------- n>>x = n / 2^x

#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int n;
	cout<<"Enter the number\n";
	cin>>n;
	(n & n-1)==0 ? cout<<"Yes the number is power of 2":cout<<"No, the number is not the power of 2\n";
	return 0;
}
