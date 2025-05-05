#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,k,t,sum=0,x=0;
	cin >> n >> k >> t;
	for(int i=1;i>0;i+=k){
		if(i>n){
			i=abs(n-i);
			x++;
		}
		sum++;
		if(i==t)break;
		if(i==1 && x >0){
			sum--;
			break;
		}
		
	}
	cout << sum;
}
