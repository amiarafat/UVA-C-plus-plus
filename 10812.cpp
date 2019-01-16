#include<iostream>
#include<cstdio>
using namespace std;

main()
{
    int i,t;
    int a,b;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%d%d",&a,&b);
        if(a>b && (a+b)%2==0)
        {
            int x=(a+b)/2;
            int y=(a-b)/2;
            printf("%d %d\n",x,y);
        }
        else
        {
            printf("impossible\n");
        }
    }
    return 0;
}
