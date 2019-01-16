#include<iostream>
#include<cstdio>
#include<algorithm>
#include<stack>
using namespace std;

main()
{
    long long int a,b,c;
    int i,j,k;
    stack<long long int>s;
    while(scanf("%lld",&a)==1)
    {
        if(a==-1)
        break;
        while(a!=0)
        {
            s.push(a%3);
            a=a/3;
        }
        while (!s.empty())
        {
            printf("%lld",s.top());
            s.pop();
        }
        cout<<"\n";

    }
    return 0;
}
