#include <stdio.h>
int main()
{
	int a[5] = {0}; scanf("%ld%ld%ld%ld", &a[0], &a[1], &a[2], &a[3]);
	int b[5] = {0};
	int i, j;
	for(i = 0; i < 4; i++){
		if(a[i] != -1){
			for(j = i+1; j < 4; j++){
				if(a[i] == a[j]){
					b[i]++;
					a[j] = -1;
				}
			}
		}
	}
	printf("%ld", b[0]+b[1]+b[2]+b[3]);
    return 0;
}