#include <bits/stdc++.h>
using namespace std;
int main(){
	int a;
	cin >>a;
	if(a>=1000){
		for(int i=0;i<a/1000;i++)cout<<"M";
		a%=1000;
	}
	if(a>=100){
		if(a<=300)for(int i=0;i<a/100;i++)cout<<"C";
		else if(a/100==4)cout<<"CD";
		else if(a/100==9)cout<<"CM";
		else{
			for(int i=1;i<=a/100;i++){
				if(i==5)cout<<"D";
				else if(i>=6)cout <<"C";
			}
		}
		a%=100;
	}
	if(a>=10){
		if(a<=30)for(int i=0;i<a/10;i++)cout<<"X";
		else if(a/10==4)cout<<"XL";
		else if(a/10==9)cout<<"XC";
		else{
			for(int i=1;i<=a/10;i++){
				if(i==5)cout<<"L";
				else if(i>=6)cout <<"X";
			}
		}
		a%=10;
	}
	if(a>=1){
		if(a<=3)for(int i=0;i<a/1;i++)cout<<"I";
		else if(a/1==4)cout<<"IV";
		else if(a/1==9)cout<<"IX";
		else{
			for(int i=1;i<=a/1;i++){
				if(i==5)cout<<"V";
				else if(i>=6)cout <<"I";
			}
		}
	}
}
