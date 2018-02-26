#include <iostream>
using namespace std;
int main(){
	int t; cin>>t;
	int n; cin>>n;
	int time = 210;
	for(int i = 0; i < n; i++){
		int k; cin>>k;
		char c; cin>>c;
		if(time <= k){
			cout<<t;
			break;
		}
		time-=k;
		if(c == 'T'){
			if(t == 8) t = 1;
			else t++;
		}
	}
	return 0;
}