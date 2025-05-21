#include <bits/stdc++.h>
using namespace std;
int main(){
    int a,b,max=-1;
    cin >> a >> b;
    int r[(a*2)+1]={0},u,v;
    for(int i=0;i<b;i++){
        cin >> u >> v;
        for(int j=(u*2)-1;j<(v*2)-1;j++){
            r[j]++;
            if(r[j]>max)max=r[j];
        }

    }
    //for(int i=0;i<a+1;i++){
    //     cout << r[i] << " ";
    // }
    // cout << endl;
    // for(int i=0;i<a+1;i++){
    //     cout << i << " ";
    // }
    cout << max;
}