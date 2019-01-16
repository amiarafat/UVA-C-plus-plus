#include<stdio.h>
#include<math.h>
int main()
{
    long long int i,n,a,b,j,k,x[50],y[50],t,sum;
    scanf("%lld",&t);
    for(i=1;i<=t;i++)
    {
            scanf("%lld",&n);
            a=n;
            while(sum!=1 ||sum!=a)
            {
                sum=0;
                while(n!=0)
                {
                    b=n%10;
                    sum=sum+pow(b,2);
                    n=n/10;
                }
                n=sum;
                if(n<=9)
                break;
            }
            if(sum==1 || sum==7)
            printf("Case #%lld: %lld is a Happy number.\n",i,a);
            else
            printf("Case #%lld: %lld is an Unhappy number.\n",i,a);
    }
}
