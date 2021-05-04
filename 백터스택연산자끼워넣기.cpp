/*
+ x
3 4 5
3+4x5 = 23
3x4+5 = 22

*/

#include <iostream>
#include <vector>

using namespace std;

int main(){
	int n;
	cin >> n;
	
	vector<int> sta;
	
	for(int i=0;i<n;i++){
		int p;
		cin >> p;
		sta.push_back(p);
	}
	
	int plus=0;
	int minus=0;
	int gop=0;
	int nanu=0;
	
	cin >> plus >> minus >> gop >> nanu;
	
	int size = sta.size();
	int max1 = 1;
	int max2 = sta[size-gop-plus-nanu-1];
	int max3 = sta[0];
	int min = 0;
	
	for(int j=0;j<gop+1;j++){
		max1 = max1 * sta[size-j-1];
	}
	cout << max1 << "\n";
	
	
	if(nanu>0){
		for(int s=nanu-1;s>=0;s--){
			max2 = max2 / sta[size-gop-plus-s];
			// 6-1-2 = 3
			// 3-1 = 2
			// 3+0 = 3
		}
	}else{
		max2=0;
	}
	cout << max2 << "\n";
	
	
	// minus 3°³ 012
	// 1-2-3-4
	if(minus>0){
		for(int p=0;p<minus-1;p++){
			max3 = max3 - sta[p+1];
		}
		max3 = max3 - max2;
	}else{
		max3=0;
	}
	cout << max3 << "\n";
	
	
	
	// 3
	if(plus>0){
		for(int q=0;q<plus;q++){
			if(nanu==0 && q>=0){
				max3 = max3 + sta[size-gop-plus+q-1];
			}else if(nanu!=0 && q>0){
				max3 = max3 + sta[size-gop-plus+q-1];
			}
		}
		cout << max3 << "\n";
	}
	max3 = max3 + max1;
	
	cout << max3;
	
}
