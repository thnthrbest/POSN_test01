#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,q;
    cin >> n >> q;
    int d=0,l=0,x,y,sea[n]={0},sea2[n]={0};
    for(int i=0;i<n;i++){
        cin >> x >> y;
        d+=x;
        l+=y;
        if(x==1){
            if(sea[d]==0)sea[d]+=y;
            // else{
            //     if(sea[d]<y)sea[d]=y;
            // }
            //sea[d]+=y;
            if(sea2[d]<sea[d]){
                sea2[d]=sea[d];
            }
            //cout << d << " : "<< sea2[d] << " , "<< sea[d] << endl;

        }else if(x==-1){
            sea[d]=sea2[d+1]+sea[d]+y;
            if(sea2[d]<sea[d]){
                sea2[d]=sea[d];
                sea[d+1]=0;
                //if(d!=1)sea[d]=0;
            }
            //cout << d << " : "<< sea2[d] << " , "<< sea[d] << endl;

        }
        

    }
    //cout << " :" << l << endl; 
    int k[q]={0},a;
    for(int i=0;i<q;i++){
        cin >> a;
        if(a>l)k[i]=0;
        else{
            for(int j=n-1;j>=0;j--){
                if(a<=sea2[j]){
                    k[i]=j;
                    break;
                }
            }    
        }
    }
    // for(int i=0;i<n;i++){
    //     cout << sea[i] <<" ";
    // }
    // cout << endl;
    // for(int i=0;i<n;i++){
    //     cout << sea2[i] <<" ";
    // }
    for(int i=0;i<q;i++){
        cout << k[i] <<endl;
    }
}
