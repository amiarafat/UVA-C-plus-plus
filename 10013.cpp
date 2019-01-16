#include<iostream>
#include<vector>
using namespace std;

int main()
{
    int t,n,i,j,k,l;
    cin>>t;
    while(t--)
    {
        int x,y=0;
        vector<int>a;
        vector<int>b;
        cin>>n;
        for(int i=0;i<n;i++)
        {
                cin>>x;
                cin>>y;
                a.push_back(x+y);
        }
        for(int i=n-1,j=0;i>=0;i--)
        {
            if(a[i]>=10)
            {
                b.push_back(a[i]%10);
                l=a[i]/10;
                a[i-1]=a[i-1]+l;
                l=0;
            }
            else
            b.push_back(a[i]);
        }
        if(l!=0)
        b.push_back(l);
        for(int i=b.size()-1;i>=0;i--)
        cout<<""<<b[i];
        if(t)
        cout<<"\n\n";
        else
        cout<<"\n";
    }
    return 0;
}
