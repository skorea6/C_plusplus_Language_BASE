#include <iostream>
#include <cstring>
using namespace std;

int n,m;
int a[51][51] = {0};
int b[51][51] = {0};
int visit1[51] = {0};
int visit2[51] = {0};
int cnt1=0;
int cnt2=0;

int total=0;

void dfs1(int s){
	visit1[s] = 1;
	
	for(int i=1;i<=n;i++){
		if(a[s][i] == 1 && visit1[i] == 0){
			cnt1++;
			dfs1(i);
		}
	}
}

void dfs2(int s){
	visit2[s] = 1;
	
	for(int i=1;i<=n;i++){
		if(b[i][s] == 1 && visit2[i] == 0){
			cnt2++;
			dfs2(i);
		}
	}
}

int main(){
	cin >> n >> m;
	
	for(int i=0;i<m;i++){
		int c,d;
		cin >> c >> d;
		a[c][d] = 1;
		b[d][c] = 1;
	}
	
	for(int i=1;i<=n;i++){
		dfs1(i);
		dfs2(i);
		
		if(cnt1+cnt2 == n-1){
			total++;
		}
		
		cnt1=0;
		cnt2=0;
		memset(visit1,0,sizeof(visit1));
		memset(visit2,0,sizeof(visit2));
	}
	
	cout << total;
	
}
