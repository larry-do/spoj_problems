#include<iostream>
#include<string>
using namespace std;
int main(void){
    int n = 0, a = 0, b = 0;
    string str;
    cin>>n>>str;
    for(int i = 0; i < n; i++){
        if(str[i] == 'A') b = 1 + (a<b?a:b);
        else a = 1 + (a<b?a:b);
    }
    cout<<a;
    return 0;
}
