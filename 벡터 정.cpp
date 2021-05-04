/*
	벡터 정렬
	
	sort() 
*/

#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
int main(){
	
	vector<int> vec(5);
	
	for(int i=0;i<5;i++){
		cin >> vec[i];
	}
	
	// sort(시작위치, 끝위치,차순);
	
	// sort의 기본 차순이 오름차순 
//	sort(vec.begin(),vec.end(),less<int>());
	
	sort(vec.begin(),vec.end(),greater<int>());
	
	for(int i=0;i<5;i++){
		cout << vec[i] << ' ';
	}
	
	return 0;
}
