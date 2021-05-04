/*

	정수 3개를 보안으로 지정하고 있는
	클래스를 하나 정의 하고
	
	해당 클래스 객체를 2개 선언하여
	
	각자의 정수 3개를 입력한 뒤
	
	각자 출력하세요. 

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
			
			cout << "t1 입력: \n";
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
			
			cout << "t2 입력: \n";
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
