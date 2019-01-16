#include<iostream>
#include<cstdio>
using namespace std;

main()
{
    long long int t,i,j,k,a,b,c,x,y;

    while(scanf("%lld",&t)==1)
    {
    for(i=1;i<=t;i++)
    {
        scanf("%lld%lld%lld",&a,&b,&c);
        k=0;
        if(a>k)k=a;
        if(b>k)k=b;
        if(c>k)k=c;
        if((a+b+c-k)<=k)
        printf("Case %lld: Invalid\n",i);
        else if(a==b && b==c)
        printf("Case %lld: Equilateral\n",i);
        else if(a==b||a==c||b==c)
        printf("Case %lld: Isosceles\n",i);
        else if(a!=b && a!=c &&b!=c)
        printf("Case %lld: Scalene\n",i);
        }
    }
    return 0;
    }

