#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;

int H(int n)
{
    if(n<1)
    return 0;
    long long int x,res=0,e=x,temp;
    x=floor(sqrt(n));
    for(int i=1;i<=x;i++)
    {
        temp=n/i;
        res+=temp+(e-temp)*(i-1);
        e=temp;
    }
    if(n/x>x)
    res+=x;

    return res;
}

int main()
{
    int t,n,i,j,k,l;
    cin>>t;
    for(i=1;i<=t;i++)
    {
        cin>>n;
        printf("%lld\n",H(n));
    }
}
