#include <iostream>
#include <string>
using namespace std;
long long int base62to10(string str){
    long long int k = 0;
    for(int i = str.length() - 1; i >= 0; i--){
        if(str[i] >= '0' && str[i] <= '9') k += str[i] - '0';
        if(str[i] >= 'A' && str[i] <= 'Z') k += str[i] - 'A' + 10;
        if(str[i] >= 'a' && str[i] <= 'z') k += str[i] - 'a' + 36;
    }
    return k;
}
int main(){
    string str; cin>>str;
    while(str != "end"){
        if(base62to10(str) % 61 == 0) cout<<"yes"<<endl;
        else cout<<"no"<<endl;
        cin>>str;
    }
    return 0;
}
