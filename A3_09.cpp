#include<bits/stdc++.h>
using namespace std;
int main(){
	int p,k,n,min=100000;
	
	cin >> n >> k;
	int row[k+1]={0};
	for(int i=1;i<=n;i++){
		cin >> p;
		row[p]++;
	}
	
	for(int i=1;i<=k;i++){
		if(row[i]<min)min=row[i];
	}
	
	int temp=0;
	for(int i=1;i<=k;i++){
		temp += (row[i]-min);
	}
	
	cout << temp;
	 
}
