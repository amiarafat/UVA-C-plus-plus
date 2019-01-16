#include<iostream>
#include<cstdio>
#include<algorithm>

using namespace std;

main()
{
    int t,n,p,q,i,j,k,a[50],sum;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        sum=0;
        scanf("%d%d%d",&n,&p,&q);
        for(j=1;j<=n;j++)
        {
            scanf("%d",&a[j]);
        }

        k=0;
        for(j=1;j<=n &&j<=p;j++)
        {
            sum+=a[j];
            if(sum>q)
            break;
            k++;
        }
        printf("Case %d: %d\n",i,k);
    }
    return 0;
}
