#include <bits/stdc++.h>
using namespace std;
int main(){
	char a;
	int b;
	cin >> a >> b;
	if(a=='H' && b==4567)cout << "safe unlocked";
	else if(a=='H' && b!=4567)cout << "safe locked - change digit";
	else if(a!='H' && b==4567)cout << "safe locked - change char";
	else cout << "safe locked";
}

