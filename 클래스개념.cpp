/*
	�׷��� Ž��
	BFS �ʺ�켱Ž��
	DFS ���̿켱Ž��
	
	Ŭ����
	class
	
	����ü / ����� ���� �Լ�
	
	Ŭ���� - �ϳ��� ��ü ������ �����Ͽ� �����Ϳ� �ൿ�� �����ϰ� �����
	�� �ִ�. 
	
	����ü �����Լ�  

*/


#include <iostream>
#include <cstring>
using namespace std;

/*
class Ŭ�����̸�{
	public:
		�����������;
		�����Լ� ����
			
}; 

*/

class food{
	public:
		char name[20];
		int price;
		int val;
		void eat(){ // �޼��� 
			cout << name << "�� �Խ��ϴ�"; 
		}
};

int main(){
	// food Ŭ������ ġŲ ��ü ���� 
	food chicken;
	strcpy(chicken.name, "�Ķ��̵� ġŲ");
	chicken.eat();
}
