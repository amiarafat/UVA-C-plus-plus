#include<cstdio>
#include<cmath>
using namespace std;

main()
{
    double a,b,c,x,y,z,max;
    while(scanf("%lf%lf%lf",&a,&b,&c)==3)
    {
        max=0;
    if(max<a) max=a;
    if(max<b) max=b;
    if(max<c) max=c;
    if(a==0||b==0||c==0) printf("-1.000\n");
    else if(a+b+c-max<=max) printf("-1.000\n");
        else
        {
        x=(a*a*a*a)+(b*b*b*b)+(c*c*c*c);
        y=2*((a*a*b*b)+(b*b*c*c)+(a*a*c*c));
        z=(sqrt(y-x))/3;
        printf("%.3lf\n",z);
        }
    }
}
