#include <stdio.h>
int main()
{
	int n; scanf("%d", &n);
	int x = 0;
	int i;
	char a[100];
	for(i = 0; i < n; i++){
		scanf("%s", a);
		if(a[0] == '+' || a[2] == '+') x++;
		if(a[0] == '-' || a[2] == '-') x--;
	}
	printf("%d", x);
    return 0;
}