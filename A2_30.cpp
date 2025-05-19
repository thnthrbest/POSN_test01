#include <bits/stdc++.h>
using namespace std;
int main(){
    int a[5][5]={0},x=-1,y=-1;
    for(int i=0;i<5;i++)for(int j=0;j<5;j++)cin >> a[i][j];

    for(int i=0;i<5;i++){
        int sum2=0,sum=0,j,k;
        for(j=0;j<5;j++)sum+=a[i][j];
        if(sum%2!=0){
            x=i;
            for(int n=0;n<5;n++){
                sum2=0;
                for(k=0;k<5;k++)sum2+=a[k][n];
                if(sum2%2!=0){
                    y=n;
                    break;
                }
            }
        }
    }

    cout << x << " " << y;
}
/*
1 0 1 0 0
0 1 1 0 1
0 1 0 1 0
1 0 0 1 0
0 0 0 1 1
*/