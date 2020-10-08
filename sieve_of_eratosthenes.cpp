//Sieve of Eratosthenes

#include<bits/stdc++.h>
using namespace std;

vector<int> sieve_erato(int n){
	vector<bool> num(n+1);
	vector<int> primes;

	fill(num.begin(), num.end(), true);
	for(int i=2;i<=n;i++){
		if(num[i]){
			for(int p=i*i;p<=n;p+=i){
				num[p] = false;
			}
		}
	}

	primes.push_back(2);
	for(int i=3;i<=n;i+=2){
		if(num[i]){
			primes.push_back(i);
		}
	}

	return primes;
}

int main(){
	int n = 1000;
	vector<int> primes = sieve_erato(n);
	for(int a:primes) cout << a << " ";
	return 0;
}

//Time Complexity:O(n*log(log(n))) because the inner for loop runs for (n/2+n/3+n/5+....) which reduces to log(log(n))