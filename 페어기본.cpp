#include <iostream>
#include <utility>
#include <vector>

using namespace std;

/*
pair: �ѽ��� �����͸� �ٷ�� �ڷᱸ��
pair<Ÿ��1, Ÿ��2> �̸�;
vector�� �Բ� ���

vector<pair<Ÿ��1,Ÿ��2> > �̸�;
utility ������� �ʿ� 
*/


int main(){
	vector<pair<int, char> > person;
	person.push_back({20, 'O'});
	person.push_back({35, 'B'});
	
	for(int i=0;i<person.size();i++){
		cout << "����: " << person[i].first << "������: " << person[i].second << "\n";	
	}
	
	
}

