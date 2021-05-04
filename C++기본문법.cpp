#include <iostream> // C++ 입출력 헤더파일 
#include <stdio.h> // C 입출력 헤더파일 

// 네임스페이스를 프로그램 자체에 포함시키기
using namespace std;    //  

int main(){
    // printf() C 언어 출력함수
    // cout C++ 출력 함수
     
    
    // C++에서는 함수나 명령어들이 헤더파일 외에 네임스페이스라는 공간에
    // 포함되어있다.
    // 네임스페이스를 포함시켜주어야 한다.
    
    // 네임스페이스의 기본값이 std 이다.
    
    // 네임스페이스를 포함시키는 방법
    // 함수는 명령어 앞에 std:: 
     
    int n,m; 
    //cin >> n; // cin >> 입력할데이터
    cin >> n >> m; // 2개 같이 입력
    
    //cout << n; // n값 출력
     
    cout << "값: " << n; // 문장, 데이터를 구분시킴
     
    // scanf() C 언어 입력함수
    // cin C++ 입력함수

    return 0;
}
