#include<iostream>
#include<string>
using namespace std;
int main(){
    string str; cin>>str;
    int f = str.find("0");
    if(f == string::npos) str.erase(0, 1);
    else str.erase(f, 1);
    cout<<str;
    return 0;
}
