#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int n; cin>>n;
    long long int rs = 0;
    for(int i = 1; i <= n; i++){
        rs += (long long int)pow(2, i);
    }
    cout<<rs<<endl;
    return 0;
}