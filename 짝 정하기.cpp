#include <iostream>
#include <vector>
using namespace std;

int n;

int map[3][3] = {0};
int boy[3];
int girl[3];

int result[4][3] = {0};

void dfs(int s){
	
	for(int i=1;i<=3;i++){
		if(boy[s] > 0 && girl[i] > 0){
			
			if(s!=i && map[s][i] == 1){
				boy[s]--;
				girl[i]--;
				result[s][i]++;	//  
				dfs(i);
			}
			
		}
	}
}


int main(){
	cin >> n;
	
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			if(i!=j){
				map[i][j] = 1;
			}
		}
	}
	
	for(int i=1;i<=3;i++){
		int a,b;
		cin >> a >> b;
		boy[i] = a;
		girl[i] = b;
	}
	
	for(int i=1;i<=3;i++){
		dfs(i);
	}
	
	int nowok = 1;
	for(int i=0;i<3;i++){
		if(boy[i] > 0 || girl[i] > 0){
			nowok = 0;
		}
	}
	
	cout << nowok << endl;
	
	for(int i=1;i<=3;i++){
		for(int j=1;j<=3;j++){
			if(i!=j)
				cout << result[i][j] << " ";
		}
		cout << "\n";
	}
	
} 
