/*
https://www.acmicpc.net/problem/2660
BFS 그래프 + 큐 
큐 : 이제 탐색할 정점을 저장해두는 메모리


큐에 들어간 정점들을 차례대로 방문하다

너비 우선 탐색 BFS 구조  

1. 그래프 그리기
2. 시작정점 받아온다
3. 그 정점을 큐에 추가
4. 시작정점 방문

5. 큐에 값이 남아 있는 동안
다음으로(방문할 곳) 갈곳이 남아있는 동안

갈 수 있는 곳 판단하여 갈 수 있다면
그 정점을 큐에 추가하고 방문  

<입력>  
	4 7 1
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
	1 2 3 4
*/

#include <iostream>
#include <vector> 
#include <queue>

using namespace std;
int n,m,s;
int a[51][51] = {0};
int visit[51] = {0};
queue<int> q;

void bfs(int s){
	visit[s] = 1;
	q.push(s);
	

	while(!q.empty()){
		int current;
		current = q.front();
		q.pop();
		
		cout << current << " ";
		
		for(int i=1;i<=n;i++){
			if(a[current][i] == 1 && visit[i] == 0){
				q.push(i);
				visit[i] = 1;
			}
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
	
	bfs(s);
} 

