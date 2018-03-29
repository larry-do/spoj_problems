#include <iostream>
using namespace std;
int n, k, b, c;
int a[15];
int x[15];
int res;
void init(){
	cin>>n>>k;
	b = n - 1; c = k - 1;
	res = 0;
	for(int i = 1; i <= n; i++){
		cin>>a[i];
	}
	for(int i = 1; i <= c; i++){
		x[i] = i;
	}
}
bool update(){
	long int sum[15] = {0};
	int s = 0, f = x[1];
	long int tmp = 0;
	for(int j = s + 1; j <= f; j++){
		tmp+=a[j];
	}
	sum[1] = tmp;
	for(int i = 2; i <= c; i++){
		s = x[i - 1]; f = x[i];
		tmp = 0;
		for(int j = s + 1; j <= f; j++){
			tmp+=a[j];
		}
		sum[i] = tmp;
	}
	s = x[c], f = n;
	tmp = 0;
	for(int j = s + 1; j <= f; j++){
		tmp+=a[j];
	}
	sum[k] = tmp;
	for(int i = 1; i < k; i++){
		if(sum[i] != tmp) return false;
	}
	return true;
}
bool next_combination(){
	int i = c;
	while(i > 0 && x[i] == b - c + i) i--;
	if(i > 0){
		x[i]++;
		for(int j = i+1; j <= c; j++){
			x[j] = x[j-1] + 1;
		}
	}
	else return false;
	return true;
}
int main(){
	init();
	if(update()) res++;
	while(next_combination()){
		if(update()) res++;
	}
	cout<<res;
	return 0;
}