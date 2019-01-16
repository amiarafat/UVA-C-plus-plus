#include<iostream>
#include<cstdio>
using namespace std;

main()
{
    int t,n,i,j,a[100],x;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        x=0;
        scanf("%d",&n);
        for(j=1;j<=n;j++)
        {
            scanf("%d",&a[j]);
            if(x<a[j])
            x=a[j];
        }
        printf("Case %d: %d\n",i,x);
    }
}
