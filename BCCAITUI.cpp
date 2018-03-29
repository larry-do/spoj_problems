#include <iostream>
using namespace std;
int n, m;
int a[110], c[110]; 
int main(){
	cin>>n>>m;
	for(int i = 1; i <= n; i++){
		cin>>a[i]>>c[i];
	}
	int f[n+1][m+1];
	for(int i = 0; i <= m; i++){
		f[0][i] = 0;
	}
	for(int i = 1; i <= n; i++){
		for(int j = 0; j <= m; j++){
			f[i][j] = f[i-1][j];
			if(j >= a[i] && f[i-1][j-a[i]] + c[i] > f[i][j]){
				f[i][j] = f[i-1][j-a[i]] + c[i];
			}
		}
	}
	cout<<f[n][m];
	return 0;
}