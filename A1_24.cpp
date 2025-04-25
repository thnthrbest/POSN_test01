#include <bits/stdc++.h>
using namespace std;
int main(){
	int a,b;
	cin >> a >> b;
	if(a>=2000){
		if(b>2000)cout << "1500";
		else if(b<=1500)cout << "1000";
		else cout << "1200";
	}
	else if(a<=1990){
		if(b>2000)cout << "2000";
		else if(b<=1500)cout << "1250";
		else cout << "1400";
	}
	else{
		if(b>2000)cout << "1700";
		else if(b<=1500)cout << "1100";
		else cout << "1300";
	}
}
