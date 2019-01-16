#include<iostream>
using namespace std;
main()
{
    int t,a,b,c,d,i,j,k;
    cin>>t;
    for(i=1;i<=t;i++)
    {
        cin>>a>>b>>c>>d;
        if(a==b &&b==c &&c==d)
        cout<<"square\n";
        else if((a==b &&c==d)||(a==c &&b==d)||(a==d &&b==c))
        cout<<"rectangle\n";
        else if((a<=b+c+d)&&(b<=a+c+d)&&(c<=a+b+d)&&(d<=a+b+c))
        cout<<"quadrangle\n";
        else
        cout<<"banana\n";
    }
    return 0;
}
