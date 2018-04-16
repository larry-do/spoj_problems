#include <bits/stdc++.h>
using namespace std;
long int n;
long int a[100009];
int main(){
	scanf("%ld", &n);
	for(int i = 0; i < n; i++){
		scanf("%ld", &a[i]);
	}
	stack<long int> k;
	long int res = LONG_MIN;
	long int frontOfStack;
	for(int i = 0; i < n; i++){
		while(!k.empty() && a[i] < a[k.top()]){
			res = max(a[k.top()] - a[frontOfStack], res);
			k.pop();
		}
		k.push(i);
		if(k.size() == 1) frontOfStack = k.top();
	}
	res = max(a[k.top()] - a[frontOfStack], res);
	printf("%ld", res);
	return 0;
}