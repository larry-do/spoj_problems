#include <iostream>
using namespace std;
int main(){
    int m,n,k;
    cin>>m>>n>>k;
    int rs = 0;
    while(true){
        if(rs*2 <= m && rs <= n && rs*3 <= (m+n)-k) rs++;
        else break;
    }
    cout<<rs - 1;
    return 0;
}
