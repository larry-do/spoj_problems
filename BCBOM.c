#include <stdio.h>
int n = 0, m = 0;
char a[100][100];
int check(int x, int y){
	int i, j, sum = 0;
	for(i = -1; i <= 1; i++){
		for(j = -1; j <= 1; j++){
			if(x+i >= 0 && y+j >=0 && x+i < n && y+j < m && a[x+i][y+j] == '*'){
				sum++;
			}
		}
	}
	return sum;
}
int main()
{
	scanf("%d%d", &n, &m);
	while(m || n){
		int i, j;
		for(i = 0; i < n; i++){
			scanf("%s", &a[i]);
		}
		for(i = 0; i < n; i++){
			for(j = 0; j < m; j++){
				if(a[i][j] == '.'){
					a[i][j] = '0' + check(i, j);
				}
				printf("%c", a[i][j]);
			}
			printf("\n");
		}

		scanf("%d%d", &n, &m);
	}
    return 0;
}