#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
long int find(string a, string b){
	int m = a.length(), n = b.length();
	int f[m+1][n+1];
	for(int i = 0; i <= m; i++){
		for(int j = 0; j <= n; j++){
			if(i == 0 || j == 0) f[i][j] = 0;
			else if(a[i-1] == b[j-1]) f[i][j] = f[i-1][j-1] + 1;
			else f[i][j] = max(f[i-1][j], f[i][j-1]);
		}
	}
	return f[m][n];
}
int main(){
	string a, b;
	cin>>a>>b;
	cout<<find(a, b);
	return 0;
}