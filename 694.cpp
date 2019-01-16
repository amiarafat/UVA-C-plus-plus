#include<iostream>
#include<cstdio>
using namespace std;

int main()
{
    long long int t,n,i,j,k,l,a,b,c;
    i=1;
    while(cin>>n>>t)
    {
        if(n<0 || t<0)
        break;
        j=1;
        a=n;
        while(n!=1)
        {
            if(n>t)
            {
                j--;
                break;
            }
            if(n%2==0)
            n=n/2;
            else
            n=3*n+1;
            j++;
        }
        printf("Case %lld: A = %lld, limit = %lld, number of terms = %lld\n",i,a,t,j);
        i++;
    }
    return 0;
}
