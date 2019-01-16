#include<iostream>
#include<cstdio>
using namespace std;

main()
{
    int n,a[102],i,j,result,k=0;
    int sum,div;
    while(scanf("%d",&n)==1)
    {
         if(n==0)
        break;
        k++;
        sum=0;
        result=0;
        for(i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
            sum=sum+a[i];
        }
        div=sum/n;
        for(j=0;j<n;j++)
        {
            if(div<a[j])
            {
                result=result+(a[j]-div);
            }

        }
        printf("Set #%d \nThe minimum number of moves is %d.\n\n",k,result);

    }
}
