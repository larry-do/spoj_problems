#include <iostream>
using namespace std;
int a[1000] = {0}, n, k;
void init(){
	for(int i = 1; i <= n; i++){
		a[i] = 0;
	}
}
void show_next_bit(){
	for(int i = 1; i <= n; i++){
		cout<<a[i];
	}
	cout<<endl;
}
bool next_bit(){
	int j = n;
	while(j > 0 && a[j] == 1){
		a[j] = 0;
		j--;
	}
	if(j > 0) a[j] = 1;
	else return false;
	return true;
}
bool check(){
	int count = 0;
	for(int i = 1; i <= n; i++){
		if(a[i]) count++;
	}
	if(count == k) return true;
	else return false;
}
int main(){
	int m; cin>>m;
	for(int i = 0; i < m; i++){
		cin>>n>>k;
		init();
		if(check()) show_next_bit();
		while(next_bit()){
			if(check()) show_next_bit();
		}
	}
	return 0;
}