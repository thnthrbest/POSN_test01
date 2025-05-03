#include <bits/stdc++.h>
using namespace std;
int main(){
	int n,rw,ww,temp=-1,c=0;
	string rn,name;
	cin >> n;
	for(int i=0;i<n;i++){
		cin >> rn >> rw;
		if(rw>15)c++;
		if(rw > temp){
			name = rn;
			ww = rw;
			temp = rw;
		}
	}
	cout << c <<"\n"<<name<<" "<<ww;
}
