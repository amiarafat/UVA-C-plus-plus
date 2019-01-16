#include<cmath>
#include<cstdio>
using namespace std;

main()
{
    long long int a,b,c;
    while(scanf("%lld",&a)==1)
    {
        if(a==0)
          break;
        b=sqrt(a);
        c=pow(b,2);
        if(a==c)
        printf("yes\n");
        else
        printf("no\n");
    }
    return 0;
}
