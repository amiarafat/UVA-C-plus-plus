#include<stdio.h>
int a[10000],b[10000];
int main()
{
    int t,n,i,j,k,l;

    while(scanf("%d",&n) && n>0)
    {
        k=n;
        for(i=1;i<=n;i++)
        a[i]=i;
        i=1;
        j=1;
        while(a[i]!=0)
        {
            b[j]=a[i];
            a[i]=-1;
            a[k+1]=a[i+1];
            a[i+1]=0;
            k++;
            i+=2;
            j++;
        }
        printf("Discarded cards:");
        for(k=1;k<n;k++)
        {
            if(k>1)
            printf(",");
            printf(" %d",b[k]);
        }
        printf("\nRemaining card: %d\n",b[n]);

    }
    return 0;
}
