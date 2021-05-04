// 어떤 장소들을 가보며 거기서 서비스를 받거나
// 어떤 행동을 취하는 것을 클래스 구조로 정의하고
// 실행하는 프로그램을 작성하세요. 

#include <iostream>
#include <cstring>

using namespace std;

class location{
	public:
		char name[20];
		int distance;
		int time;
		
		void now(){
			cout << "현재위치: " << name << "/ 집으로부터 거리: " <<  distance << "km / 소요시간: " << time << "분";
		}
		
};

class roomesacpe{
	public:
		char name[20];
		
		void start(){
			cout << name << " 게임을 시작합니다.\n ";
			step1();
		}
		
		void gameover(int step){
			cout << step << "단계에서 게임 오버\n";
		}
		
		void step1(){
			int k;
			cout << "6 * 30 = \n";
			cin >> k;
			
			if(k==180){
				step2();
			}else{
				gameover(1);
			}
		}
		
		void step2(){
			int k;
			cout << "6.25 전쟁이 일어난 연도는?\n";
			cin >> k;
			
			if(k==1950){
				step3();
			}else{
				gameover(2);
			}
		}
		
		void step3(){
			string k;
			cout << "한 입 베어먹은 사과는?\n";
			cin >> k;
			
			if(k=="파인애플"){
				cout << "모든 문제 성공 \n";
			}else{
				gameover(3);
			}
		}
	
};

class store{
	public:
		char name[20];
		int money=5000;
		
		void menu(){
			cout << name << " 가격표 \n";
			cout << "1: 사과: 1900원\n"; 
			cout << "2: 오렌지쥬스: 800원\n"; 
			cout << "3: 꼬깔콘: 1200원\n"; 
		}
		
		void order(){
			menu();
			
			cout << "(나의 돈 5000원)주문할 번호 입력\n";
			
			
			int check=0;
			while(check!=1){
				int a;
				cin >> a;
				if(a==1){
					money = money-1900;
				}else if(a==2){
					money = money-800;
				}else if(a==3){
					money = money-1200;
				}
				
				if(money <= 0){
					check=1;
				}
			}
			
			cout << "종료\n";
		}
	
};

class school{
	public:
		char name[20];
		void start(){
			cout << name << "학교입니다.\n";
			class1();
		}
		
		void youout(){
			cout << name << "학교에서 퇴학되었습니다\n ";
		}
		
		void over(int next){
			cout << "벌을 받아야합니다. 학교이름을 10번 쓰세요.\n";
			
			int check = 0;
			
			for(int i=0;i<10;i++){
				char k[20];
				cin >> k;
				if(strcmp(name,k) != 0){
					check=1;
					youout();
					break;
				}
			}
			
			if(check == 0){
				if(next == 2){
					class2();
				}else{
					finish();
				}
			}
			
		}
		
		void class1(){
			cout << "1교시 입니다. \n ";
			cout << "숙제 했나요? (했으면 1번, 안했으면 2번)\n";
			int k;
			cin >> k;
			if(k==1){
				class2();
			}else{
				over(2);
			}
		}
		
		void class2(){
			cout << "2교시 입니다. \n ";
			cout << "영어 문제입니다 deserted 뜻은?\n";
			string a;
			if(a=="사람이없는"){
				finish();
			}else{
				over(0);
			}
		}
		
		void finish(){
			cout << name << "학교가 끝났습니다\n";
		}
		
};

int main(){
	
	int t;
	
	cin >> t;
	
	while(t!=0){

		char name[20];
		int time;
		int distance;
		
		cin >> name >> distance >> time;
		
		location place;
		strcpy(place.name, name);
		place.distance = distance;
		place.time = time;
		
		place.now();
		
		cout << "\n위치 이름:";
		char nowplace[20];
		cin >> nowplace;
		
		if(strcmp(name, "roomesacpe") == 0){
			roomesacpe ro;
			strcpy(ro.name, nowplace);
			
			ro.start();
			
		}else if(strcmp(name, "store") == 0){
			store st;
			strcpy(st.name, nowplace);
			
			st.order();
		}else if(strcmp(name, "school") == 0){
			school sc;
			strcpy(sc.name, nowplace);
			
			sc.start();
		}
		
		
		t--;
	}
	
	 
}
