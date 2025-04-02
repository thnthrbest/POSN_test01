#include <iostream>
using namespace std;
int main(){
    int a[3];
    cin >> a[0] >> a[1] >> a[2];
    for(int i=0;i<3;i++){
        if(a[i]>a[0]){
            a[0]=a[i];
        }
    }
    cout << a[0];
} 