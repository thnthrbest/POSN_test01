#include <bits/stdc++.h>
using namespace std;
int main(){
	int n,m;
	cin >> n >> m;
	int zone[n][m];
	for(int i=0;i<n;i++)for(int j=0;j<m;j++)zone[i][j]=0;
	int r_r , r_c;
	cin >> r_r >> r_c;
	
	int red,r,c;
	cin >> red;
	for(int i=0;i<red;i++){
		cin >> r >> c;
		for(int j=r-2;j<=r+2;j++){
			for(int k=c-2;k<=c+2;k++){
				if(j>=0 && j<n && k>=0 && k<m && zone[j][k] !=60)zone[j][k]=20;
			}
		}
		for(int j=r-1;j<=r+1;j++){
			for(int k=c-1;k<=c+1;k++){
				if(j>=0 && j<n && k>=0 && k<m)zone[j][k]=60;
			}
		}
		
		zone[r][c]=100;
	}
	
	int t=0;
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			if(zone[i][j] == 0)t++;
			//cout << zone[i][j] <<"  ";
		}
		//cout << endl;
			
	}
	cout << t << endl;
	cout << zone[r_r][r_c] << "%";
}
