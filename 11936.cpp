#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;

main()
{
    int n,a,b,c,i,j;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d%d%d",&a,&b,&c);
        if(a+b>c && a+c>b && b+c>a)
        printf("OK\n");
        else
        printf("Wrong!!\n");
    }
}
