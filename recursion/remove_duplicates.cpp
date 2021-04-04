#include<bits/stdc++.h>
using namespace std;

void rm_dupl(char str[]){
	if(str[0] == '\0') return;
	rm_dupl(str+1);
	if(str[0] != str[1]) return;
	else{
		int i=1;
		for(;str[i]!='\0';i++){
			str[i-1] = str[i];
		}
		str[i-1] = str[i];
	}
}

int main(){
	char str[100];
	cin >> str;
	rm_dupl(str);
	cout << str;
	return 0;
}
