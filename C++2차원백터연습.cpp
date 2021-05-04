/*

n을 입력하면 n행 크기의 2차원 백터를 만들고
각 행 마다 열의 개수를 입력하며
열의 개수만큼 값을 입력하며
추가한 뒤 2차원 벡터를 출력하세요. 

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
    // 열 개수 저장
    cout << "각행의 열 개수를 입력: \n"; 
    for(i=0;i<n;i++){
        cin >> vec2[i];
    }
    
    // 열의 개수만큼 값 입력 
    cout << "각행마다 열의 개수만큼 값 입력: \n"; 
    for(i=0;i<n;i++){
        for(j=0;j<vec2[i];j++){
            int k;
            cin >> k; 
            vec[i].push_back(k);
        }
    }
    
    // 2차원 백터 출력
    cout << "\n\n";
    for(i=0;i<n;i++){
        for(j=0;j<vec2[i];j++){
            cout << vec[i][j] << " ";
        }
        cout << "\n";
    }
}
