#include <bits/stdc++.h>
using namespace std;
int main(){
	string a,b,an,bn;
	cin >> a >> an >> b >> bn;
	if(a==b && an == bn)cout << 1000000;
	else if(a!=b && an == bn)cout << 100000;
	else if(a==b && an[4] == bn[4] && an[3] == bn[3] && an[2] == bn[2])cout << 2000;
	else if(a==b && an[4] == bn[4] && an[3] == bn[3] )cout << 1000;
	else if(a!=b && an[4] == bn[4] && an[3] == bn[3] && an[2] == bn[2])cout << 200;
	else if(a!=b && an[4] == bn[4] && an[3] == bn[3] )cout << 100;
	else if(a==b)cout << 20;
	else cout << 0;
}
