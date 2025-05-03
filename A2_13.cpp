#include <bits/stdc++.h>
using namespace std;
int main(){
	char a,b;
	int aw,bs,bw,x;
	cin >> a >> aw >> b >> bs >> bw;
	
	switch(a){
		case 'H' : x+=(5*aw); 
		break;
		case 'O' : x+=(3*aw); 
		break;
		case 'J' : x+=(2*aw); 
		break;
	}
	
	switch(b){
		case 'R' :
			if(bs == 1)x += (bw*12);
			else if(bs == 2)x += (bw*18);
			else if(bs == 3)x += (bw*25);
		break;
		case 'T' : 
			if(bs == 1)x += (bw*15);
			else if(bs == 2)x += (bw*20);
			else if(bs == 3)x += (bw*30);
		break;
		case 'M' :  
			if(bs == 1)x += (bw*10);
			else if(bs == 2)x += (bw*15);
			else if(bs == 3)x += (bw*20);
		break;
	}
	cout << x;
	
}
