#include<bits/stdc++.h>
using namespace std;
int main(){
	int y1, m1, d1, y2, m2 ,d2;
	cin >>y1 >> m1 >> d1 >> y2 >> m2 >> d2;
	if(y1 == y2){
		if(m1 == m2){
			if(d1 == d2)cout << 0;
			else if(d1 < d2)cout << 1;
			else cout << 2;
		}
		else if(m1 < m2)cout << 1;
		else cout << 2;
	}
	else if(y1 < y2)cout << 1;
	else cout << 2;
}
