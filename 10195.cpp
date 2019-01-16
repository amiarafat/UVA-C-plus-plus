#include<cstdio>
#include<cmath>
using namespace std;

main()
{
    double p,a,b,c,r,s;
    while(scanf("%lf%lf%lf",&a,&b,&c)==3)
    {
        if(a+b<=c || a+c<=b || b+c<=a)
        printf("The radius of the round table is: 0.000\n");
        else
        {
        p=(a+b+c)/2;
        s=sqrt(p*(p-a)*(p-b)*(p-c));
        r=s/p;
        printf("The radius of the round table is: %.3lf\n",r);
        }
    }
    return 0;
}
