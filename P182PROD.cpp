#include <iostream>
#include <cmath>
using namespace std;
bool isPrime(long long n){
	if(n == 2 || n == 3 || n == 5 || n == 7) return true;
	if(!(n % 2) || !(n % 3) || !(n % 5) || !(n % 7) || n < 2) return false;
	long long i = -1, sq = (long long)sqrt(n);
	do{
		i+=6;
		if(n % i == 0 || n % (i+2) == 0) break;
	}while(i <= sq);
	return i > sq;
}
void getStartNumber(long long &n, long long &m){
	if(m <= 2){
		cout<<"2 3 "; n-=2; m = 5; return;
	}
	if(m == 3){
		cout<<"3 "; n--; m = 5; return;
	}
	int mod = m % 6;
	if(mod == 5) return;
	else if(mod == 1){
		if(isPrime(m)){
			cout<<m<<' '; n--;
		}
		m+=4;
	}
	else if(mod == 0){
		if(isPrime(m+1)){
			cout<<m+1<<' '; n--;
		}
		m+=5;
	}
	else m = m + 6 - mod - 1;
}
int main(){
	long long n, m; cin>>n>>m;
	getStartNumber(n, m);
	while(n > 0){
		if(isPrime(m)){
			cout<<m<<' '; n--;
		}
		if(n == 0) break;
		if(isPrime(m + 2)){
			cout<<m + 2<<' '; n--;
		}
		m+=6;
	}
	return 0;
}