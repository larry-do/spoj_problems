#include <iostream>
#include <string>
using namespace std;
int main(){
    string bin;
    cin>>bin;
    while(bin.length()%3!=0) bin = "0" + bin;
    for(int i = 0; i < bin.length(); i+=3){
        string tmp = bin.substr(i, 3);
        if(tmp == "000") cout<<0;
        if(tmp == "001") cout<<1;
        if(tmp == "010") cout<<2;
        if(tmp == "011") cout<<3;
        if(tmp == "100") cout<<4;
        if(tmp == "101") cout<<5;
        if(tmp == "110") cout<<6;
        if(tmp == "111") cout<<7;
    }
    return 0;
}
