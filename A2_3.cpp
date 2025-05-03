#include <bits/stdc++.h>
using namespace std;
int main(){
	int n,temp=0;
	cin >> n;
	int a[n];
	for(int i=0;i<n;i++)cin >> a[i];
	
	for(int i=0;i<n;i++){
		if(i==0){
		if(a[i] > a[i+1])temp++;	
		}
		else if(i==n-1){
			if(a[i] > a[i-1])temp++;	
		}
		else{
			if(a[i] > a[i-1] && a[i] > a[i+1])temp++;
		}
	}
	cout << temp;
}
