#include <bits/stdc++.h>
using namespace std;
int main(){
	int a[10]={-1,-1,-1,-1,-1,-1,-1,-1,-1,-1},temp=0,c=0;
	for(int i=0;i<10;i++){
		cin >> temp;
		for(int j=i;j>=0;j--)if(temp == a[j])c++;
		if(c==0)a[i]=temp;
		c=0;
	}
	for(int i=0;i<10;i++)if(a[i] != -1)cout << a[i] <<" ";
}
