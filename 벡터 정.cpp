/*
	���� ����
	
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
	
	// sort(������ġ, ����ġ,����);
	
	// sort�� �⺻ ������ �������� 
//	sort(vec.begin(),vec.end(),less<int>());
	
	sort(vec.begin(),vec.end(),greater<int>());
	
	for(int i=0;i<5;i++){
		cout << vec[i] << ' ';
	}
	
	return 0;
}
