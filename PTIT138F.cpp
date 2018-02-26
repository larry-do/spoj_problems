#include <iostream>
#include <string>
using namespace std;
int main(){
	int t; cin>>t;
	for(int q = 0; q < t; q++){
		int m,n; cin>>m>>n;
		string str[m+2];
		for(int i = 1; i <= m; i++){
			cin>>str[i];
		}
		int a[m+2] = {0}, b[m+2];
		for(int i = 1; i<= m; i++){
			b[i] = i;
		}
		for(int i = 1; i <= n; i++){
			int x, y; cin>>x>>y;
			a[y] = x;
			b[x] = 0;
		}
		for(int i = 1; i <= m; i++){
			if(!a[i]){
				for(int j = 1; j <= m; j++){
					if(b[j]){
						a[i] = b[j];
						b[j] = 0;
						break;
					}
				}
			}
		}
		for(int i = 1; i <= m; i++){
			cout<<str[a[i]]<<" ";
		}
		cout<<endl;
	}
}