#include <bits/stdc++.h>
using namespace std;
long int n;
long int a[300009];
int main(){
	cin>>n;
	for(int i = 0; i < n; i++) cin>>a[i];
	sort(a, a+n);
	cout<<a[(n+1)/2-1];
	return 0;
}