/*

n과 m을 입력한 뒤
각각 n칸, m칸 크기의
백터를 선언하고
값을 엽력한 뒤

크기가 작은 벡터를
크기가 큰 벡터의 크기가
될 때까지 값을 입력하면서
뒤에 추가한다.

그 다음, 
길이가 작았던 백터의 총합 - 길이가 큰 백터 총합 출력
 
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
    
    // 값 입력
    cout << "vec1 입력: ";
    for(i=0;i<m;i++){
        cin >> vec1[i];
    }
    
    cout << "vec2 입력: ";
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
