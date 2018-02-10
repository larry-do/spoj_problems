#include <iostream>
#include <map>
using namespace std;
int main()
{
	map<string, int> k;
	int n; cin>>n;
	int res = 0;
	for(int i = 0; i < n; i++){
		string s; cin>>s;
		k[s]++;
		if(i+1-k[s] < k[s] - 1) res++;
	}
	cout<<res;
	return 0;
}