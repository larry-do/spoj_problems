#include <iostream>
using namespace std;
 
struct data
{
	int front;
	int behind;
} typedef data;
 
int main ()
{
	int n, x;
	cin>>n>>x;
	//init;
	data dlist [100005];
	for (int i=1; i<=n; i++)
	{
		dlist[i].front=i-1;
		dlist[i].behind=i+1;
	}
	//Run:
	for (int i=1; i<=x; i++)
	{
		int a, b;
		cin>>a>>b;
		// Xoa node;
		dlist[dlist[a].front].behind = dlist[a].behind;
		dlist[dlist[a].behind].front = dlist[a].front;
		//Chen node;
		dlist[dlist[b].front].behind = a;
		dlist[a].front = dlist[b].front;
		dlist[a].behind = b;
		dlist[b].front = a;
	}
	//Tìm node begin, end;
	int Begin, End;
	for (int i=1; i<=n; i++)
	{
		if (dlist[i].front==0)
			Begin = i;
		if (dlist[i].behind==n+1)
			End = i;
	}
	//In node;
	while (1)
	{
		if (Begin==End)
		{
			cout<<End;
			break;
		}
		cout<<Begin<<" ";
		Begin = dlist[Begin].behind;
	}
	return 0;
}