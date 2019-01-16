#include<iostream>
using namespace std;

int main()
{
    int t,n,i,j,k,l,a[30];
    a[0]=0;
    a[1]=1;
    for(i=2;i<=20;i++)
    a[i]=a[i-1]+a[i-2];
    while(cin>>n && n>0)
    {
        k=0;
        for(i=2;i<=20;i++)
        {
            if(n==a[i])
            {
                k=1;
                break;
            }
        }
        if(k==1)
        cout<<"Roberto\n";
        else
        cout<<"Alicia\n";
    }
    return 0;
}
