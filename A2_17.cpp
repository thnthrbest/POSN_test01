#include <bits/stdc++.h>
using namespace std;
int main(){
	char a,b,c;
	int d,sum=0;
	cin >> a >> b >> c;
	
	switch(a){
		case 'S' :
			if(b == 'R')sum+=60;
			else if(b == 'T')sum+=80;
		break;
		case 'M' :
			if(b == 'R')sum+=80;
			else if(b == 'T')sum+=100;
		break;
		case 'L' :
			if(b == 'R')sum+=100;
			else if(b == 'T')sum+=120;
		break;
	}
	if(c=='N')cout << sum;
	else{
		cin >> d;
		if(c == 'P')sum += 15*d;
		else if(c == 'E')sum += 10*d;
		
		cout << sum;
	}
	
	
	
}
