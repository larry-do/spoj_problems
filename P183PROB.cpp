// not accepted
#include <iostream>
#include <algorithm>
using namespace std;
struct Day{
	long int k, m;
};
bool compare(Day x, Day y){
	long int tmp1 = (2*x.k > x.m) ? (x.m - x.k) : x.k;
	long int tmp2 = (2*y.k > y.m) ? (y.m - y.k) : y.k;
	return tmp1 > tmp2;
}
int main(){
	long int n, f; cin>>n>>f;
	Day a[n];
	long long int res = 0;
	for(long int i = 0; i < n; i++){
		cin>>a[i].k>>a[i].m;
	}
	sort(a, a+n, compare);
	for(long int i = 0; i < f; i++){
		res += min(2*a[i].k, a[i].m);
		//cout<<a[i].k<<' '<<a[i].m<<endl;
	}
	for(long int i = f; i < n; i++){
		res += min(a[i].k, a[i].m);
		//cout<<a[i].k<<' '<<a[i].m<<endl;
	}
	cout<<res;
	return 0;
}