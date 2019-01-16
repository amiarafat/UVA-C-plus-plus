#include<iostream>
using namespace std;

int main()
{
    long long int r,t,n,i,j,k,l;
    i=1;
    while(cin>>r>>n)
    {
        if(r<=0 || n<=0)
        break;
        if((n+n*26)<r)
        cout<<"Case "<<i<<": impossible\n";
        else
        {
            j=(r-1)/n;
            cout<<"Case "<<i<<": "<<j<<endl;
        }
        i++;
    }
    return 0;
}
