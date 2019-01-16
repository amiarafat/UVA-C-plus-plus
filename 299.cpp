#include<iostream>
using namespace std;

int swapno(int a[],int size)
{
    int c=0,i,j;
    for(i=1;i<size;i++)
        for(j=i+1;j<=size;j++)
        if(a[i]>a[j])
        c++;

        return c;
}
main()
{
    int t,i,j,a[10000],n;
    cin>>t;
    for(i=1;i<=t;i++)
    {
        cin>>n;
        for(j=1;j<=n;j++)
        cin>>a[j];
        cout<<"Optimal train swapping takes "<<swapno(a,n)<<" swaps."<<endl;
    }
    return 0;
}
