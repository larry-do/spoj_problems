#include <stdio.h>
int a[20] = {0};
int b, n, smax = 0;
int yrn[20] = {0};
int next_binary(){
	int i = n - 1;
	while(i>=0 && yrn[i] == 1){
		yrn[i] = 0;
		i--;
	}
	if(i>=0) yrn[i] = 1;
	else return 0;
	return 1;
}
void calulate(){
	int i, s = 0;
	for(i = 0; i < n; i++){
		s+=(yrn[i]*a[i]);
	}
	if(s >= smax && s <= b) smax = s;
}
int main()
{
	//get data
	scanf("%d%d", &b, &n);
	int i, j;
	for(i = 0; i < n; i++){
		scanf("%d", &a[i]);
	}
	//tinh 
	while(next_binary()){
		calulate();
	}
	// in ra
	printf("%d", smax);
    return 0;
}