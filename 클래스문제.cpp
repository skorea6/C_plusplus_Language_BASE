// � ��ҵ��� ������ �ű⼭ ���񽺸� �ްų�
// � �ൿ�� ���ϴ� ���� Ŭ���� ������ �����ϰ�
// �����ϴ� ���α׷��� �ۼ��ϼ���. 

#include <iostream>
#include <cstring>

using namespace std;

class location{
	public:
		char name[20];
		int distance;
		int time;
		
		void now(){
			cout << "������ġ: " << name << "/ �����κ��� �Ÿ�: " <<  distance << "km / �ҿ�ð�: " << time << "��";
		}
		
};

class roomesacpe{
	public:
		char name[20];
		
		void start(){
			cout << name << " ������ �����մϴ�.\n ";
			step1();
		}
		
		void gameover(int step){
			cout << step << "�ܰ迡�� ���� ����\n";
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
			cout << "6.25 ������ �Ͼ ������?\n";
			cin >> k;
			
			if(k==1950){
				step3();
			}else{
				gameover(2);
			}
		}
		
		void step3(){
			string k;
			cout << "�� �� ������� �����?\n";
			cin >> k;
			
			if(k=="���ξ���"){
				cout << "��� ���� ���� \n";
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
			cout << name << " ����ǥ \n";
			cout << "1: ���: 1900��\n"; 
			cout << "2: �������꽺: 800��\n"; 
			cout << "3: ������: 1200��\n"; 
		}
		
		void order(){
			menu();
			
			cout << "(���� �� 5000��)�ֹ��� ��ȣ �Է�\n";
			
			
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
			
			cout << "����\n";
		}
	
};

class school{
	public:
		char name[20];
		void start(){
			cout << name << "�б��Դϴ�.\n";
			class1();
		}
		
		void youout(){
			cout << name << "�б����� ���еǾ����ϴ�\n ";
		}
		
		void over(int next){
			cout << "���� �޾ƾ��մϴ�. �б��̸��� 10�� ������.\n";
			
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
			cout << "1���� �Դϴ�. \n ";
			cout << "���� �߳���? (������ 1��, �������� 2��)\n";
			int k;
			cin >> k;
			if(k==1){
				class2();
			}else{
				over(2);
			}
		}
		
		void class2(){
			cout << "2���� �Դϴ�. \n ";
			cout << "���� �����Դϴ� deserted ����?\n";
			string a;
			if(a=="����̾���"){
				finish();
			}else{
				over(0);
			}
		}
		
		void finish(){
			cout << name << "�б��� �������ϴ�\n";
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
		
		cout << "\n��ġ �̸�:";
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
