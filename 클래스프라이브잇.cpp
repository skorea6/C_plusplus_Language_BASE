#include <iostream>
#include <cstring>

using namespace std;

class bank{
	private:
		int a;
		int b; 
		
	
	
	public:
		// ���� ������
		// Ŭ���� �ܺο����� ��� ����
		int x;
		int y;
		
		bank& In(){
			this->a = 500;
			b = 300;
			cout << "�Ա�: " << a*b; 
		}
		
		bank& Out(int a){
			
			this->a = 1;
			cout << "���" << this->a;		
		} 
		

};

int main(){
	bank sinhan;
	
	sinhan.Out().In().
	return 0;
}
