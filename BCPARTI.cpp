#include <iostream>
using namespace std;
int n;
int f[1010];
int main(){
	int p; cin>>p;
	f[1] = 1; f[2] = 2;
	for(int q = 1; q <= p; q++){
		cin>>n;
		for(int i = 3; i <= n; i++){
			f[i] = 1;
			for(int j = 1; j<= i/2; j++){
				f[i]+=f[j];
			}
		}
		cout<<q<<' '<<f[n]<<endl;
	}
	return 0;
}