#include <bits/stdc++.h>
using namespace std;
int main(){
	string a;
	cin >> a;
	for(int i=0;i<a.length();i++){
		cout << a[i];
		if((a.length()-(i+1))%3==0 && (a.length()-(i+1))!=0)cout <<",";
	}
}
