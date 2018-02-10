#include <stdio.h>
int main()
{
	int s, i; scanf("%d", &s);
	for(i = 0; i < s; i++){
		double n, k, m;
		scanf("%lf%lf%lf", &n, &k, &m);
		int y = 0;
		while(n < m){
			y++;
			n+=(n*k/100);
		}
		printf("%d\n", y);
	}
    return 0;
}