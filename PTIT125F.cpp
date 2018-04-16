#include <bits/stdc++.h>
using namespace std;
int main(){
	long int n, a, b, down = 0, up = 0, mindown = INT_MAX, minup = INT_MAX;
	cin>>n;
	for(int i = 1; i <= n; i++){
		cin>>a>>b;
		up+=a; down+=b;
		minup = min(minup, a);
		mindown = min(mindown, b);
	}
	cout<<max(down + minup, up + mindown);
	return 0;
}