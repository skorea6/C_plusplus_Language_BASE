/*
    C++ 배열
    
    vector
*/

#include <iostream>
#include <string> 
#include <vector>
using namespace std;

int main(){
    vector<int> vec; // 빈 백터
    // 값을 추가 해주어야 한다.
    int x; 
    cin >> x;
    vec.push_back(x);
    
    for(int i=0;i<vec.size();i++){
        cout << vec[i] << '';        
    }
    
    // 5칸 크기의 백터
    // 5칸에 모두 1000으로 초기화 
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
