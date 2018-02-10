#include<iostream>
#include<string>
#include<vector>
using namespace std;
int main(void){
    string str;
    cin>>str;
    vector<int> a, b;
    int found = str.find("))", 0);
    while(found != string::npos){
        a.push_back(found);
        found = str.find("))", found + 1);
    }
    found = str.find("((", 0);
    while(found != string::npos){
        b.push_back(found);
        found = str.find("((", found + 1);
    }
    int k = 0;
    for(int i = 0; i < a.size(); i++){
        for(int j = 0; j < b.size(); j++){
            if(a[i] > b[j]) k++;
            else break;
        }
    }
    cout<<k;
    return 0;
}
