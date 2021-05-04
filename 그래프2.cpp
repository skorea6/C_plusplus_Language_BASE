/*
무방향 그래프  
*/
#include <iostream>
using namespace std;

int main(){
	int n,m;
	cin >> n >> m;
	
	int a[51][51] = {0};
	
	
	
	for(int i=0;i<m;i++){
		int b,c;
		cin >> b >> c;
		a[b-1][c-1] = 1;
		a[c-1][b-1] = 1;
	}
	
	
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cout << a[i][j] << " ";
		}
		cout << "\n";
	}
	
}
