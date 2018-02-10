#include <iostream>
#include<cmath>
using namespace std;
int isPrime(int n);
int main() {
	long a;
    cin>>a;
	for(long i=2;i<=sqrt(a);i++){
        if(a%i==0){
            if(isPrime(i)){
                int k=0;
                while(a%i==0){
                    k++;
                    a/=i;
                }
                cout<<i<<' '<<k<<endl;
            }
        }
    }
    if(a!=1&&isPrime(a)) cout<<a<<' '<<1;
	return 0;
}
int isPrime(int n){
    if(n==2||n==3) return 1;
    if(n%2==0||n%3==0||n<2) return 0;
    int i=-1, sqrtOf_n=(int)sqrt(n); 
    do{
        i+=6;
        if((n%i==0)||(n%(i+2)==0)) break;
    }while(i<=sqrtOf_n);
    return (i>sqrtOf_n);
}