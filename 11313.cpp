#include<cstdio>
using namespace std;

main()
{
    long long int t,a,b,c,i,j;
    scanf("%lld",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%lld%lld",&a,&b);
        if((a-1)%(b-1)!=0)
        printf("cant do this\n");
        else
        printf("%lld\n",(a-1)/(b-1));
    }
}
