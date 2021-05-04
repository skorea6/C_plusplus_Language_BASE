#include <iostream>
#include <vector>

using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> vec[n];
    
    int i;
    for(i=0;i<n;i++){
        int a,b;
        cin >> a >> b;
        vec[i].push_back(a);
        vec[i].push_back(b);
    }
    
    // 크기가 작은거 -> 색 비교
    for(i=0;i<n;i++){
        
    }
}
