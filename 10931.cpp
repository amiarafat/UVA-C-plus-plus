#include<stdio.h>
main()
{
    int t,n,i,j,k,l;
    int a[10000];
    while(scanf("%d",&n)==1)
    {
        if(n==0)break;
        t=n;
        k=0;
        l=0;
        while(n!=0)
        {
            a[l]=j=n%2;
            n=n/2;
            if(j==1)
            k++;
            l++;
        }
        printf("The parity of ");
        for(i=l-1;i>=0;i--)
        printf("%d",a[i]);
        printf(" is %d (mod 2).\n",k);
    }
}

