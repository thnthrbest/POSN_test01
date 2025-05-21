#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,temp=0;
    cin >> n;
    int x[n][2]={0},p,v;
    for(int i=0;i<n;i++){
        cin >> p >> v;
        x[i][0]=p;
        x[i][1]=v;
        for(int j=i-1;j>=0;j--){
            if(x[i][1] > x[j][1] && x[j][1]!=-1){
                temp++;
                //cout << x[i][1] <<" : "<< x[j][1] << endl; 
                x[j][1]=-1;
                break;
            }
        }
    }
    cout << temp;
}