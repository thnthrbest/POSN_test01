#include <bits/stdc++.h>
using namespace std;
int main(){
	int a,a2,a3;
	cin >> a >> a2 >> a3;
	if(a < a2 && a < a3)cout << a;
	else if( a2 < a3)cout << a2;
	else cout << a3;
}
