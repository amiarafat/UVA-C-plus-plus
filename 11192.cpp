#include<iostream>
#include<cstring>
using namespace std;

main()
{
    int t,n,i,j,k,l;
    char a[110];
    while(cin>>n)
    {
        if(n<=0)break;
        cin>>a;
        k=strlen(a);
        l=k/n;
        for(i=0;i<n;i++)
        for(j=(i+1)*l-1;j>=i*l;j--)
        cout<<a[j];
        cout<<"\n";
    }
    return 0;
}
