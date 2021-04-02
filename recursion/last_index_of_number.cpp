#include<bits/stdc++.h>
using namespace std;

int last_index(int* arr, int size, int x){
	if(size == 0) return -1;
	if(arr[size-1] == x) return size-1;
	int arr2[size-1];
	int ans = copy(*arr, *arr+size, *arr2);	
	if(ans == -1) return -1;
	else return ans - 1;
}

int main(){
	int arr[] = {4,5,5,4,4,7,4};
	int size = 7;
	int x = 4;
	cout << last_index(arr, size, x);
	return 0;
}
