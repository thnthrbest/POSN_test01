#include<bits/stdc++.h>
using namespace std;
int main(){
	int w,l,m,n,sum=0,x,y;
	cin >> w >> l >> m >> n;
	int min=w*l;
	for(int i=n;i>=m;i--){
		x=w%i;
		y=l%i;
		if(x*y<min)min=(x*y);
	}
	cout << min;
	
}
