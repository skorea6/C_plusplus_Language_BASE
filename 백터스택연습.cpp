#include <iostream>
#include <stack>
#include <vector>

using namespace std;

int main(){
	int n;
	cin >> n;
	
	vector<int> vec;
	stack<int> sta;
	
	while(n--){
		string t;
		cin >> t;
		
		if(t == "push"){
			int k;
			cin >> k;
			sta.push(k);
		}
		else if(t == "pop"){
			if(sta.size() == 0){
				int k = -1;
				vec.push_back(k);
			}else{
				vec.push_back(sta.top());
				sta.pop();
			}
		}
		else if(t == "size"){
			vec.push_back(sta.size());
		}
		else if(t == "empty"){
			vec.push_back(sta.empty());
		}
		else if(t == "top"){
			if(sta.size() == 0){
				int k = -1;
				vec.push_back(k);
			}else{
				vec.push_back(sta.top());
			}
		}
	}
	
	for(int i=0;i<vec.size();i++){
		cout << vec[i] << "\n";
	}
} 
