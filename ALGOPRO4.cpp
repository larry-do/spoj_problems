#include<iostream>
#include<string>
using namespace std;
int main(){
    string str; cin>>str;
    while(str.length() % 3 != 0) str.insert(0, 1, '0');
    for(int i = 0; i < str.length(); i+=3){
        if(str.substr(i, 3) == "000") cout<<0;
        if(str.substr(i, 3) == "001") cout<<1;
        if(str.substr(i, 3) == "010") cout<<2;
        if(str.substr(i, 3) == "011") cout<<3;
        if(str.substr(i, 3) == "100") cout<<4;
        if(str.substr(i, 3) == "101") cout<<5;
        if(str.substr(i, 3) == "110") cout<<6;
        if(str.substr(i, 3) == "111") cout<<7;
    }
    return 0;
}
