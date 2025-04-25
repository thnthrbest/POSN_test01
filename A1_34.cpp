#include <bits/stdc++.h>
using namespace std;
int main(){
	int n,a,temp=100000000;
	cin >> n;
	for(int i=0;i<n;i++){
		cin >> a;
		if(a<temp)temp=a;
	}
	cout << temp;
}
