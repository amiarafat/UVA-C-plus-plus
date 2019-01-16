#include<cstdio>
#include<cmath>
using namespace std;
int main()
{
    long long int t,i,j,sum,n;
    scanf("%lld",&t);
        for(i=1;i<=t;i++)
        {
            scanf("%lld",&n);
		sum= sqrt (1 + (8*n));
		sum = sum - 1;
		sum = sum / 2;
		printf ("%lld\n", sum);
        }
}
