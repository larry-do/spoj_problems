#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    char mx[n][n];
    for(int i = 0; i < n; i++){
        string str; cin>>str;
        for(int j = 0; j < n; j++){
            mx[i][j] = str[j];
        }
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
             if(mx[i][j] != '.' && (   (i>0&&i<n-1 && mx[i-1][j] == mx[i][j] && mx[i+1][j] == mx[i][j])
                                    || (j>0&&j<n-1 && mx[i][j-1] == mx[i][j] && mx[i][j+1] == mx[i][j])
                                    || (i>0&&j>0&&j<n-1&&i<n-1 && mx[i-1][j-1] == mx[i][j] && mx[i+1][j+1] == mx[i][j])
                                    || (i>0&&j>0&&j<n-1&&i<n-1 && mx[i-1][j+1] == mx[i][j] && mx[i+1][j-1] == mx[i][j]))){
                cout<<mx[i][j];
                return 0;
             }
        }
    }
    cout<<"ongoing";
    return 0;
}
