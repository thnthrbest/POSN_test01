#include <iostream>
#include <string>
using namespace std;
int main(){
    int a,b;
    cin >> a >> b;
    string c[4] = {"winter","spring","summer","fall"};

    if(a >= 1 && a<=3){
        if(b >= 21 && a%3==0)cout << c[1];
        else cout << c[0];
    }
    if(a >= 4 && a<=6){
        if(b >= 21 && a%3==0)cout << c[2];
        else cout << c[1];
    }
    if(a >= 7 && a<=9){
        if(b >= 21 && a%3==0)cout << c[3];
        else cout << c[2];
    }
    if(a >= 10 && a<=12){
        if(b >= 21 && a%3==0)cout << c[0];
        else cout << c[3];
    }

}