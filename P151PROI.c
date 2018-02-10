#include <stdio.h>
int main()
{
	int n; scanf("%d", &n);
	long int i, k;
	for(i = 0; i < n; i++){
		scanf("%ld", &k);
		int rs = k % 9;
		if(rs == 0) rs = 9;
		printf("%ld\n", rs);
	}
    return 0;
}