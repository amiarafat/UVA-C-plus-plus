#include<stdio.h>
int main()
{
    long long int n,i;
    long long int f,m,total,F,M;
    while(scanf("%lld",&n)==1)
    {
        if(n==-1)
        break;
        f=1;
        F=0;
        total=1;
        m=0;
        M=0;
        for(i=1;i<=n;i++)
        {
            m=total;
            M=f;
            f=f+F;
            total=total+f;
            F=M;
        }
        printf("%lld %lld\n",m,total);
    }
}
