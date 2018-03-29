#include <iostream>
#include <algorithm>
using namespace std;
int main(){
	long int n; cin>>n;
	long int a[n+10];
	for(long int i = 0; i < n; i++){
		cin>>a[i];
	}
	sort(a, a+n);
	long int m = 0, k = 0, g = 0;
	long int x = a[0], y = 0;
	while(x == a[y] && y < n){y++; m++;}
	x = a[y];
	while(x == a[y] && y < n){y++; k++;}
	x = a[y];
	while(x == a[y] && y < n){y++; g++;}
	if(m >= 3) cout<<m*(m-1)*(m-2)/6;
	else if(m == 2){
		cout<<k;
	}
	else{
		if(k >= 2) cout<<k*(k-1)/2;
		else cout<<g;
	}
	return 0;
}