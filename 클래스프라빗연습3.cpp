/*
	단순한 게임 
	스테이지를 4~5개 만들면서
	
	각 스테이지에 따라 어느 다른 스테이지로
	체이닝을 걸어 넘어가며 모든 스테이지를 마쳤을 때 
	마치지 못했을 때.. . 어떤 결과가 나오도록 
	코드를 작성해보세요.
	
	미션은/ .... 
*/

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cstring>
using namespace std;

class game{
	private:
	
		int st1_ran; 
		int st2_a1, st2_n1,st2_n2,st2_n3,st2_answer;
		int st3_ran;
		int st4_ran;
	public:
		char st1_in[30];
			int st_check =2;
		int st2_in;
		char st3_in[20];
		int st4_in1,st4_in2,st4_in3;
		
		game& test(){
			cin >> st2_a1;
			cout << "Asdf\n\n\n\n";
			this->st1_ran = rand() % 3;
			this->st3_ran = rand() % 200;
			this->st4_ran = rand() % 3000;
			cout << this->st1_ran << endl;
			cout << this->st3_ran<< endl;
			cout << this->st4_ran<< endl;			
		}
		int stage_check(int s){
			
			cout <<"asasdf"<< this->st_check << ' ' << s;
			if(this->st_check == s){
				return 1;
			}else{
				gameover();
			}
		}
		
		void gameover(){
			cout << "게임 오버\n";
			exit(1);
		}
		
		void gamecomplete(){
			cout << "게임 성공\n";
			exit(1);
		}
		
		game& start(){
			cout << "게임을 시작합니다\n";	
		}
		
		
		game& stage2(){
			cout << "a1";
			if(stage_check(2) == 1){
				cout << "a2";
				// 계산
				this->st2_a1 = rand() % 3;
				this->st2_n1 = rand() % 10;
				this->st2_n2 = rand() % 10;
				this->st2_n3 = rand() % 10;
				
				cout << "스테이지.2) 계산을 푸세요 : \n";
				
				if(this->st2_a1 == 0){
					this->st2_answer = this->st2_n1 + this->st2_n2 * this->st2_n3;
					cout << this->st2_n1 << "+" << this->st2_n2 << "*" << this->st2_n3 << "\n";
				}else if(this->st2_a1 == 1){
					this->st2_answer = this->st2_n1 - this->st2_n2 * this->st2_n3;
					cout << this->st2_n1 << "-" << this->st2_n2 << "*" << this->st2_n3 << "\n";
				}else if(this->st2_a1 == 2){
					this->st2_answer = this->st2_n1 + this->st2_n2 * this->st2_n3;
					cout << this->st2_n1 << "*" << this->st2_n2 << "*" << this->st2_n3 << "\n";
				}
				
				cin >> st2_in;
				if(st2_in == this->st2_answer){
					this->st_check = 3;
				}else{
					this->st_check = 0;
				}
				
			}else{
				cout << "a3";
			}
		}
		
		game& stage3(){
			if(stage_check(3) == 1){
				// 홀짝  
				this->st3_ran = rand() % 2;
				
				cout << "스테이지.3) 홀짝 문제/ 입력: \n";
				
				cin >> st3_in;
				
				if(strcmp(st3_in, "홀") == 0 && this->st3_ran == 0){
					this->st_check = 4;
				}else if(strcmp(st3_in, "짝") == 0 && this->st3_ran == 1){
					this->st_check = 4;
				}else{
					this->st_check = 0;
				}
				 
			}
		}
		
		game& stage4(){
			if(stage_check(4) == 1){
				// 스무고개, 기회 3번 , 1~15 랜덤  
				cout << "스테이지.4) 스무고개, 기회 3번 / 숫자는 0~15 중에서 입력: \n";
				this->st4_ran = rand() % 16;
				// 5
				// 3~ 7
				
				cin >> st4_in1;
				
				if(st4_in1 > this->st4_ran){
					cout << "숫자는 " << st4_in1 << " 이하에 있습니다.\n"; 
					
					cin >> st4_in2;
					if(st4_in2 > this->st4_ran){
						cout << "숫자는 " << st4_in2 << " 이하에 있습니다.\n";
						cin >> st4_in3;
						if(st4_in2 == this->st4_ran){
							this->st_check = 5;
							gamecomplete();
						}else{
							this->st_check = 0;
						}
						
					}else{
						this->st_check = 0;
					}
				}else{
					this->st_check = 0;
				}
				
				
				
				cout << "스무고개 숫자는 " << this->st4_ran << "이었습니다 \n";
				
				
				
				 
			}
		}
		
		
};

int main(){
	srand((unsigned)time(NULL));
	game gm;
	
//	gm.test();
	gm.start().stage2().stage3().stage4();
	
} 
