#include<iostream>
#include<cstdio>
using namespace std;

long long int a[100000];
long long int fib(long long n)
{
    if(n==1)
    return 1;
    if( n==2)
    return 2;
    else if(a[n]!=-1)
    return a[n];

    return a[n]=fib(n-1)+fib(n-2);

        return a[n];
}

main()

{
    for(int x=0;x<100000;x++)
    a[x]=-1;
    long long int n,i,j;
    while(scanf("%lld",&n)==1)
    {
        if(n==0)
        break;
        i=fib(n);
        cout<<i<<endl;
    }
    return 0;
}
