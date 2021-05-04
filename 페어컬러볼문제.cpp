#include <iostream>
#include <vector>
#include <utility>

using namespace std;

int total = 0;
int col_total[200001] = {0};
int result[200001] = {0};
vector<pair<int, int> > ball[2001];	// 크기별로 저장할것이니까 
int main(){
	
	// 메인함수 메모리 제한이 있다. 
	
	int n;
	cin >> n;
	vector<int> hap(n);
	
	for(int i=0;i<n;i++){
		int col,size;
		cin >> col >> size;
		ball[size].push_back({i,col});
	}
	
	for(int i=1;i<=2000;i++){
		for(int j=0;j<ball[i].size();j++){
			result[ball[i][j].first] = total - col_total[ball[i][j].second];
		}
		for(int j=0;j<ball[i].size();j++){
			total += i;
			col_total[ball[i][j].second] += i;
		}
	}
	
	for(int i=0;i<n;i++){
		cout << result[i] << "\n";
	}
	
}
