#include<iostream>
using namespace std;

int main()
{
    long long int n,i,a,b;
    while(cin>>a>>b)
    {
        n=0;
        for(i=a;;i++)
        {
            n=n+i;
            if(n>b || n==b)
            {
                cout<<i<<endl;
                break;
            }
        }
    }

    return 0;
}
