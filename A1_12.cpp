#include <bits/stdc++.h>
#include <cstdlib>
using namespace std;
int main(){
	
	string a,b,c;
	cin >> a >> b;
	c[0] = a[1];
	c[1] = a[0];
	int x = atoi(a.c_str());
	int y = atoi(c.c_str());
	if(b == "+")cout << x <<" " << b << " " << y << " = " << (x+y);
	if(b == "*")cout << x <<" " << b << " " << y << " = " << (x*y);
	
}
