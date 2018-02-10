#include <iostream>
using namespace std;
int main(){
    int n; cin>>n;
    for(int i = 0; i < n; i++){
        long long int k; cin>>k;
        int a = 10;
        while(k/a > 0){
            long long int tmp = k/a;
            int m =k/(a/10) - tmp*10;
            if(m>=5) tmp++;
            k = tmp * a;
            a*=10;
        }
        cout<<k<<endl;
    }
    return 0;
}
