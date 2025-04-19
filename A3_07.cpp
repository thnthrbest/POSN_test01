#include <bits/stdc++.h>
using namespace std;
int main(){
	int a,b;
	cin >> a >> b;
	int i=0,use=0,count=1;

	while(true){
		i+=a;
		for(int n=i;n>0;n--)use+=n;
		if(b <= use){
			cout << count;
			break;
		}
		count++;
		use =0;
	}
}
