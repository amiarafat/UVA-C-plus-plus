#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;

main()
{
    long long a,b,c,d,l,i,j,x;
    while(scanf("%lld%lld%lld%lld%lld",&a,&b,&c,&d,&l)==5)
    {
        j=0;
        if(a==0 && b==0 && c==0 && d==0 && l==0)
        break;
        for(i=0;i<=l;i++)
        {
            x=(a*i*i)+(b*i)+c;
            if(x%d==0)
            j++;
        }
        printf("%lld\n",j);
    }
}
