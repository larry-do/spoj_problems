#include <iostream>
#include <cmath>
using namespace std;
int main(){
	int n, k; cin>>n>>k;
	int a[n];
	int sum = 0;
	for(int i = 0; i < n; i++){
		cin>>a[i];
		sum+=a[i];
	}
	if(float(sum) >= (float(k) - 0.5)*float(n)) cout<<0;
	else cout<<2*n*k - n - 2*sum;
	return 0;
}