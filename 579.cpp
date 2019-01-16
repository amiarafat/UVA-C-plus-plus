#include<cstdio>
#include<cmath>
using namespace std;

main()
{
    int h,m;
    double H,M,x;
    while(scanf("%d:%d",&h,&m)==2)
    {
        if(h==0 && m==0)
            break;

        M=(double)m*6;
        H=(double)((h%12)*30+0.5*m);
        if(H>M)
        x=H-M;
        else
        x=M-H;
        if(x>180)
        x=360-x;
        printf("%.3lf\n",x);
    }
}
