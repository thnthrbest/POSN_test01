#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,h,sum=0;
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> h;
        if(h>18)sum++;
    }
    if(sum<=(n-sum))cout << n;
    else  cout << sum+(n-1)-(n-sum);
}