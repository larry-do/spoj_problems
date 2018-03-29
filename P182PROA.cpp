#include <cstdio>
int main(){
	int c, v0, v1, a, l, v;
	scanf("%d%d%d%d%d", &c, &v0, &v1, &a, &l);
	int res = 0;
	while(c > 0){
		v = v0 + res*a;
		if(v > v1) v = v1;
		res++;
		if(v >= c) break;
		c = c - v + l;
	}
	printf("%d", res);
	return 0;
}