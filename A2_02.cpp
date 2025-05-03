#include <bits/stdc++.h>
using namespace std;
int main(){
	int n,temp=0;
	cin >> n;
	int x[n],y[n];
	for(int i=0;i<n;i++){
		cin >> x[i] >> y[i];		
		//for(int j=i-1;j>=0;j--){
			//int xx = abs(x[i]-x[j]);
			//int yy = abs(y[i]-y[j]);
			//if(xx == yy)if(temp < xx)temp = xx;
		//}
	}
	sort(x, x + n);
	sort(y, y + n);
	
	for(int i=0;i<n;i++){
		int xx = abs(x[i]-y[i]);
		cout <<x[i]<<" - " << y[i]<< xx << endl;
		if(xx > temp)temp = xx;
	}
	cout << temp;
}
