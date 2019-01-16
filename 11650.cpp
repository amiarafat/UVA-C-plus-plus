#include<iostream>
#include<cstdio>
using namespace std;

main()
{
    int t,n,m,h,i;

    cin>>t;
    for(i=1;i<=t;i++)
    {
        h=m=0;
        scanf("%d:%d",&h,&m);
        h=11-h+(m==0);
        if(h<=0)
        h=h+12;
        if(h!=0)
        m=60-m;
        if(m==60)
        m=0;
       printf("%02d:%02d\n",h,m);
    }
}
