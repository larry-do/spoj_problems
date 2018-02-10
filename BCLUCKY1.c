#include <stdio.h>
int main()
{
	int a[11] = {0};
	char str[20];
	scanf("%s", str);
	char c = str[0];
	int k = 0;
	while(c != '\0'){
		a[c - '0']++;
		c = str[++k];
	}
	k = a[4] + a[7];
	if(k == 4 || k == 7) printf("YES");
	else printf("NO");
    return 0;
}