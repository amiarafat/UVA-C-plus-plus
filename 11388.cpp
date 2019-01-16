#include<cstdio>
using namespace std;

main()
{
    long long int a,b,i,j,n;
    scanf("%lld",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%lld%lld",&a,&b);
        if(b%a==0)
        printf("%lld %lld\n",a,b);
        else
        printf("-1\n");
    }

}
