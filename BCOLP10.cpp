#include <iostream>
#include <string>
#include <cmath>
using namespace std;
int main()
{
    string a, b;
    cin>>a>>b;
    int k_a[26] = {0};
    int k_b[26] = {0};
    for(int i = 0; i < a.length(); i++){
        k_a[a[i] - 'a']++;
    }
    for(int i = 0; i < b.length(); i++){
        k_b[b[i] - 'a']++;
    }
    long long int rs = 0;
    for(int i = 0; i < 26; i++){
        rs+=abs(k_a[i] - k_b[i]);
    }
    cout<<rs;
    return 0;
}