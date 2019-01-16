#include<stdio.h>
int main()
{
    int x,n,m;
    while(scanf("%d",&n) && n>0)
    {
        x=1;
        while(x<=n)
        {
            x=x*2;
            m=x%n;
        }
        printf("%d\n",n-m);
    }
    return 0;
}
