#include<cstdio>

using namespace std;

main()
{
    int t,n,l,m,k[1000],max;
    char a[1000],b[1000],c[1000],d[1000],e[1000],f[1000],g[1000],h[1000],i[1000],j[1000];
    scanf("%d",&t);
    for(l=1;l<=t;l++)
    {
        scanf("%s%d",a,&k[0]);
        scanf("%s%d",b,&k[1]);
        scanf("%s%d",c,&k[2]);
        scanf("%s%d",d,&k[3]);
        scanf("%s%d",e,&k[4]);
        scanf("%s%d",f,&k[5]);
        scanf("%s%d",g,&k[6]);
        scanf("%s%d",h,&k[7]);
        scanf("%s%d",i,&k[8]);
        scanf("%s%d",j,&k[9]);

        max=0;
        for(m=0;m<10;m++)
        if(k[m]>max)
        max=k[m];

        printf("Case #%d:\n",l);
        for(m=0;m<10;m++)
        {
            if(k[m]==max)
            {
                if(m==0)
                puts(a);
                if(m==1)
                puts(b);
                if(m==2)
                puts(c);
                if(m==3)
                puts(d);
                if(m==4)
                puts(e);
                if(m==5)
                puts(f);
                if(m==6)
                puts(g);
                if(m==7)
                puts(h);
                if(m==8)
                puts(i);
                if(m==9)
                puts(j);
            }
        }
    }
}
