#include <iostream>
#include <vector> 
#include <cstring>

using namespace std;

int t;
int m,n,k;

int dix[4] = {0,0,-1,1};
int diy[4] = {1,-1,0,0};

int map[51][51] = {0};
int visit[51][51] = {0};

int bug = 0;
vector<int> result;

void dfs(int y, int x){
	visit[y][x] = 1;
	
	
	for(int i=0;i<4;i++){
		int nx = x + dix[i];
		int ny = y + diy[i];
		
		if(map[ny][nx] == 1 && visit[ny][nx] == 0){
			
			dfs(ny,nx);
		}
	}
	
}

int main(){
	
	cin >> t;
	for(int i=0;i<t;i++){
		cin >> m >> n >> k;
	
		for(int j=0;j<k;j++){
			int a,b;
			cin >> a >> b;
			map[a][b] = 1;
		}
		
		for(int p=0;p<m;p++){
			for(int s=0;s<n;s++){
				
				if(map[p][s] == 1 && visit[p][s] == 0){
					dfs(p,s);
					bug++;
				}
				
			}
		}
		
		result.push_back(bug);
		
		memset(map,0,sizeof(map));
		memset(visit,0,sizeof(visit));
		bug = 0;
	}
	
	//Ãâ·Â
	for(int i=0;i<result.size();i++){
		cout << result[i] << "\n";
	} 
}
