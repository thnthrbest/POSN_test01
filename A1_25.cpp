#include <bits/stdc++.h>
using namespace std;
int main(){
	string a;
	cin >> a;
	
	for(int i=0;i<a.length();i++)a[i] = (char)toupper(a[i]);
	if(a.length()<3){
		if((int)a[0]>=50 && (int)a[0]<=57){
			switch(a[1]){
				case 'D' : cout << a[0] <<" of diamonds";
				break;
				case 'H' : cout << a[0] <<" of hearts";
				break;
				case 'S' : cout << a[0] <<" of spades";
				break;
				case 'C' : cout << a[0] <<" of clubs";
				break;
			}
		}
		else{
			switch(a[0]){
				case 'A' :
				switch(a[1]){
					case 'D' : cout <<"ace" <<" of diamonds";
					break;
					case 'H' : cout <<"ace" <<" of hearts";
					break;
					case 'S' : cout <<"ace" <<" of spades";
					break;
					case 'C' : cout <<"ace" <<" of clubs";
					break;
				}
				break;
				case 'J' :
				switch(a[1]){
					case 'D' : cout <<"jack" <<" of diamonds";
					break;
					case 'H' : cout <<"jack" <<" of hearts";
					break;
					case 'S' : cout <<"jack" <<" of spades";
					break;
					case 'C' : cout <<"jack" <<" of clubs";
					break;
				}
				break;
				case 'Q' : 
				switch(a[1]){
					case 'D' : cout <<"queen" <<" of diamonds";
					break;
					case 'H' : cout <<"queen" <<" of hearts";
					break;
					case 'S' : cout <<"queen" <<" of spades";
					break;
					case 'C' : cout <<"queen" <<" of clubs";
					break;
				}
				break;
				case 'K' : 
				switch(a[1]){
					case 'D' : cout <<"king" <<" of diamonds";
					break;
					case 'H' : cout <<"king" <<" of hearts";
					break;
					case 'S' : cout <<"king" <<" of spades";
					break;
					case 'C' : cout <<"king" <<" of clubs";
					break;
				}
				break;
			}
		}
	}else{
		switch(a[2]){
			case 'D' : cout << 10 <<" of diamonds";
			break;
			case 'H' : cout << 10 <<" of hearts";
			break;
			case 'S' : cout << 10 <<" of spades";
			break;
			case 'C' : cout << 10 <<" of clubs";
			break;
		}
	}
}
