/*
Ŭ���� ���ο�
���� x�� �ϳ� �����Ͽ� 0���� �ʱ�ȭ �� �� 

�Է��� ���� �ش� ���� ���ϴ� �Լ� 
�Է��� ���� �ش� ���� ����  �Լ� 
�Է��� ���� �ش� ���� ���ϴ� �Լ� 
x���� ����ϴ� �Լ�  
�� �����ϰ� ���� �ѹ��� ȣ���Ͽ�
�������� �� 3���� �����Լ��� ȣ���� ����� ��µǵ��� ���α׷��� �ۼ��ϼ���. 
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


