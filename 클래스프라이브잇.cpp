#include <iostream>
#include <cstring>

using namespace std;

class bank{
	private:
		int a;
		int b; 
		
	
	
	public:
		// 공개 데이터
		// 클래스 외부에서도 사용 가능
		int x;
		int y;
		
		bank& In(){
			this->a = 500;
			b = 300;
			cout << "입금: " << a*b; 
		}
		
		bank& Out(int a){
			
			this->a = 1;
			cout << "출금" << this->a;		
		} 
		

};

int main(){
	bank sinhan;
	
	sinhan.Out().In().
	return 0;
}
