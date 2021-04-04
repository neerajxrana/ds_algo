#include<bits/stdc++.h>
using namespace std;

int all_index(int* arr, int size, int x, vector<int> &ans){
	if(size == 0) return 0;
	all_index(arr, size-1, x, ans);
	if(arr[size-1] == x){
		ans.push_back(size-1);
		return ans.size();
	}
}

int main(){
	int arr[] = {5,6,5,5,6,5};
	int size = 6;
	int x = 5;
	vector<int> ans;
	cout << all_index(arr, size, x, ans);
	return 0;
}
