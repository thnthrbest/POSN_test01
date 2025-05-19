#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,s;
    cin >> n >> s;
    int m[n],s_min=s,s_max=s,h_min,h_max;
    for(int i=0;i<n;i++){
        cin >> m[i];
        if(m[i]%3==0 && m[i]%4!=0){
            int sum= (m[i]/3) * 2 * 5;
            s_max-=sum;
            s_min-=sum;
        }
        else if(m[i]%3!=0 && m[i]%4==0){
            int sum= (m[i]/4) * 2 * 5;
            s_max-=sum;
            s_min-=sum;
        }else{
            int sum= (m[i]/3) * 2 * 5;
            int sum2= (m[i]/4) * 2 * 5;
            if(sum>sum2){
                s_max-=sum2;
                s_min-=sum;
            }else{
                s_max-=sum;
                s_min-=sum2;
            }
            
        }
    }
    cout << s_min << " " << s_max;
}