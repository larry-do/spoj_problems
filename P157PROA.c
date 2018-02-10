#include <stdio.h>
int main()
{
	int n; scanf("%d", &n);
	int i;
	for(i = 0; i < n; i++){
		int ppl; scanf("%d", &ppl);
		int a[1010] = {0};
		int j, k;
		for(j = 0; j < ppl; j++){
			scanf("%d", &k);
			a[k]++;
		}
		int idx;
		k = a[1000];
		for(j = 1000; j >= 1; j--){
			if(k <= a[j]){
				k = a[j];
				idx = j;
			}
		}
		printf("%d\n", idx);
	}
    return 0;
}