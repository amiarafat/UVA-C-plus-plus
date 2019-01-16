#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    int t,n,m,i,j,k,l;
    int a[20005],b[100000];
    while(cin>>n>>k && n>0 && k>0)
    {
        for(i=0;i<n;i++)
        cin>>a[i];
        for(j=0;j<k;j++)
        cin>>b[j];
        if(k<n)
        cout<<"Loowater is doomed!\n";
        else
        {
        sort(b,b+k);
        m=0;
        for(j=0;j<n;j++)
        m+=b[j];
        cout<<m<<"\n";
        }
    }
    return 0;
}
