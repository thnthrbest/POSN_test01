#include <bits/stdc++.h>
using namespace std;
int main(){
	int a;
	cin >> a;
	for(int i=0;i<=4;i+=2){
		for(int j=0;j<a-i;j++)cout <<"*";
		cout << endl;
	}
}
