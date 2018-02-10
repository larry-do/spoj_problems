#include <iostream>
#include<cmath>
int isPrime(long long int n);
using namespace std;
int main() {
    long long int n;
	cin>>n;
	cout<<(isPrime(n)?"YES":"NO");
	return 0;
}
int isPrime(long long int n){
    if(n==2||n==3) return 1;
    if(n%2==0||n%3==0||n<2) return 0;
    long long int i=-1, sqrtOf_n=(int)sqrt(n); // giảm bớt thời gian tính toán sqrt
    do{
        i+=6;
        if((n%i==0)||(n%(i+2)==0)) break;
    }while(i<=sqrtOf_n);
    return (i>sqrtOf_n);
}