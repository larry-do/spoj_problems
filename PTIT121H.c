#include <stdio.h>
long int a[1110001];
char s[110000];
long int n, k;
int main()
{
	scanf("%ld%ld%s", &n, &k, s);
	long int high = 1110000, low = high - n + 1;
	long int i;
	for(i = high; i >= low; i--){
		a[i] = high - i;
	}
	i = 0;
	while(s[i] != '.'){
		if(s[i] == 'A'){
			low--;
			a[low] = a[high];
			high--;
		}
		else{
			low--;
			a[low] = a[high - 1];
			a[high - 1] = a[high];
			high--;
		}
		i++;
	}
	printf("%ld %ld %ld", a[high - k + 1], a[high - k], a[high - k - 1]);
    return 0;
}