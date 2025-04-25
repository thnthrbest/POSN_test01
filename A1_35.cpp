#include <bits/stdc++.h>
using namespace std;
int main(){
	int a,temp=0;
	cin >>a;
	for(int i=a;i>0;i--){
		temp+=pow(i,2);
	}
	cout << temp;
}
