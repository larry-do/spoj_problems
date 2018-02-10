#include <iostream>
using namespace std;
int main()
{
    long long int n; cin>>n;
    if(n == 0) cout<<0;
    else if(n == 1) cout<<1;
    else{
        long long int a = 0, b = 1;
        for(long int i = 2; i <= n; i++){
            long long int t = a; a = b; b+=t;
            b = b % 1000000007;
        }
        cout<<b;
    }
    return 0;
}