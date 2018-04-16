#include <bits/stdc++.h>
using namespace std;
long int n, k;
long long res = 0;
queue<long int> kiu[21];
int main(){
	cin>>n>>k;
	for(long int i = 1; i <= n; i++){
		string s; cin>>s;
		int len = s.length();
		while(!kiu[len].empty() && (kiu[len].front() + k) < i) kiu[len].pop();
		res += kiu[len].size();
		kiu[len].push(i);
	}
	cout<<res;
	return 0;
}