#include<iostream>
#include<cstdio>
using namespace std;

main()
{
    long long int t,n,a[100000];
    int dif,y;
    scanf("%lld",&t);
    for(int i=1;i<=t;i++)
    {
        int x=0;
        scanf("%lld",&n);
        for(int j=1;j<=n;j++)
        {
            scanf("%lld",&a[j]);
            if(x<a[j]-a[j-1])
            x=a[j]-a[j-1];
             y=x;
        }
        for(int j=2;j<=n;j++)
        {
            int dif=a[j]-a[j-1];
            if(dif==y)y--;
            else if(dif>y)
            {
                x++;
                break;
            }
        }
        printf("Case %d: %d\n",i,x);
    }
}
