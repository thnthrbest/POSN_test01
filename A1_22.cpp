#include <bits/stdc++.h>
using namespace std;
int main(){
	int a,b;
	string c[13] ={"xxx","capricorn","aquarius","pisces","aries","taurus","gemini","cancer","leo","virgo","libra","scorpio","sagittarius"};
	cin >> a >> b;
	switch(b){
		case 1 : (a<=19) ? cout << c[b] : cout << c[b+1];
		break;
		case 2 : (a<=18) ? cout << c[b] : cout << c[b+1];
		break;
		case 3 : (a<=20) ? cout << c[b] : cout << c[b+1];
		break;
		case 4 : (a<=19) ? cout << c[b] : cout << c[b+1];
		break;
		case 5 : (a<=20) ? cout << c[b] : cout << c[b+1];
		break;
		case 6 : (a<=21) ? cout << c[b] : cout << c[b+1];
		break;
		case 7 : (a<=22) ? cout << c[b] : cout << c[b+1];
		break;
		case 8 : (a<=22) ? cout << c[b] : cout << c[b+1];
		break;
		case 9 : (a<=22) ? cout << c[b] : cout << c[b+1];
		break;
		case 10 : (a<=23) ? cout << c[b] : cout << c[b+1];
		break;
		case 11 : (a<=23) ? cout << c[b] : cout << c[b+1];
		break;
		case 12 : (a<=21) ? cout << c[b] : cout << c[1];
		break;
		
	}
}
