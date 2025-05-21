#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,x=0;
    cin >> n;
    string a,b;
    cin >> a >> b;
    for(int i=0;i<n;i++){
        if((int)a[i]+(int)b[i]!=105){
            x++;
        }
    }
    if(x==0)cout << "YES";
    else cout << "NO "<< x;
    
}