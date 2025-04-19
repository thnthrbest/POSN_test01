#include <bits/stdc++.h>
using namespace std;
int main(){
	string a,b,c;
	cin >> a >> b >> c;
	if(a.length() > 5 && b.length() > 5){
		cout << a[0] << a[1] << b[b.length()-1]<< c[c.length()-1];
	}else{
		cout << a[0] << c << b[b.length()-1];
	}
}
