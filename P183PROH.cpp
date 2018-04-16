#include <iostream>
#include <algorithm>
using namespace std;
int main(){
	long int m = 0, n = 0, k = 0; cin>>m>>n>>k;
	int a[m+1] = {0}, b[n+1] = {0}, c[k+1] = {0}; // để như thế này c++4.3.2 sẽ lỗi
	long int mLen = 0, nLen = 0, kLen = 0;
	for(int i = 1; i <= m; i++){
		cin>>a[i]; mLen+=a[i];
	}
	for(int i = 1; i <= n; i++){
		cin>>b[i]; nLen+=b[i];
	}
	for(int i = 1; i <= k; i++){
		cin>>c[i]; kLen+=c[i];
	}
	long int i = 1, j = 1, e = 1;
	while(1){
		//cout<<mLen<<nLen<<kLen<<endl;
		if(nLen == kLen && kLen == mLen) break;
		long int len = min(mLen, min(nLen, kLen));
		if(mLen > len) mLen-=(a[i++]);
		if(nLen > len) nLen-=(b[j++]);
		if(kLen > len) kLen-=(c[e++]);
	}
	cout<<mLen;
	return 0;
}