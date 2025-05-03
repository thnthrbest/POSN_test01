#include <bits/stdc++.h>
using namespace std;
int main(){
	string a,x;
	cin >> a;
	x=a;
	for(int i=0;i<a.length();i++)a[i]=toupper(a[i]);
	int b=0,u=0,max_u=0,sum=0,buu=0;
	
	for(int i=0;i<a.length();i++){
		if(a[i] == 'B'){
			b++;
			if(a[i+1] == 'U' && a[i+2] == 'U')buu=1;
		}
		if(a[i] == 'U'){
			sum=0;
			for(int j=i;a[j]=='U';j++)sum++;
			if(sum>max_u)max_u=sum;
			u++;	
		}
	}
	
	if(buu==1){
		cout << "Yes " <<max_u;
		
	}else if(b>0){
		sum=0;
		for(int i=0;i<a.length();i++){
			
			if(sum==0)cout << x[i];
			else if(sum==1)cout << 'U';
			if(a[i]=='B')sum=1;
		}
	}else{
		sum=0;
		for(int i=0;i<a.length();i++){
			if(sum>2)sum=0;
			if(sum==0)cout << 'B';
			else cout << 'U';
			sum++;
		}
	}
}
