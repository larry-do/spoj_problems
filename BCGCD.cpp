#include <iostream>
using namespace std;
long long int ucln(long long int a, long long int b){
	if(!a) return b;
	return ucln(b%a, a);
}
int main(){
	long long int m, n;
	cin>>m>>n;
	while(m && n){
		long long int tmp = ucln(m, n);
		cout<<tmp<<" "<<n/tmp*m<<endl;
		cin>>m>>n;
	}
	return 0;
}