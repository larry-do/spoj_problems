#include <iostream>
#include <string>
using namespace std;
int main(){
    string str;
    int n;
    cin>>n>>str;
    str.insert(0, "*");
    str.insert(str.length(), "*");
    int k = 2;
    for(int i = 0; i < str.length(); i++){
        if(str[i] == 'S' && str[i-1] != '*'){
             str.insert(i, "*");
             k++;
        }
        if(str[i] == 'S' && str[i+1] != '*') {
            str.insert(i+1, "*");
            k++;
        }
        if(str[i] == 'L' && str[i-1] == 'L' && str[i+1] == 'L') {
            str.insert(i+1, "*");
            k++;
        }
    }
    cout<<(k<n?k:n);
    return 0;
}