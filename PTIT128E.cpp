#include<iostream>
using namespace std;
int main(void){
    int n, t1, t2, t3;
    cin>>n>>t1>>t2>>t3;
    while(n|t1|t2|t3){
        int tick = 2*n + n - 1;
        if(t2>t1) tick+=(n+t2-t1);
        else tick+=(2*n + t2-t1);
        if(t3>t2) tick+=(n-t3+t2);
        else tick+=(t2-t3);
        cout<<tick<<endl;
        cin>>n>>t1>>t2>>t3;
    }
    return 0;
}
