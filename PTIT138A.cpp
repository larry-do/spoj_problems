#include <iostream>
using namespace std;
int main()
{
    long long int a, b, c;
    cin>>a>>b>>c;
    while(a && b && c){
        long long int aa = a*a, bb = b*b, cc = c*c;
        if(aa == bb + cc || bb == cc + aa || cc == bb + aa) cout<<"right"<<endl;
        else cout<<"wrong"<<endl;
        cin>>a>>b>>c;
    }
    return 0;
}