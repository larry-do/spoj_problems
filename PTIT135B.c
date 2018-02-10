#include <stdio.h>
int main()
{
	int n, L; scanf("%d%d", &n, &L);
	int res = 0, s = 0;
	int i;
	for(i = 0; i < n; i++){
		int a, b, c; scanf("%d%d%d", &a, &b, &c);
		res+=(a-s); s=a;
		int tmp = res%(b+c);
		if(tmp < b) res+=(b-tmp);
	}
	if(s < L) res+=(L-s);
	printf("%d", res);
    return 0;
}