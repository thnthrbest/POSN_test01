#include <bits/stdc++.h>
using namespace std;
int main(){
	string a,b,c;
	cin >> a >> b;
	int w=0;
	for(int i=0;i<a.length();i++)a[i] = toupper(a[i]);
	for(int i=0;i<b.length();i++)b[i] = toupper(b[i]);
	
	if(a.length() < b.length()) for(int i=0;a.length()<b.length();i++)a += a[i];
	else for(int i=0;b.length()<a.length();i++)b += b[i];
	
	c=a;
	
	for(int i=0;i<a.length();i++){
		if(a[i]=='L' || a[i]=='O' || a[i]=='V' || a[i]=='E' || b[i]=='L' || b[i]=='O' || b[i]=='V' || b[i]=='E'){
			c[i]='w';
			w++;
		}else c[i]='$';
		
	}
	cout << c;
	
	int max_w =-1,temp=0;
	for(int j=0;j<c.length();j++){
		for(int i=j;c[i]=='w';i++){
			temp++;
			j=i;
		}
		if(temp >max_w)max_w=temp;
		temp=0;
	}
	
	if(w%2!=0)cout << max_w;
	else{
		if(max_w < 2)cout << "#";
	}
	
}
