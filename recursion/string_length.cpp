#include<bits/stdc++.h>
using namespace std;

int length(char str[]){
	if(str[0] == '\0') return 0;
	int small_string_length = length(str+1);
	return 1 + small_string_length;
}

int main(){
	char str[100];
	cin >> str;

	int len = length(str);
	cout << len << endl;
	return 0;
}
