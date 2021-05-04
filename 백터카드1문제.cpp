/*
	deque µ¦
	push_front
	pop_front 
*/
#include <iostream>
#include <vector>
#include <deque>

using namespace std;
int main(){
	
	int n;
	cin >> n;
	
	deque<int> deq;
	
	for(int i=0;i<n;i++){
		deq.push_back(i+1);
	}
	
	while(deq.size() > 0){
		cout << deq[0] << " ";
		
		deq.pop_front();
		deq.push_back(deq[0]);
		deq.pop_front();
	}

}
