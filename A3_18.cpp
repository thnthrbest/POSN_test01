#include<bits/stdc++.h>
using namespace std;
int main(){
	int a,b,x=0;
	cin >> a >> b;
	for(int i=1;i<=a;i++){
		b-=(i*i);
		if(b>=0)x++;
	}
	cout << a-x;
}
