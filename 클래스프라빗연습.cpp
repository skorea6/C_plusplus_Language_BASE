/*

	���� 3���� �������� �����ϰ� �ִ�
	Ŭ������ �ϳ� ���� �ϰ�
	
	�ش� Ŭ���� ��ü�� 2�� �����Ͽ�
	
	������ ���� 3���� �Է��� ��
	
	���� ����ϼ���. 

*/


#include <iostream>
using namespace std;

class t1{
	private:
		int a;
		int b;
		int c;
		
	public:
		
		void in(){
			int a;
			int b;
			int c;
			
			cout << "t1 �Է�: \n";
			cin >> a >> b >> c; 
			
			this->a = a;
			this->b = b;
			this->c = c;
		}
		
		void out(){
			cout << "t1: " << this->a << " " << this->b << " " << this->c << "\n";
		}
};


class t2{
	private:
		int a;
		int b;
		int c;
		
	public:
		
		void in(){
			int a;
			int b;
			int c;
			
			cout << "t2 �Է�: \n";
			cin >> a >> b >> c; 
			
			this->a = a;
			this->b = b;
			this->c = c;
		}
		
		void out(){
			cout << "t2: " << this->a << " " << this->b << " " << this->c << "\n";
		}
};

int main(){
	t1 a1;
	t2 a2;
	
	a1.in();
	a2.in();
	
	
	a1.out();
	a2.out();
	
}
