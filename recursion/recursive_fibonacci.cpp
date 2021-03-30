#include<bits/stdc++.h>
using namespace std;

int fibonacci(int n){
	if(n==0) return 0;
	if(n==1) return 1;
	return fibonacci(n-1) + fibonacci(n-2);
}

int main(){
	int fib4 = fibonacci(4);
	int fib6 = fibonacci(6);
	int fib1 = fibonacci(1);
	int fib2 = fibonacci(2);

	cout << fib1 << endl;
	cout << fib2 << endl;
	cout << fib4 << endl;
	cout << fib6 << endl;
	return 0;
}
