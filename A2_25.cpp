#include <bits/stdc++.h>
using namespace std;
//// 0 = 0%
//// 1 = 20%
//// 2 = 60%
//// 3 = 100%
int main(){
	int n,m,a=0,b=0;
	cin >> n >> m;
	
	int zone[n][m]={0},r_r,r_c;
	
	cin >> r_r >> r_c;
	for(int i=0;i<n;i++)for(int j=0;j<m;j++)zone[i][j]=0;
	
	int redzone;
	cin >> redzone;
	
	int r,c;
	for(int i=0;i<redzone;i++){
		cin >> r >> c;
		zone[r][c] = 3;
		
		////////
		if(r-1>=0 && zone[r-1][c] == 0 || zone[r-1][c] == 1){
			zone[r-1][c] = 2;
			a++;
			if(r-2>=0 && zone[r-2][c] == 0){
				zone[r-2][c] = 1;
				b++;
			} 
		}
		if(r+1<=n-1 && zone[r+1][c] == 0 || zone[r+1][c] == 1){
			zone[r+1][c] = 2;
			a++;
			if(r+2<=n-1 && zone[r+2][c] == 0){
				zone[r+2][c] = 1;
				b++;
			} 
		}
		if(c-1>=0 && zone[r][c-1] == 0 || zone[r][c-1] == 1){
			zone[r][c-1] = 2;
			a++;
			if(c-2>=0 && zone[r][c-2] == 0){
				zone[r][c-2] = 1;
				b++;
			} 
		}
		if(c+1<=m-1 && zone[r][c+1] == 0 || zone[r][c+1] == 1){
			zone[r][c+1] = 2;
			a++;
			if(c+2<=m-1 && zone[r][c+2] == 0){
				zone[r][c+2] = 1;
				b++;
			} 
		}
		if(r-1>=0 && c-1>=0 && zone[r-1][c-1] == 0 || zone[r-1][c-1] == 1){
			zone[r-1][c-1] = 2;
			a++;
			if(r-2>=0 && c-2>=0 && zone[r-2][c-2] == 0){
				zone[r-2][c-2] = 1;
				b++;
			} 
			if(r-1>=0 && c-2>=0 && zone[r-1][c-2] == 0){
				zone[r-1][c-2] = 1;
				b++;
			}
			if(r-2>=0 && c-1>=0 && zone[r-2][c-1] == 0){
				zone[r-2][c-1] = 1;
				b++;
			}
		}
		if(r+1<=n-1 && c+1<=m-1 && zone[r+1][c+1] == 0 || zone[r+1][c+1] == 1){
			zone[r+1][c+1] = 2;
			a++;
			if(r+2<=n-1 && c+2<=m-1 && zone[r+2][c+2] == 0){
				zone[r+2][c+2] = 1;
				b++;
			}
			if(r+1<=n-1 && c+2<=m-1 && zone[r+1][c+2] == 0){
				zone[r+1][c+2] = 1;
				b++;
			}
			if(r+2<=n-1 && c+1<=m-1 && zone[r+2][c+1] == 0){
				zone[r+2][c+1] = 1;
				b++;
			}
		}
		if(r-1>=0 && c+1<=m-1 && zone[r-1][c+1] == 0 || zone[r-1][c+1] == 1){
			zone[r-1][c+1] = 2;
			a++;
			if(r-2>=0 && c+2<=m-1 && zone[r-2][c+2] == 0){
				zone[r-2][c+2] = 1;
				b++;
			}
			if(r-2>=0 && c+1<=m-1 && zone[r-2][c+1] == 0){
				zone[r-2][c+1] = 1;
				b++;
			}
			if(r-1>=0 && c+2<=m-1 && zone[r-1][c+2] == 0){
				zone[r-1][c+2] = 1;
				b++;
			}
		}
		if(r+1<=n-1 && c-1>=0 && zone[r+1][c-1] == 0 || zone[r+1][c-1] == 1){
			zone[r+1][c-1] = 2;
			a++;
			if(r+2<=n-1 && c-2>=0 && zone[r+2][c-2] == 0){
				zone[r+2][c-2] = 1;
				b++;
			}
			if(r+2<=n-1 && c-1>=0 && zone[r+2][c-1] == 0){
				zone[r+2][c-1] = 1;
				b++;
			}
			if(r+1<=n-1 && c-2>=0 && zone[r+1][c-2] == 0){
				zone[r+1][c-2] = 1;
				b++;
			}
		}
		///////
	}
	int t=0;
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			if(zone[i][j]==0)t++;
			//cout << zone[i][j] << " ";
		}
		//cout << endl;
	}
	cout << t<< endl;
	if(zone[r_r][r_c]==0)cout << "0%";
	else if(zone[r_r][r_c]==1)cout << "20%";
	else if(zone[r_r][r_c]==2)cout << "60%";
	else if(zone[r_r][r_c]==3)cout << "100%";

	
}
