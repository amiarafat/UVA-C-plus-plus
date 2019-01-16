#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;

main()
{
    long long int t,n,i,j,k;
    double vat,tax;
    scanf("%lld",&t);
    for(i=1;i<=t;i++)
    {
        tax=0;
        scanf("%lld",&n);
        if(n<=180000)
        tax=0;
        else if(n>180000 &&n<=480000)
        {
                n=n-180000;
                tax=ceil(n*0.10);
        }
        else if(n>480000 && n<=880000)
        {
            n=n-480000;
            tax=ceil(n*0.15+30000);
        }
        else if(n>880000 &&n<=1180000)
        {
            n=n-880000;
            tax=ceil(n*0.2+90000);
        }
        else
        {
            n=n-1180000;
            tax=ceil(n*0.25+150000);
        }
        if(tax<2000 && tax>0)
        tax=2000;
        printf("Case %lld: %.0lf\n",i,tax);
    }
return 0;
}
