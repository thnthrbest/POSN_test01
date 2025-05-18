#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,temp=0;
    cin >> n;
    int a[n],x = sizeof(a)/sizeof(a[0]);
    for(int i=0;i<n;i++)cin >> a[i];
    sort(a, a + x);
    for(int i=0;i<n;i++){
        if(i==0)temp+=(a[i])*2;
        else{
            temp+=(a[i]+a[i-1])*2;
            a[i]=a[i]+a[i-1];
        } 
    }

    cout << temp;
}