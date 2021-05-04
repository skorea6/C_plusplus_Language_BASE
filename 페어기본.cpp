#include <iostream>
#include <utility>
#include <vector>

using namespace std;

/*
pair: 한쌍의 데이터를 다루는 자료구조
pair<타입1, 타입2> 이름;
vector와 함께 사용

vector<pair<타입1,타입2> > 이름;
utility 헤더파일 필요 
*/


int main(){
	vector<pair<int, char> > person;
	person.push_back({20, 'O'});
	person.push_back({35, 'B'});
	
	for(int i=0;i<person.size();i++){
		cout << "나이: " << person[i].first << "혈액형: " << person[i].second << "\n";	
	}
	
	
}

