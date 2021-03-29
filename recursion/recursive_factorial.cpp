#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define FOR(i,n) for(int i=0;i<n;i++)
#define pb push_back
#define mp make_pair
#define endl "\n"
#define sp " "
#define vi vector<int>
#define vc vector<char>
#define vb vector<bool>
#define f first
#define s second
#define mod 1000000007
#define ALL(c) (c).begin(), (c).end()

int factorial(int n){
	if(n==0) return 1;
	return n * factorial(n-1);
}


int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int fact = factorial(5);
	cout << fact;
	return 0;
}
