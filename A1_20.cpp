#include <bits/stdc++.h>
using namespace std;
int main(){
	int a,b,c;
	cin >> a >> b >> c;
	if(a > b && a > c && b > c)cout << "decreasing";
	else if(a < b && a < c && b < c)cout << "increasing";
	else cout <<"neither";
}
//1 2 3
