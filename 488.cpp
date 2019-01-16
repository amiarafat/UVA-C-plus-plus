#include<iostream>

using namespace std;

int main()
{
    int t,i,j,k,l,n,m;
    cin>>t;
    for(i=1;i<=t;i++)
    {
        cin>>n>>m;
        for(j=1;j<=m;j++)
        {
            for(k=1;k<=n;k++)
            {
                for(l=1;l<=k;l++)
                cout<<l;
                cout<<"\n";
            }
            for(k=n;k>=1;k--)
            {
                for(l=1;l<=k;l++)
                cout<<l;
                cout<<"\n";
            }
            if(i!=t || j!=m)
        cout<<"\n";
        }
    }
    return 0;
}
