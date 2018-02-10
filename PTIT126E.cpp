#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main(){
    vector<string> v;
    string str;
    cin>>str;
    while(str != "#"){
        int y = 0,n = 0,p = 0,a = 0;
        for(char x : str){
            if(x == 'Y') y++;
            else if(x == 'N') n++;
            else if(x == 'P') p++;
            else if(x == 'A') a++;
        }
        if(a >= (str.length()+1)/2) v.push_back("need quorum");
        else{
            if(y > n) v.push_back("yes");
            else if(y == n) v.push_back("tie");
            else v.push_back("no");
        }
        cin>>str;
    }
    for(string s : v)
        cout<<s<<endl;
    return 0;
}