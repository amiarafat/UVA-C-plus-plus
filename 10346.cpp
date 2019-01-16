#include<iostream>
#include<cstdio>

using namespace std;

int main()
{
    long long int n,k,i,jk,sum;;
    while(scanf("%lld%lld",&n,&k)==2 &&k>1)
    {
        sum=n;
        while(n/k!=0)
        {
           sum=sum+(n/k);
           n=(n/k)+(n%k);
        }
        printf("%lld\n",sum);
    }
}
