// đây là bài số catalan number. dùng để tính bài kiểu ntn.
// có thể thay W H là dấu mở đóng ngoặc
// đây là công thức truy hồi kiểu DP. có kiểu dùng tổ hợp a[n] = C(2n, n) - C(2n, n+1);
#include <bits/stdc++.h>
using namespace std;
long long a[31];
int main(){
	a[1] = 1;
	for(int i = 1; i <= 30; i++){
		a[i+1] = a[i] * (4*i + 2)/(i + 2);
	}
	int n; cin>>n;
	while(n != 0){
		cout<<a[n]<<endl;
		cin>>n;
	}
	return 0;
}