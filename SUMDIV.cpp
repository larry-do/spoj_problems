#include <iostream>
using namespace std;
int main(){
	int n; cin>>n;
	long long int a[n];
	for(int i = 0; i < n; i++){
		cin>>a[i];
	}
	for(int i = 0; i < n; i++){
		long long int sum = 0;
		long long int k = 1;
		while((a[i] / k) > k){
			if(a[i]%k==0){
				sum+=(k + a[i]/k);
			}
			k++;
		}
		if(k*k == a[i]) sum+=k;
		cout<<sum<<endl;
	}
	return 0;
}