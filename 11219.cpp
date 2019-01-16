/*#include<cstdio>
#include<iostream>
using namespace std;
main()
{
    int t,n,i,j,k,l,m;
    int a,b,c,d,e,f;
    while(cin>>t)
    {
    for(i=1;i<=t;i++)
    {
        cout<<"\n";
        scanf("%d/%d/%d",&a,&b,&c);
        scanf("%d/%d/%d",&d,&e,&f);
        k=c-f;
        if(b<e)
        k--;

        else if(b==e)
        if(a<d)
        k--;

        if(k<0)
        printf("Case #%d: Invalid birth date\n",i);
        else if(k>130)
        printf("Case #%d: Check birth date\n",i);
        else
        printf("Case #%d: %d\n",i,k);
    }
    }
}*/

#include <stdio.h>
int main()
{
int a,b,c,e,g,f,k,i,j,t;
while(scanf("%d",&t)==1)
{
for(i=1;i<=t;i++)
{
scanf("%d/%d/%d",&a, &b, &c);
scanf( "%d/%d/%d",&e, &f, &g);
k=(c-g);
if(b<f)
k--;
else if(b==f)
{
if(a<e)
k--;
}
if(k<0)
printf("Case #%d: Invalid birth date\n", i );
else if(k>130)
printf("Case #%d: Check birth date\n", i);
else
printf("Case #%d: %d\n",i,k);
}
}
return(0);
}
