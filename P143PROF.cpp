#include <bits/stdc++.h>
#define MOD 123456789
using namespace std;
long long power(long long a, long long b){
	if(b == 0) return 1;
	a = a % MOD;
	long long tmp = power(a, b/2);
	if(b&1) return (tmp*tmp*a) % MOD;
	else return (tmp*tmp) % MOD;
}
int main(){
	long long n; cin>>n;
	cout<<power(2, n-1);
	return 0;
}