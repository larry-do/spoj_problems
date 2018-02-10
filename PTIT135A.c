#include <stdio.h>
int main()
{
	int a, b, c; scanf("%d%d%d", &a, &b, &c);
	int x[6];
	int max = -1, min = 101, i;
	for(i = 0; i < 6; i++){
		scanf("%d", &x[i]);
		min = min < x[i] ? min:x[i];
		max = max > x[i] ? max:x[i];
	}
	int s[101] = {0};
	int sum = 0;
	for(i = min; i <= max; i++){
		if(i >= x[0] && i <= x[1]) s[i]++;
		if(i >= x[2] && i <= x[3]) s[i]++;
		if(i >= x[4] && i <= x[5]) s[i]++;
	}
	for(i = min; i < max; i++){
		int rs;
		if(s[i] <= s[i+1]) rs = s[i];
		else rs = s[i+1];
		if(rs==1) sum+=a;
		else if(rs == 2) sum+=b*2;
		else if(rs == 3) sum+=c*3;
	}
	printf("%d", sum);
    return 0;
}