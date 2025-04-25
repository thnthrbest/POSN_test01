#include <bits/stdc++.h>
using namespace std;
int main(){
	int n,t=0;
	cin >> n;
	char a;
	for(int i=0;i<n;i++){
		cin >>a;
		if(a =='A' || a =='E' ||a =='I' ||a =='O' ||a =='U')t++;
	}
	cout << t;
}
