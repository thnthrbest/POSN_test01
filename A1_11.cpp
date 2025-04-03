#include <bits/stdc++.h>
using namespace std;
int main(){
    string a,b=" ";
    int temp=0,count=0;
    cin >> a;
    for(int i=0;i<a.length();i++){
    	if(b.find(a[i]) == true){
        	continue;
		}else{
			for(;a[i]==a[i+temp];temp++);
        	cout << temp << a[i];
        	temp=0;
        	b +=a[i];
		}
    }

}
//////
//XYZZZ 1X1Y3Z
//ABCDE 1A1B1C1D1E
//
//