#include <iostream>
#include <vector>
#include <algorithm>

vector<int> vec[100001];
using namespace std;


int main(){
	int n;
	cin >> n;
	
	for(int i=0;i<n;i++){
		int k, s;
		cin >> k >> s;
		vec[s].push_back(k);
	}
	
	int sum =0;
	
	for(int i=0;i<=100000;i++){
		sort(vec[i].begin(),vec[i].end(),less<int>());
		
		for(int j=0;j<vec[i].size();j++){
			int k=0;
			
			if(j==0){
				k = vec[i][j+1] - vec[i][j];
			}
			else if(j==vec[i].size()-1){
				k = vec[i][j] - vec[i][j-1];
			}
			else{
				int t1,t2;
				t1 = vec[i][j+1] - vec[i][j];
				t2 = vec[i][j] - vec[i][j-1];
				
				if(t1 < t2){
					k = t1;
				}else{
					k = t2;
				}
			}
			
			sum+= k;
		}
	}
	
	cout << sum; 
	
}
