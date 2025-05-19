#include <bits/stdc++.h>
using namespace std;
int main(){
	int a,b,s,t;
	cin >> a >>b;
	int d[a]={0};
	for(int i=0;i<b;i++){
		cin >> s >> t;
		for(int j=s;j<=t;j++)d[j]++;
	}
	int max=-1;
	for(int i=0;i<a;i++){
		if(d[i]>max)max=d[i];
	}
	cout << max;
}
