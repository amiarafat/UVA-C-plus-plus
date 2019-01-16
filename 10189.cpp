#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;

int main()
{
    int t,m,n,i,j,k,l,b[105][105];
    char a[105][105];
    k=1;
    while(cin>>m>>n)
    {

        getchar();
        if(m==0 || n==0)
        break;
        if(k>1)
        cout<<"\n";
        memset(b,0,sizeof(b));
        for(i=1;i<=m;i++)
        {
            for(j=1;j<=n;j++)
            {
                cin>>a[i][j];
                if(a[i][j]=='*')
                {
                    b[i][j+1]++;
                    b[i+1][j]++;
                    b[i+1][j+1]++;
                    b[i-1][j+1]++;
                    b[i][j-1]++;
                    b[i-1][j]++;
                    b[i-1][j-1]++;
                    b[i+1][j-1]++;
                }
            }
        }
        cout<<"Field #"<<k<<":\n";
        for(i=1;i<=m;i++)
        {
            for(j=1;j<=n;j++)
            {
                if(a[i][j]=='*')
                cout<<"*";
                else
                cout<<b[i][j];
            }
            cout<<endl;
        }

        k++;
    }
    return 0;
}
