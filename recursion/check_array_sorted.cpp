#include<bits/stdc++.h>
using namespace std;

bool check_sorted(int* arr, int size){
	if(size == 0 || size == 1) return true;
	if(arr[0]>arr[1]) return false;
	return check_sorted(arr+1, size-1);
}

int main(){
	int arr1[] = {3,4,10,50};
	int arr2[] = {50,40,30,1};
	cout << check_sorted(arr1, 4) << endl;
	cout << check_sorted(arr2, 4);
	
}
