#include <iostream>
#include <string>
using namespace std;
int main()
{
    int n; cin>>n;
    for(int i = 0; i < n; i++){
        string str; cin>>str;
        if(str.length()<2) cout<<0<<endl;
        else{
            if(str.substr(str.length()-2, 2) == "86") cout<<1<<endl;
            else cout<<0<<endl;
        }
    }
    return 0;
}