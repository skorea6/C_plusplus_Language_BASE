/*

n�� �Է��ϸ� n�� ũ���� 2���� ���͸� �����
�� �� ���� ���� ������ �Է��ϸ�
���� ������ŭ ���� �Է��ϸ�
�߰��� �� 2���� ���͸� ����ϼ���. 

*/

#include <iostream>
#include <vector>

using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> vec[n];
    vector<int> vec2(n);
    
    int i,j;
    // �� ���� ����
    cout << "������ �� ������ �Է�: \n"; 
    for(i=0;i<n;i++){
        cin >> vec2[i];
    }
    
    // ���� ������ŭ �� �Է� 
    cout << "���ึ�� ���� ������ŭ �� �Է�: \n"; 
    for(i=0;i<n;i++){
        for(j=0;j<vec2[i];j++){
            int k;
            cin >> k; 
            vec[i].push_back(k);
        }
    }
    
    // 2���� ���� ���
    cout << "\n\n";
    for(i=0;i<n;i++){
        for(j=0;j<vec2[i];j++){
            cout << vec[i][j] << " ";
        }
        cout << "\n";
    }
}
