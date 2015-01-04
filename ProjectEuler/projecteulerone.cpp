// problem1.cpp
/* If we list all the natural numbers below 10 that are multiples of 3 or 5, we get 3, 5, 6 and 9. The sum of these multiples is 23.  
Find the sum of all the multiples of 3 or 5 below 1000. */

#include <iostream>
using namespace std;

int main(){
	int num = 0;
	int x;
	for (x = 3; x < 1000; x++){
		if ( x % 3 == 0 ){
			num += x;
			cout << x << " ";
		}
	 	if ( x % 5 == 0 ){
			num += x;
			cout << x << " ";
		}
	}
	cout << endl << "total sum: " << num << endl;
	return 0;
}