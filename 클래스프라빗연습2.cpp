/*
클래스 내부에
정수 x를 하나 선언하여 0으로 초기화 한 후 

입력한 값을 해당 값에 더하는 함수 
입력한 값을 해당 값에 빼는  함수 
입력한 값을 해당 값에 곱하는 함수 
x값을 출력하는 함수  
를 정의하고 각자 한번씩 호출하여
마지막에 위 3개의 연산함수를 호출한 결과가 출력되도록 프로그램을 작성하세요. 
*/

#include <iostream>
using namespace std;

class yo{
	private:
		int x=0;
		
	public:
		int a,b,c;
		
		yo& input(){
			cin >> a >> b >> c;
		}
		
		yo& plus(){
			this->x = this->x + a;
		}
		
		yo& minus(){
			this->x = this->x - b;
		}
		
		yo& gop(){
			this->x = this->x * c;
		}
		
		yo& output(){
			cout << "x: " << this->x;
		}
	
};

int main(){
	yo t;
	t.input().plus().minus().gop().output();

	return 0; 
}


