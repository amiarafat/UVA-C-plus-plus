#include<iostream>
using namespace std;
int main()
{
    int t,n,m,i,j,k,l,x,y,z,a,b,c,d;
    cin>>t;
    for(i=1;i<=t;i++)
    {
        cin>>a>>b>>c;
        n=a+b;
        x=0;
        while(n>=c)
        {
            x=x+n/c;
            n=(n/c)+(n%c);
        }
        cout<<x<<"\n";
    }
}






/*
#include<iostream>
using namespace std;

main()
{
    int t,x,y,z,a,b,c,i,j;
    cin>>t;
    for(i=1;i<=t;i++)
    {
        cin>>x>>y>>z;
        a=x+y;
        b=0;
        while(a>z)
        {
            b=b+a/z;
            a=(a/z)+(a%z);
        }
        cout<<b<<endl;
    }
}

*/
