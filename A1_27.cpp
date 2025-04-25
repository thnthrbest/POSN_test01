#include <bits/stdc++.h>
using namespace std;
int main(){
	string a;
	cin >> a;
	for(int i=a.length()-1;i>=0;i--){
		cout << (char)tolower(a[i]);
	}
}
