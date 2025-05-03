#include <iostream>
using namespace std;
int main(){
	string b[3]={"Rabbit","Monkey","Frog"};
	int l,p,a[3]={0},rj,mj,fj,ln,pn,temp=0;
	cin >> l >> p;
	cin >> rj >> mj >> fj;
	for(int i=0;i<p;i++){
		cin >> ln >> pn;
		if(ln%rj == 0)a[0]+=pn;
		if(ln%mj == 0)a[1]+=pn;
		if(ln%fj == 0)a[2]+=pn;	
	}
	for(int i=0;i<3;i++)if(a[i]>temp)temp=a[i];
	
	for(int i=0;i<3;i++)if(a[i]==temp)cout << b[i]<< " " << temp << "\n";
	
}
