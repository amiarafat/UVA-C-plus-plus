#include<iostream>
#include<cstring>
using namespace std;

main()
{
    int t,i,j;
    double x,y;
    char a[6];
    cin>>t;
    for(i=1;i<=t;i++)
    {

        cin>>x>>a;
        y= strlen(a) > 3 ? (int) a[3] - '0' : 0;
        cout<<"Case "<<i<<": "<<x*0.5+y*0.05<<endl;;
    }
}
