#include<iostream>
#include<cstdio>
using namespace std;

main()
{
    unsigned long long int n,i,j,k;

    while(scanf("%llu",&n)==1)
    {
        if(n==0)
        break;
        if(n%11==0)
        printf("%llu is a multiple of 11.\n",n);
        else
        printf("%llu is not a multiple of 11.\n",n);
    }
}
