#include<stdio.h>
int gcd(int big, int small)
{
    if (small == 0)
    return big;
    else
    return gcd(small, big % small);
}

int main()
{
    int i,j,n,g;
    while(scanf("%d",&n)==1)
    {
        if(n==0)
        break;
        g=0;
        for(i=1;i<n;i++)
        for(j=i+1;j<=n;j++)
        {
            g+=gcd(i,j);
        }
        printf("%d\n",g);
    }
    return 0;
}
