#include <iostream>
using namespace std;
int main(){
    int a[3];
    cin >> a[0] >>a[1] >> a[2];
    if(a[0]<5 || a[1]<20 || a[2]<25)cout << "fail";
    else cout << "pass";
}