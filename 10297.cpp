#include<iostream>
#include<cstdio>
#include<cmath>
#define pi acos(-1)
using namespace std;

int main()
{

    double a,b,c,d,n,m,v,l;
    while(cin>>d>>v && d>0 && v>0)
    {
        v=(v*6)/4;
        a=(pow(d,3)/4)*pi;
        b=a-v;
        c=(4*b)/pi;
        c=pow(c,(double)1/3);
        printf("%.3lf\n",c);
    }
}
