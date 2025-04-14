#include <bits/stdc++.h>
using namespace std;
int main(){
    string a,b="";
    int temp=0,count=0;
    cin >> a;
    for(int i=0;i<a.length();i++){
			for(;a[i]==a[i+temp];temp++);
        	if(a[i]!=b[0])cout << temp << a[i];
        	b =a[i];
        	temp=0;
    }

}
