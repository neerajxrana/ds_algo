// Count no. of bits set to one in a number

#include<bits/stdc++.h>
using namespace std;

int countBits(int n) {
	int num = 0;
	while(n) {
		num += n & 1;
		n >>=1;
	}
	return num;
}

int main(){
	cout << countBits(14) << endl;
	return 0;
}

// Time complexity: O(n), where n is the no. of bits in the number
// Best case: 0
// Worst case: (111...11) in binary form
