#include<cstdio>
#include<cmath>
using namespace std;

main()
{
    long long int a,b,c,i,j;
    while(scanf("%lld%lld%lld",&a,&b,&c)==3)
    {
        if(a==0||b==0||c==0)
        break;
        else if(pow(a,2)==pow(b,2)+pow(c,2)||pow(b,2)==pow(a,2)+pow(c,2)||pow(c,2)==pow(b,2)+pow(a,2))
            printf("right\n");
        else
            printf("wrong\n");
    }
}
