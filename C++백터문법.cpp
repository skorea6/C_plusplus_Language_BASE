/*
    C++ �迭
    
    vector
*/

#include <iostream>
#include <string> 
#include <vector>
using namespace std;

int main(){
    vector<int> vec; // �� ����
    // ���� �߰� ���־�� �Ѵ�.
    int x; 
    cin >> x;
    vec.push_back(x);
    
    for(int i=0;i<vec.size();i++){
        cout << vec[i] << '';        
    }
    
    // 5ĭ ũ���� ����
    // 5ĭ�� ��� 1000���� �ʱ�ȭ 
    vector<int> vec2(5,1000);
    // [][][][][]
    
    for(int i=0;i<5;i++){
        cin >> vec2[i];
    }
    vec2.push_back(100);
    // [1][2][3][4][5][100]
    
    
    //
    return 0; 
}
