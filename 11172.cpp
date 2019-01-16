#include<iostream>
#include<cstdio>
using namespace std;

main()
{
    int t,i;
    long long a,b;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%lld%lld",&a,&b);
        if(a>b)
        printf(">\n");
        else if(a<b)
        printf("<\n");
        else
        printf("=\n");
    }
}
