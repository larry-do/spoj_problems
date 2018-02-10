#include <iostream>
using namespace std;
int main()
{
    int n; cin>>n;
    short a[n];
    for(int i = 0; i < n; i++){
        cin>>a[i];
    }
    int result = 0;
    for(int i = 0; i < n-1; i++){
        if(a[i]!=a[i+1]) result++;
    }
    cout<<result;
    return 0;
}