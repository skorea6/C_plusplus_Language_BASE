/*
	�ܼ��� ���� 
	���������� 4~5�� ����鼭
	
	�� ���������� ���� ��� �ٸ� ����������
	ü�̴��� �ɾ� �Ѿ�� ��� ���������� ������ �� 
	��ġ�� ������ ��.. . � ����� �������� 
	�ڵ带 �ۼ��غ�����.
	
	�̼���/ .... 
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
			cout << "���� ����\n";
			exit(1);
		}
		
		void gamecomplete(){
			cout << "���� ����\n";
			exit(1);
		}
		
		game& start(){
			cout << "������ �����մϴ�\n";	
		}
		
		
		game& stage2(){
			cout << "a1";
			if(stage_check(2) == 1){
				cout << "a2";
				// ���
				this->st2_a1 = rand() % 3;
				this->st2_n1 = rand() % 10;
				this->st2_n2 = rand() % 10;
				this->st2_n3 = rand() % 10;
				
				cout << "��������.2) ����� Ǫ���� : \n";
				
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
				// Ȧ¦  
				this->st3_ran = rand() % 2;
				
				cout << "��������.3) Ȧ¦ ����/ �Է�: \n";
				
				cin >> st3_in;
				
				if(strcmp(st3_in, "Ȧ") == 0 && this->st3_ran == 0){
					this->st_check = 4;
				}else if(strcmp(st3_in, "¦") == 0 && this->st3_ran == 1){
					this->st_check = 4;
				}else{
					this->st_check = 0;
				}
				 
			}
		}
		
		game& stage4(){
			if(stage_check(4) == 1){
				// ������, ��ȸ 3�� , 1~15 ����  
				cout << "��������.4) ������, ��ȸ 3�� / ���ڴ� 0~15 �߿��� �Է�: \n";
				this->st4_ran = rand() % 16;
				// 5
				// 3~ 7
				
				cin >> st4_in1;
				
				if(st4_in1 > this->st4_ran){
					cout << "���ڴ� " << st4_in1 << " ���Ͽ� �ֽ��ϴ�.\n"; 
					
					cin >> st4_in2;
					if(st4_in2 > this->st4_ran){
						cout << "���ڴ� " << st4_in2 << " ���Ͽ� �ֽ��ϴ�.\n";
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
				
				
				
				cout << "������ ���ڴ� " << this->st4_ran << "�̾����ϴ� \n";
				
				
				
				 
			}
		}
		
		
};

int main(){
	srand((unsigned)time(NULL));
	game gm;
	
//	gm.test();
	gm.start().stage2().stage3().stage4();
	
} 
