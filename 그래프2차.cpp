#include <iostream>
using namespace std;

// 방향

// 상하좌우  
int dix[4] = {0,0,-1,1};
int diy[4] = {1,-1,0,0};

 
void dfs(int y, int x){
	visit[y][x] = 1;
	
	// 4방향씩
	
	[1][][][][]
	[1][1][][][]
	[][][][][]
	[][][][][]
	
	for(4){
		int nx = x+dix[i];
		int ny = y+diy[i];
		
		if(map[ny][nx] == 1 && visit[ny][nx] == 0){
			dfs(ny,nx);
		}	
	} 
}
int main(){
	
	
	// 그래프
	
	
	dfs(0,0);
	for(i){
		for(j){
			
		dfs(i,j); 
		}
	}
	return 0;
}
