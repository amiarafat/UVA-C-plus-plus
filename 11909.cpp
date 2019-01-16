#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;

main()
{
    int l,w,h,q,i,j,k;
    double result=0;
   double pi=acos(-1);
    double x,y;
    while(scanf("%d%d%d%d",&l,&w,&h,&q)==4)
    {
    double tvolume=l*w*h;
    y=tan((q*pi)/180)*l;
    if(y<h)
    {
    double rvolume=0.5*y*l*w;
    result=tvolume-rvolume;
    }
    else
    {
        result=0.5*h*h*l*w/y;
    }
    printf("%.3lf mL\n",result);
    }
}
