#include<bits/stdc++.h>
using namespace std;

int last_index(int* arr, int idx, int x){
	if(idx < 0) return -1;
	if(arr[idx] == x) return idx; 
	return last_index(arr, idx-1, x);
}

int main(){
	int arr[] = {4,5,5,4,4,7,4};
	int idx = 7;
	int x = 5;
	cout << last_index(arr, idx, x);
	return 0;
}
