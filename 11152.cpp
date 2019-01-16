#include<cstdio>
#include<cmath>
#define pi 3.141592653589793
using namespace std;

int main()
{
    int a,b,c,i,j;
    double s,s_r,b_r,tri_area;
    double sunflower,violet,rose;
    while(scanf("%d%d%d",&a,&b,&c)==3)
    {
        s=(a+b+c)/2.0;
        tri_area=sqrt(s*(s-a)*(s-b)*(s-c));
        b_r=(a*b*c)/(tri_area*4.0);
        s_r=tri_area*s;
        rose=pi*s_r*s_r;
        violet=tri_area-rose;
        sunflower=(pi*b_r*b_r)-tri_area;
        printf("%.4lf %.4lf %.4lf\n",sunflower,violet,rose);
    }
}
