#include<iostream>
#include<cstdio>
#include<cstring>
#include<cmath>

using namespace std;

int main()
{
    int t,n,m,i,j,k,l,x,y;
    double p,q;
    char a[30],b[30];
    while(gets(a) && gets(b))
    {
        n=0;m=0;
        k=strlen(a);
        l=strlen(b);
        for(i=0;i<k;i++)
        {
            if(a[i]>=65 && a[i]<=90)
            m+=a[i]-64;
            if(a[i]>=97 && a[i]<=122)
            m+=a[i]-96;
        }
        for(i=0;i<l;i++)
        {
            if(b[i]>=65 && b[i]<=90)
            n+=b[i]-64;
            if(b[i]>=97 && b[i]<=122)
            n+=b[i]-96;
        }
        while(m>=10)
        {
            x=0;
            while(m!=0)
            {
                x=x+m%10;
                m=m/10;
            }
            m=x;
        }
        while(n>=10)
        {
            y=0;
            while(n!=0)
            {
                y=y+n%10;
                n=n/10;
            }
            n=y;
        }
        if(m>n)
        p=(double)n/m;
        else
        p=(double)m/n;

        printf("%.2lf %%\n",p*100);
    }
    return 0;
}
