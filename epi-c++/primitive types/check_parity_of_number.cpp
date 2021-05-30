// Check parity of a number
// Parity = 1, if no. of ones in the binary form is odd
// Parity = 0, if no. of ones in the binary form is even

// Used to check single bit errors in data comms. and storage
#include<bits/stdc++.h>
using namespace std;

int checkParity(int n) {
	//brute force solution - checks all bits
	int check = 0;
	while(n) {
		check ^= (n & 1);
		n >>= 1;
	}
	return check;
}

int main(){
	cout << checkParity(14) << endl;
	return 0;
}
