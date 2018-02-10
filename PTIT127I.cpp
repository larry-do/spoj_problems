#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    while(n != 0){
        int a[n][6];
        int b[50] = {0};
        for(int i = 0; i < n; i++){
            for(int j = 0; j < 6; j++){
                cin>>a[i][j];
                b[a[i][j]]++;
            }
        }
        for(int i = 1; i <= 49; i++){
            if(b[i] == 0){
                cout<<"No"<<endl;
                b[0] = 1;
                break;
            }
        }
        if(b[0] != 1) cout<<"Yes"<<endl;
        cin>>n;
    }
    return 0;
}
