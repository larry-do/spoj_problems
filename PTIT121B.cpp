#include <iostream>
using namespace std;
int n;
int a[20] = {0};
long long power(long long n, long long k){
	if(k == 0) return 1;
	long long tmp = power(n, k/2);
	if(k & 1) return tmp*tmp*n;
	return tmp*tmp;
}
void show(){
	for(int i = n-1; i >= 0; i--){
		cout<<a[i];
	}
	cout<<endl;
}
int main(){
	cin>>n;
	long int k = power(2, n);
	int b[20];
	for(int i = 0; i < n; i++){
		b[i] = power(2, i);
	}
	long int m = 0;
	while(m <= k - 1){
		for(int i = 0; i < n; i++){
			if(m >= b[i]){
				a[i] = (a[i] == 0 ? 1:0);
				b[i]+=(power(2, i+1));
			}
		}
		show();
		m++;
	}
	return 0;
}