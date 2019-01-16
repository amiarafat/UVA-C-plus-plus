#include<stdio.h>
#include<math.h>
int main()
{
    int i,j,k,l,t,n,a,b,c;
    i=1;
    while(scanf("%d",&n)==1)
    {
        if(n<=0)
        break;
        if(n==1)
        printf("Case %d: 0\n",i);
        else
{
            j=1;
        while(pow(2,j)<n)
        {
            j++;
        }
        printf("Case %d: %d\n",i,j);
        }
        i++;
    }
return 0;
}
