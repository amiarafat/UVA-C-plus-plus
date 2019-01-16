#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    int t,i,j,l;
    long long int n,k;
    cin>>t;
    for(i=1;i<=t;i++)
    {
        cin>>n>>k;
        int p=floor((double)n/k);
        int q=ceil((double)n/k);

        if(p==0)
        cout<<0<<" "<<n<<"\n";
        else
        cout<<k-(n%k)<<" "<<n%k<<"\n";
    }
    return 0;
}
