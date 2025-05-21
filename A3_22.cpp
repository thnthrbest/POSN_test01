#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,a,b,x,v=0;
    cin >> n;
    int c[360]={0};
    for(int i=0;i<n;i++){
        cin >> a >> b;
        for(int j=a;j!=b;j++){
                c[j]=1;
                if(j==359)j=-1;
        }
    }
    int i,j,temp=0,max=-1,y=0;
    for(int i=0;i<360;i++){
        if(c[i]==0)v++;
    }
    if(v==0){
        max=360;
    }else{

        for(i=0;i<360;i++){
            //cout << i << " : "<< c[i]<<endl;
            if(c[i]==1){
                for(j=i;c[j]==1;j++){
                temp++;
                    if(j==359){
                        j=-1;
                        y=1;
                    }
                    //cout << temp << endl;
                }
                if(temp>max)max=temp;
                temp=0;
                if(y==1)break;
                i=j;
            }
        }
    }
    cout << max;
    //cout << temp;
}