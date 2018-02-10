#include <stdio.h>
#include <string.h>
#define MAX 1001
typedef struct
{
	int top;
	long int node[MAX];	
} Stack;
Stack stk;
void init(){
	stk.top = -1;
}
int empty(){
	if(stk.top == -1) return 1;
	return 0;
}
int size(){
	return stk.top+1;
}
long int top(){
	if(stk.top == -1) return -1;
	return stk.node[stk.top];
}
void pop(){
	if(stk.top >= 0) stk.top--;
}
void push(long int a){
	stk.top++;
	stk.node[stk.top] = a;
}
int main()
{
	char str[MAX]; scanf("%s", str);
	while(strcmp(str, "end")){
		if(!strcmp(str, "init")) init();
		if(!strcmp(str, "push")){
			long int a; scanf("%ld", &a);
			push(a);
		}
		if(!strcmp(str, "pop")) pop();
		if(!strcmp(str, "top")) printf("%ld\n", top());
		if(!strcmp(str, "size")) printf("%ld\n", size());
		if(!strcmp(str, "empty")) printf("%d\n", empty());
		scanf("%s", str);
	}
    return 0;
}