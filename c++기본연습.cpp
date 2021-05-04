/*

문자열 2개를 선언하고 입력한 뒤

짧은 문자열의 길이가 긴 문자열의 길이가 될때까지 
길이가 짧은 문자열에
길이가 긴 문자열의 첫번째 값부터
차례대로 뒤에 추가를 하고 각 문자열을 출력하세요.

 
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


