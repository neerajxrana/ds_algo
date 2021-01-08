//Binary Search (Iterative and Recursive)

#include<bits/stdc++.h>
using namespace std;

int iter_binary_search(int arr[], int x, int l, int r){
	while(r>=l){
		int m = l + (r - l)/2;
		if(arr[m] == x) return m;
		if(arr[m] < x) l = m + 1;
		else r = m - 1;
	}
	return -1;
}

int rec_binary_search(int arr[], int x, int l, int r){
	if(r>=l){
		int m = l + (r - l)/2;
		if(arr[m] == x) return m;
		if(arr[m] < x) return rec_binary_search(arr, x, m+1, r);
		return rec_binary_search(arr, x, l, m-1);
	}
	return -1;
}

int main(){
	int arr[] = {3, 6, 10, 20, 40};
	int n = 5;
	int x = 20;
	cout << iter_binary_search(arr, x, 0, n-1) << endl;
	cout << rec_binary_search(arr, x, 0, n-1);
	return 0;
}

//Space Complexity: O(1) in the case of iterative binary search and O(log(n)) in the case of recursive binary search
//Time Complexity: O(log(n)) as the search area becomes half in each iteration