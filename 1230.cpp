#include<iostream>
#include<cstdio>
using namespace std;

long long square(long long x)
{
    return x*x;
}

long long bigmod(long long b, long long p, long long m)
{
    long long int result;
    if(p==0)
    result=1;
    else if(p%2==0)
    result=square(bigmod(b,p/2,m))%m;
    else
    result=((b%m)*bigmod(b,p-1,m))%m;
    return result;
}

main()
{
    long long b,p,m,t;
    while(scanf("%lld",&t)==1)
    {
        if(t==0)
        break;
        for(int i=1;i<=t;i++)
        {
            scanf("%lld%lld%lld",&b,&p,&m);
            long long t=bigmod(b,p,m);
            printf("%lld\n",t);
        }
    }
}

