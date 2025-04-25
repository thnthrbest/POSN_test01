#include <bits/stdc++.h>
using namespace std;
int main(){
	int a[3],e=0,o=0;
	for(int i=0;i<3;i++){
		cin >> a[i];
		if(a[i]%2==0)e++;
		else o++;
	}
	cout << "even "<< e << endl << "odd "<<o; 
}
