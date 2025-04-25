#include <bits/stdc++.h>
using namespace std;
int main(){
	int n,t=0;
	cin >> n;
	int a[n*2],b[n];
	for(int i=0;i<n*2;i++)cin >> a[i];
	
	for(int i=0;i<n*2;i+=2){
		if(a[i]>a[i+1])b[t]=a[i];
		else b[t]=a[i+1];
		t++;
	}
	t=0;
	for(int i=0;i<n;i++){
		t+=b[i];
		cout << b[i];
		if(i!=n-1)cout << " + ";
		else if(n!=1) cout << " = " << t;
	}
	
}
