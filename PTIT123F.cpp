#include <iostream>
using namespace std;
int main(){
	int n; cin>>n;
	for(int i = 0; i < n; i++){
		int k; cin>>k;
		int a[k+1] = {0};
		for(int j = 2; j <= k; j++){
			for(int m = j; m <= k; m+=j){
				a[m] = !a[m];
			}
		}
		int sum = 0;
		for(int j = 1; j <= k; j++){
			sum+=a[j];
		}
		cout<<k-sum<<endl;
	}
	return 0;
}