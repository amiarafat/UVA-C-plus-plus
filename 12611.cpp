#include<cstdio>
using namespace std;

main()
{
    long long int i,j,k,r,a,b,c,t,l,d,x1,x2,x3,x4,y1,y2,y3,y4;
    scanf("%lld",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%lld",&r);
        l=r*5;
        d=(l*6)/10;

        a=(l*55)/100;

        b=l-a;
        c=d/2;
        printf("Case %d:\n",i);
        printf("%lld %lld\n%lld %lld\n%lld %lld\n%lld %lld\n",-b,c,a,c,a,-c,-b,-c);

    }
}
