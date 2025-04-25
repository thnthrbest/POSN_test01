#include <bits/stdc++.h>
using namespace std;
int main(){
	int a;
	char b;
	cin >> a >> b;
	b = (char)toupper(b);
	switch(b){
		case 'C':
			if(a<=0)cout << "solid";
			else if(a>=100)cout << "gas";
			else cout << "liquid";
			break;
		case 'F':
			if(a<=32)cout << "solid";
			else if(a>=212)cout << "gas";
			else cout << "liquid";
			break;
	}
}
