#include <bits/stdc++.h>
using namespace std;
int main(){
	int a,temp=1;
	cin >>a;
	for(int i=a;i>0;i--){
		temp *=i;
	}
	cout <<temp;
}
