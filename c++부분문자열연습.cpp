/*
�κ� ���ڿ�
string str;
str.substr(2, 5); // str�� 2��ĭ���� 5����

���ڿ� 2���� �Է��ϰ�
���� �ϳ��� ���ڿ��� �ٸ� ���ڿ��� ���ϸ� "yes"
�ƴϸ� "no"
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
