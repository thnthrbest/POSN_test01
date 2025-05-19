#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m,pn,px,py,max=1,sum=0;
    cin >> n >> m >> pn;
    int p[n][m]={0};
    for(int i=0;i<n;i++)for(int j=0;j<m;j++)p[i][j]=0;
    for(int i=0;i<pn;i++){
        cin >> px >> py;
        p[px][py]++;
    }
    int i,j,x,y;
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
        	sum=0;
            if(p[i][j]!=0)continue;
            else{
                for(x=i-1;x<=i+1;x++){
                	if(x<0 || x>i+1 || x>n)continue;
                    for(y=j-1;y<=j+1;y++){
                    	if(y<0 || y>j+1 || y>=m ||x<0 || x>i+1 || x>=n)continue;
                    	else{
                    		if(p[x][y]==0 )continue;
                        	else{
                            	sum+=p[x][y];
                            	if(sum>max)max=sum;
                        	}
						}
                        
                    }
                }
            }
        }
    }
    cout << max;
}
