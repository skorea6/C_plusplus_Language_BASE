/*
그래프 탐색
	
	너비우선탐색 - BFS
	깊이우선탐색 - DFS
	
	0 1 1 0
	0 0 0 1
	0 1 0 1
	1 1 0 0
	
	시작정점을 하나 골라서 모든 정점을 탐색한다고 가정했을 떄 
	탐색하는 순서를 출력
	
	깊이우선 : 1 => 2  => 4 => 3	// 한쪽으로 먼저 다 가보는 구조 
	
	너비우선 : 1 => 2 => 3 => 4		// 열들을 한 번씩 가보는 구조 


	깊이우선탐색 -> 그래프 + 재귀함수
	
	1. 그래프 그리기
	2. 출발 정점으로부터 DFS 시작함
	3. 현재 정점에서 갈 수 있는 곳들은 탐색
	갈수 있으면서 안가본 정점이라면
	그 정점으로 재귀
	
	정점 개수 n과 간선 개수 m, 시작정점 s를 입력하고 
	간선개수 m개 만큼 간선 정보를 입력했을 때 
	DFS 탐색하는 순서를 출력하세요. 
	
	<입력>  
	4 7 4
	1 2 
	1 3
	2 4
	3 2
	3 4
	4 1
	4 2
	
	0 1 1 0
	0 0 0 1
	0 1 0 1
	1 1 0 0
	
	<출력>  
	1 2 4 3

*/

#include <iostream>
#include <vector> 

using namespace std;
int n,m,s;
int a[51][51] = {0};
int visit[51] = {0};
vector<int> k;

void dfs(int s){
	visit[s] = 1;
	
	k.push_back(s);
	
	for(int i=1;i<=n;i++){
		if(a[s][i] == 1 && visit[i] == 0){
			
			
			dfs(i);
			
		}
	}
}

int main(){
	
	cin >> n >> m >> s;
	
	for(int i=0;i<m;i++){
		int b,c;
		cin >> b >> c;
		a[b][c] = 1;
	}
	
	dfs(s);
	
	cout << k[k.size() - 1];
} 
