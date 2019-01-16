#include<iostream>

using namespace std;

main()
{
    int t,n,a[500],i,j,k,day,p;
    int d[5000];
    cin>>t;
    for(i=1;i<=t;i++)
    {
        for(int y=1;y<=5000;y++)
        d[y]=0;
        cin>>day;
        cin>>n;
        for(j=1;j<=n;j++)
        cin>>a[j];

        for(j=1;j<=n;j++)
        {
            for(k=1;k<=day;k++)
            {
                if(k%a[j]==0)
                d[k]=1;
            }
        }
        p=0;
        for(k=1;k<=day;k++)
        {
            if(d[k]==1)
            {
                if(((k+1)%7!=0) && (k%7!=0))
                {
                    p++;
                }
            }
        }
        cout<<p<<endl;
    }
}
