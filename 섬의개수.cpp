#include <iostream>
using namespace std;

int m,n;

int map[51][51] = {0};
int visit[51][51] = {0};
int island = 0;

int dix[8] = {0,0,-1,1,1,-1,1,-1};
int diy[8] = {1,-1,0,0,1,-1,-1,1};

int dfs(int y, int x){
	visit[y][x] = 1;
	
	
	for(int i=0;i<8;i++){
		int nx = x + dix[i];
		int ny = y + diy[i];
		
		if(map[ny][nx] == 1 && visit[ny][nx] == 0){
			dfs(ny,nx);
		}
	}
}

int main(){
	cin >> m >> n;
	
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			int a;
			cin >> a;
			map[i][j] = a;
		}
	}
	
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			if(map[i][j] == 1 && visit[i][j] == 0){
				dfs(i,j);
				island++;		
			}
			
		}
	}
	
	cout << island;
	
}
