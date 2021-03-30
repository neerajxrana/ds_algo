#include<bits/stdc++.h>
using namespace std;

int first_index(int* arr, int size, int x){
	if(arr[0] == x) return 0;
	if(size == 1) return -1;
	int ans = first_index(arr+1, size-1, x);
	if(ans == -1) return -1;
	else return 1 + ans;
}

int main(){
	int arr[] = {5, 5, 7, 5, 2};
	int x = 5;
	cout << first_index(arr, 6, x);
	return 0;
}
