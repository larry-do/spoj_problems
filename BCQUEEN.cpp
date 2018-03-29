#include <iostream>
using namespace std;
int n, res = 0;
int col[50], cheo_xuoi[50], cheo_nguoc[50];
void init(){
	cin>>n;
	for(int i = 1; i <= n; i++){
		col[i] = 1;
	}
	for(int i = 1; i <= 2*n; i++){
		cheo_xuoi[i] = 1;
		cheo_nguoc[i] = 1;
	}
}
void Try(int i){
	for(int j = 1; j<= n; j++){
		if(col[j] && cheo_xuoi[n + i - j] && cheo_nguoc[i + j - 1]){
			col[j] = 0; cheo_xuoi[n+i-j] = 0; cheo_nguoc[i+j-1] = 0;
			if(i == n) res++;
			else Try(i+1);
			col[j] = 1; cheo_xuoi[n+i-j] = 1; cheo_nguoc[i+j-1] = 1;
		}
	}
}
int main(){
	init();
	Try(1);
	cout<<res;
	return 0;
}