#include <bits/stdc++.h>
using namespace std;
int main(){
	string a;
	cin >> a;
	//cout << "unknown " << a.length(); 
	/// 
	int max_a = 0,j;
	if(a.find('A') != string::npos ||a.find('a')!= string::npos || a.find('B')!= string::npos || a.find('b')!= string::npos){
		for(int i=0;i<a.length();i++){
		
		if(a[i] == 'A'|| a[i] == 'a' ){
			if(a[i] == 'A' || a[i] == 'a'){
				cout << "no "<< i;
				break;	
			}
		}
		else if(a[i] == 'B' || a[i] == 'b'){
				if(a[i+1] != 'T'&& a[i+1] != 't' && a[i+1] != 'I'&& a[i+1] != 'i'){
				//if(a[i+1] != 'T'){
					if(i+1==a.length())cout << "no "<< i;
					else cout << "no "<< i+1;
					break;		
				}
			}
		else if(a[i] == 'R'|| a[i] == 'r'){
			if(a[i+1] == 'A' || a[i+1] == 'a'){
				int temp = 0;
				for(j=i;a[j+1]=='a' || a[j+1]=='A';j++)temp++;
				if(temp >max_a)max_a=temp;
				i=j;	
			}
			else{
				if(i+1==a.length())cout << "no "<< i;
				else cout << "no "<< i+1;
				break;	
			}
		}
		if(i==a.length()-1)cout <<"yes " << max_a;
		}	
	}else{
		cout << "unknown " << a.length();
	}
	
	
	
	
	////rAArArAarAAA
	////TBIBtBITIt
}
