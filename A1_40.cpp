#include <bits/stdc++.h>
using namespace std;
int main(){
	int a,temp=0,f[5]={0,100,120,200,60};
	while(true){
		cin >> a;
		if(a==5){
			cout <<"Bye Bye";
			break;
		}
		else{
			temp+=f[a];
		}
	}
	cout <<"\nTotal Calories: "<<temp;
}
