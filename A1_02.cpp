#include <iostream>
#include <string>
using namespace std;

int main(){
	int a;
	cin >> a;
	cout <<"10 = "<< (int)a/10 << "\n";
	a-=((a/10)*10);
	cout <<"5 = "<< (int)a/5 << "\n";
	a-=((a/5)*5);
	cout <<"2 = "<< (int)a/2 << "\n";
	a-=((a/2)*2);
	cout <<"1 = "<< (int)a/1 << "\n";
	a-=((a/1)*1);
}
