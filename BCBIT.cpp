#include <cstdio>
#include <cstring>
#include <bitset>
#include <string>
#define Loop(i, s, f) for(int i = s; i <= f; i++)
#define ReverseLoop(i, s, f) for(int i = s; i >= f; i--)
long long res[109][109];
void DynamicProgramming(){
	memset(res, 0, sizeof(res));
	Loop(i, 1, 100) {
		res[i+1][i] = 1;
		res[i+2][i] = 2;
	}
	res[1][0] = 2; res[2][0] = 3;
	Loop(i, 3, 100) res[i][0] = res[i-1][0] + res[i-2][0];
	Loop(i, 4, 100){
		Loop(j, 1, 99){
			if(j <= i-3){
				res[i][j] = res[i-1][j];
				Loop(u, 0, j) res[i][j] += res[i-2-j+u][u];
			}
		}
	}
}
int main(){
	DynamicProgramming();
	int test; scanf("%d", &test);
	while(test--){
		int a, n, k; scanf("%d%d%d", &a, &n, &k);
		printf("%d %lld\n", a, res[n][k]);
	}
	return 0;
}
