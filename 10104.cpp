#include<iostream>
using namespace std;

int ExGCD(int a,int b)
{
    int x,y,lastx,lasty,p,q,temp1,temp2,temp3;
    x=0;
    y=1;
    lastx=1;
    lasty=0;
    while(b!=0)
    {
        q=a/b;
        temp1=a%b;
        a=b;
        b=temp1;

        temp2=x;
        x=lastx-q*x;
        lastx=temp2;

        temp3=y;
        y=lasty-q*y;
        lasty=temp3;
    }

    cout<<lastx<<" "<<lasty<<" "<<a<<"\n";
}

int main()
{
    int t,i,j,n,k,l,a,b;
    while(cin>>a>>b && a>0 && b>0)
    {
        ExGCD(a,b);
    }
    return 0;
}
