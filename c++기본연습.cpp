/*

���ڿ� 2���� �����ϰ� �Է��� ��

ª�� ���ڿ��� ���̰� �� ���ڿ��� ���̰� �ɶ����� 
���̰� ª�� ���ڿ���
���̰� �� ���ڿ��� ù��° ������
���ʴ�� �ڿ� �߰��� �ϰ� �� ���ڿ��� ����ϼ���.

 
hello helloworld

hellohello
helloworld

*/

#include <iostream>
#include <string>
#include <string.h> 

using namespace std;

int main(){
    string m,n;
    cin >> m >> n;
    
    int i;
    
    if(m.size() < n.size()){
        int k = n.size()-m.size();
        for(i=0;i<k;i++){
            m.push_back(n[i]);
        }
    }
    else{
        int k = m.size()-n.size();
        for(i=0;i<k;i++){
            n.push_back(m[i]);
        }
    }
    
    cout << "m: " << m << " n: " << n;
}


