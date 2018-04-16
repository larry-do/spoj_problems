#include <bits/stdc++.h>
using namespace std;
long int s[1000000];
char find(long int n, long int i){
	if(n <= s[i-1]) return find(n, i - 1);
	else n -= s[i-1];
	if(n == 1) return 'm';
	else if(n > 1 && n <= (i + 2)) return 'o';
	else return find(n - i - 2, i - 1);
}
int main(){
	long int n; cin>>n;
	long int i = 0; s[i] = 0;
	while(s[i++] < n){
		s[i] = s[i-1] * 2 + 2 + i;
	}
	cout<<find(n, i-1);
	return 0;
}