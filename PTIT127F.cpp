#include<iostream>
using namespace std;
 
int main ()
{
	long n;
	cin>>n;
	long arr[300005];
	for (long i=1; i<=n; i++)
	{
		cin>>arr[i];
	}
	long dem=0;
	long x=n;
	for (int i=n; i>=1; i--)
	{
		if (arr[i]==x)
		{
			x--;
		}
		else dem++;
	}
	cout<<dem;
	return 0;
}