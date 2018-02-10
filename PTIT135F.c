#include <stdio.h>
int checkStatus(char a[][1000], int x, int y){
	int i, sum = 0;
	for(i = 0; i < 4; i++){
		if(a[i+x][y] == '*') sum++;
	}
	return sum;
}
int main()
{
	int n, m; scanf("%d%d", &n, &m);
	char a[1000][1000];
	int i, j;
	for(i = 0; i < 5*n+1; i++){
		scanf("%s", a[i]);
	}
	int b[5] = {0};
	for(i = 0; i < n; i++){
		for(j = 0; j < m; j++){
			int x = 5*i+1, y = 5*j+1;
			b[checkStatus(a, x, y)]++;
		}
	}
	for(i = 0; i < 5; i++){
		printf("%d ", b[i]);
	}
    return 0;
}