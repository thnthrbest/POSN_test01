#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            if(i==0 || i==1 || j==0 || i==n-1 || j==i)cout << "0 ";
            else cout << "1 ";
        }
        cout << endl;
    }
}