#include <iostream>
#include <string>
#include <regex>
using namespace std;
int main()
{
    int n; cin>>n;
    for(int i = 0; i < n; i++){
        string str; cin>>str;
        smatch m;
        regex e("0{1,}|1{1,}|2{1,}|3{1,}|4{1,}|5{1,}|6{1,}|7{1,}|8{1,}|9{1,}");
        while(regex_search(str, m, e)){
            for(auto x:m){
                cout<<x.str().length()<<x.str()[0];
            }
            str = m.suffix().str();
        }
        cout<<endl;
    }
    return 0;
}