/*

n�� m�� �Է��� ��
���� nĭ, mĭ ũ����
���͸� �����ϰ�
���� ������ ��

ũ�Ⱑ ���� ���͸�
ũ�Ⱑ ū ������ ũ�Ⱑ
�� ������ ���� �Է��ϸ鼭
�ڿ� �߰��Ѵ�.

�� ����, 
���̰� �۾Ҵ� ������ ���� - ���̰� ū ���� ���� ���
 
*/

#include <iostream>
#include <string>
#include <vector> 

using namespace std;

int main(){
    int m,n;
    cin >> m >> n;
    
    vector<int> vec1(m);
    vector<int> vec2(n);
    
    int i;
    int sum_1=0,sum_2=0,result=0;
    
    // �� �Է�
    cout << "vec1 �Է�: ";
    for(i=0;i<m;i++){
        cin >> vec1[i];
    }
    
    cout << "vec2 �Է�: ";
    for(i=0;i<n;i++){
        cin >> vec2[i];
    } 
    
    if(m < n){
        int num = n-m;
        for(i=0;i<num;i++){
            int k;
            cin >> k;
            vec1.push_back(k);
        }
        
        for(i=0;i<vec1.size();i++){
            sum_1+=vec1[i];
        }
        for(i=0;i<vec2.size();i++){
            sum_2+=vec2[i];
        }
        result = sum_1 - sum_2;
    }else{
        int num = m-n;
        for(i=0;i<num;i++){
            int k;
            cin >> k;
            vec2.push_back(k);
        }
        
        for(i=0;i<vec1.size();i++){
            sum_1+=vec1[i];
        }
        for(i=0;i<vec2.size();i++){
            sum_2+=vec2[i];
        }
        
        result = sum_2 - sum_1;
    }
    
    cout << "vec1: ";
    for(i=0;i<vec1.size();i++){
        cout << vec1[i] << " ";
    }
    
    cout << "\nvec2: ";
    for(i=0;i<vec2.size();i++){
        cout << vec2[i] << " ";
    }
    
    cout << "\nsum1: " << sum_1 << " sum2: " << sum_2;
    cout << "\nresult: " << result;
    
}
