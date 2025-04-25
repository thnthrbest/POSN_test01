#include <bits/stdc++.h>
using namespace std;
int main(){
	string a;
	cin >> a;
	int temp=0;
	for(int i=0;i<3;i++){
		if(a[i]=='a'|| a[i]=='e'|| a[i]=='i'|| a[i]=='o'|| a[i]=='u')temp++;
	}
	cout << temp;
}
