#include <iostream>
using namespace std;
bool nextConbination(int a[], int k, int n){
    int i = k - 1;
    while(i >= 0 && a[i] == n-k+i+1) i--;
    if(i>=0){
        a[i]++;
        for(int j = i + 1; j < k; j++){
            a[j] = a[i]+j-i;
        }
    }
    else return true;
    return false;
}
void show(int a[], int k){
    for(int i = 0; i < k; i++){
        cout<<a[i]<<' ';
    }
    cout<<endl;
}
int main()
{
    int n; cin>>n;
    int k; cin>>k;
    int a[k];
    for(int i = 0; i < k; i++){
        a[i] = i + 1;
    }
    show(a, k);
    while(!nextConbination(a, k, n)){
        show(a, k);
    }
    return 0;
}