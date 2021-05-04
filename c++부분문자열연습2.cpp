/*
    
    3개의 문자열을 입력한 뒤
    
    각 문자열이 다른 문자열의 부분문자열이면 yes
    아니면 no를 출력
    
    happy
    happyworldhello
    wolrdhello
    
    yes
    no
    yes
*/

#include <iostream>
#include <string>

using namespace std;

int main(){
    string m,n,s;
    cin >> m >> n >> s;
    
    string ckm = "no";
    string ckn = "no";
    string cks = "no";
    
    // n에 m,s의 값이 들어있나.
    int i;
    for(i=0;i<m.size();i++){
        if(m.substr(i,n.size()) == n){
            ckn = "yes";
        }
        if(m.substr(i,s.size()) == s){
            cks = "yes";
        }
    }
    
    for(i=0;i<n.size();i++){
        if(n.substr(i,m.size()) == m){
            ckm = "yes";
        }
        if(n.substr(i,s.size()) == s){
            cks = "yes";
        }
    } 
    
    for(i=0;i<s.size();i++){
        if(s.substr(i,m.size()) == m){
            ckm = "yes";
        }
        if(s.substr(i,n.size()) == n){
            ckn = "yes";
        }
    } 
    
    
    cout << "m: " << ckm << " n: " << ckn << " s: " << cks;
}
 
