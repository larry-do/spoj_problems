#include <stdio.h>
long int n, m, k = 3;
long int a[100], b[3];
long int sum = 0;
void init(){
	scanf("%ld%ld", &n, &m);
	int i;
	for(i = 0; i < n; i++){
		scanf("%ld", &a[i]);
	}
	b[0] = 0; b[1] = 1; b[2] = 2;
}
int next_combination(){
	int i = k - 1;
	while(i >= 0 && b[i] == n - k + i) i--;
	if(i >= 0){
		b[i]++;
		int j = i+1;
		for(;j < k; j++){
			b[j] = b[j-1]+1;
		}
	}
	else return 0;
	return 1;
}
void calculation(){
	long int tmp = a[b[0]]+a[b[1]]+a[b[2]];
	if(tmp <= m && tmp > sum) sum = tmp;
}
int main()
{
	init();
	do{
		calculation();
	}while(next_combination());
	printf("%ld", sum);
    return 0;
}