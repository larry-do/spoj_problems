#include<iostream>
#include<string>
using namespace std;
bool checkSudoku(int grid[9][9]){
    for (int i = 0; i < 9; i++) {
        int a = 0, b = 0, c = 0;
        for (int j = 0; j < 9; j++) {
            a ^= 1 << grid[i][j];
            b ^= 1 << grid[j][i];
            c ^= 1 << grid[i - i % 3 + j / 3][i % 3 * 3 + j % 3];
        }
        if (a != 1022 || b != 1022 || c != 1022)
            return false;
    }
    return true;
}
int main(void){
    int n;
    cin>>n;
    for(int q = 0; q < n; q++){
        int arr[9][9];
        string a[5];
        int k = 0;
        for(int i = 0; i < 9; i++){
            string str; cin>>str;
            for(int j = 0; j < 9; j++){
                arr[i][j] = str[j] - '0';
                if(arr[i][j] == 0){
                    a[k].push_back(i + '0');
                    a[k].push_back(j + '0');
                    k++;
                }
            }
        }
        int zheck[5][10] = {0};
        for(int i = 0; i < 5; i++){
            for(int j = 0; j < 9; j++){
                zheck[i][arr[a[i][0] - '0'][j]]++;
                a[i].push_back(arr[a[i][0] - '0'][j] + '0');
                zheck[i][arr[j][a[i][1] - '0']]++;
                a[i].push_back(arr[j][a[i][1] - '0'] + '0');
            }
        }
        for(int i = 0; i < 5; i++){
            a[i].resize(2);
            for(int j = 0; j < 10; j++){
                if(zheck[i][j] == 0)
                    a[i].push_back(j + '0');
            }
            if(a[i].length() == 3) arr[a[i][0] - '0'][a[i][1] - '0'] = a[i][2] - '0';
        }
        for(int i = 0; i < 5; i++){
            if(a[i].length() == 4){
                arr[a[i][0] - '0'][a[i][1] - '0'] = a[i][2] - '0';
                if(checkSudoku(arr)) break;
                arr[a[i][0] - '0'][a[i][1] - '0'] = a[i][3] - '0';
            }
        }
        if(!checkSudoku(arr)) cout<<"Could not complete this grid."<<endl<<endl;
        else {
            for(int i = 0; i < 9; i++){
                for(int j = 0; j < 9; j++){
                    cout<<arr[i][j];
                }
                cout<<endl;
            }
            cout<<endl;
        }
    }
    return 0;
}
