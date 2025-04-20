#include <bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin >> n;
	int p[n];
	for(int i=0;i<n;i++){
		cin >> p[i];
	}
	int temp=0,c=0;
	vector<int> a;
	for(int i=0;i<n;i++){
		for(int j=i;j<n;j++){
			int temp=0;
			for(int k=i;k<=j;k++)temp +=p[k];
			for(int x=0;x<a.size() && a.size()!=0;x++)if(a[x]==temp)c=1;
			if(c==0)a.push_back(temp);
			c=0;
			temp=0;
		}
	}
	
	cout << a.size();
}
