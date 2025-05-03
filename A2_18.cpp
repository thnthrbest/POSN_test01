#include <bits/stdc++.h>
using namespace std;
int main(){
	char x;
	int n,sum;
	cin >> x >> n;
	string a[3]={"Red","Green","Blue"};
	if(x=='R')sum=0;
	else if(x=='G')sum=1;
	else if(x=='B')sum=2;
	
	for(int i=0;i<n;i++){
		if(sum>2)sum=0;
		cout << a[sum] << " ";
		sum++;
	}
}
