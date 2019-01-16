#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    long long int t,i,j,kl,n,m;
    while(cin>>n)
    {
        for(i=0;;i++)
        {
            if(pow(2,i)>n)
            break;
        }
        cout<<i<<"\n";
    }
return 0;
}
