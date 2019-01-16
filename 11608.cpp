#include<iostream>
using namespace std;

int main()
{
    int t,n,i,j,k,l;
    int a[15],b[15];
    k=1;
    while(cin>>n&& n>=0)
    {
        a[0]=n;
        for(i=1;i<=12;i++)
        cin>>a[i];
        for(j=0;j<12;j++)
        cin>>b[j];
        cout<<"Case "<<k<<":\n";
        for(i=0;i<12;i++)
        {
            if(b[i]<=a[i])
            {
                a[i+1]=a[i+1]+a[i]-b[i];
                cout<<"No problem! :D\n";
            }
            else
            {
                a[i+1]=a[i+1]+a[i];
                cout<<"No problem. :(\n";
            }
        }
        k++;
    }
    return 0;
}
