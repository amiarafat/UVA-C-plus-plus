#include<iostream>
using namespace std;

int main()
{
    long long int t,n,i,j,k,l,m,a,b,x,y;

    while(cin>>n && n>0)
    {
        cin>>a>>b;
        x=0; y=0;
        for(i=1;i<=n;i++)
        {
            cin>>x>>y;
            x=x-a;
            y=y-b;
            if(x==0 || y==0)
            cout<<"divisa\n";
            else if(x<0 && y>0)
            cout<<"NO\n";
            else if(x>0 && y>0)
            cout<<"NE\n";
            else if(x>0 && y<0)
            cout<<"SE\n";
            else if(x<0 && y<0)
            cout<<"SO\n";
        }
    }
    return 0;
}
