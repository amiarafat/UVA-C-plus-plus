#include<iostream>
#include<cstdio>
using namespace std;

int gcd(int x,int y)
{
    if(y==0)
    return x;
    else
    return gcd(y,x%y);
}

int main()
{
    int t,n,m,i,j,k,l;
    cin>>t;
    for(i=1;i<=t;i++)
    {
        cin>>n>>m;
        if(n==m)
        l=2;
        else
        {
            k=gcd(n,m);
            l=n/k+m/k;
        }
        printf("Case %d: %d\n",i,l);
    }
    return 0;
}
