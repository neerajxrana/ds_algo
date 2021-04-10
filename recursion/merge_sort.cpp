#include<bits/stdc++.h>
using namespace std;

int merge(int arr[], int l, int m, int r){
	int n = r - l;
	int k = 0;
	int i = l;
	int j = m + 1;

	while(i<=m && j<=r)
}

void mergesort(int arr[], int l, int r){
	if(l<r){
		int m = l + (r-1)/2;
		mergesort(arr, l, m);
		mergesort(arr, m+1, r);
		merge(arr, l, m, r);
	}
}
// just a small change
int main(){
	int arr = {4,6,6,19,0,1};
	int size = sizeof(arr)/sizeof(arr[0]);
	mergesort(arr, 0, size-1);
	for(int i:arr) cout << i << " ";
	return 0;
}
