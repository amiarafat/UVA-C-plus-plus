#include<iostream>
#include<cstdio>
using namespace std;

main()
{
    long long int i,n,sum;
    while(scanf("%lld",&n)==1)
    {
        sum=0;
        for(i=1;i<=n;i++)
        sum=sum+(i*i*i);

        printf("%lld\n",sum);
    }
    return 0;
}
