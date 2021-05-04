/*
	그래픽 탐색
	BFS 너비우선탐색
	DFS 깊이우선탐색
	
	클래스
	class
	
	구조체 / 사용자 정의 함수
	
	클래스 - 하나의 객체 구조를 정의하여 데이터와 행동을 정의하고 사용할
	수 있다. 
	
	구조체 내부함수  

*/


#include <iostream>
#include <cstring>
using namespace std;

/*
class 클래스이름{
	public:
		멤버변수선언;
		내부함수 정의
			
}; 

*/

class food{
	public:
		char name[20];
		int price;
		int val;
		void eat(){ // 메서드 
			cout << name << "을 먹습니다"; 
		}
};

int main(){
	// food 클래스의 치킨 객체 생성 
	food chicken;
	strcpy(chicken.name, "후라이드 치킨");
	chicken.eat();
}
