#include <iostream>
#include <vector>
#include <utility>

using namespace std;

int main(){
	string skill;
	cin >> skill;
	
	int n;
	cin >> n;
	
	vector<string> skill_trees;
	
	for(int i=0;i<n;i++){
		string k;
		cin >> k;
		skill_trees.push_back(k);
	
	}
	
	int count = 0;
	
	for(int i=0;i<n;i++){
		// BACDE
		
		// CBD / B C D, CBD, CB, BD
		// 
		
		// skill 제외하고 저장 BACDE
		vector<char> st1;
		for(int j=0;j<skill_trees[i].size();j++){
			// B, A ,,
			for(int m=0;m<skill.size();m++){
				if(skill[m] == skill_trees[i][j]){
					st1.push_back(skill[m]);
					
				}
			}
		} 
		
		// skill: CBD
		// st1: BCD CBD DBC C
		
		for(int m=0;m<st1.size();m++){
			cout << st1[m] << " ";
		}
		cout << "\n";
		
		int check = 0;
		for(int m=0;m<st1.size();m++){
			if(skill[m] != st1[m]){
				check = 1;
				break;
			}
		}
		
		if(check==0){
			count++;
		}
	}
	
	cout << count;
	
}
