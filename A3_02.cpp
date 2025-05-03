#include<bits/stdc++.h>
using namespace std;
int main(){
	int a,sum=0,i,j,temp=1;
	cin >> a;
	for(i=1;i>0;i+=2){
		for(j=0;j<i;j++){
			sum++;
			if(sum==a)break;
		}
		if(sum==a)break;
	}
	i-=2;
	if(j%2==0)i++;
	cout << i;
}
