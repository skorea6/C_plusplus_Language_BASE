#include <iostream>
#include <stack>
#include <vector>

using namespace std;

int main(){
	int n;
	cin >> n;
	
	vector<int> vec;
	vector<char> vec2;
	
	for(int i=0;i<n;i++){
		int k;
		cin >> k;
		vec.push_back(k);
	}
	
	stack<int> sta;
	
	int p=0;
	
	for(int i=1;i<=n;i++){
		sta.push(i);
		vec2.push_back('+');
		
		while(sta.size() > 0 && sta.top() == vec[p]){
			sta.pop();
			p++;
			vec2.push_back('-');
		}
	}
	
	if(sta.size() == 0){
		for(int i=0;i<vec2.size();i++){
			cout << vec2[i] << "\n";
		}
	}else{
		cout << "NO";
	}
}
