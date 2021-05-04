/*
https://www.acmicpc.net/problem/2660
BFS �׷��� + ť 
ť : ���� Ž���� ������ �����صδ� �޸�


ť�� �� �������� ���ʴ�� �湮�ϴ�

�ʺ� �켱 Ž�� BFS ����  

1. �׷��� �׸���
2. �������� �޾ƿ´�
3. �� ������ ť�� �߰�
4. �������� �湮

5. ť�� ���� ���� �ִ� ����
��������(�湮�� ��) ������ �����ִ� ����

�� �� �ִ� �� �Ǵ��Ͽ� �� �� �ִٸ�
�� ������ ť�� �߰��ϰ� �湮  

<�Է�>  
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
	
	<���>  
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

