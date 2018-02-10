#include <stdio.h>
using namespace std;
#define nmax=8;
 
int n;
bool dd[10];
int res[10];
 
void xuat()
{
    int i;
    for (i=1; i<=n; i++)
        printf("%d",res[i]);
    printf("\n");
}
 
void dequy(int i)
{
    int j;
    if (i>n)
    {
        xuat();
    }
    else
    {
        for (j=1; j<=n; j++)
        {
            if (dd[j]==false)
            {
                dd[j]=true;
                res[i]=j;
                dequy(i+1);
                dd[j]=false;
            }
        }
    }
}
 
int main()
{
    scanf("%d",&n);
    int i;
    for (i=1; i<=3; i++) dd[i]=false;
    dequy(1);
    return 0;
}