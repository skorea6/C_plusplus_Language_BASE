/*
부분 문자열
string str;
str.substr(2, 5); // str의 2번칸부터 5글자

문자열 2개를 입력하고
둘중 하나의 문자열이 다른 문자열에 속하면 "yes"
아니면 "no"
*/

#include <iostream>
#include <string> 

using namespace std;

int main(){
    string m,n;
    cin >> m >> n;
    
    int i;
    string check="no";
    
    if(m.size() < n.size()){
        for(i=0;i<n.size();i++){
            if(n.substr(i,m.size()) == m){
                check = "yes";
            }
        }
    }else{
        for(i=0;i<m.size();i++){
            if(m.substr(i,n.size()) == n){
                check = "yes";
            }
        }
    }
    
    cout << check;
} 
