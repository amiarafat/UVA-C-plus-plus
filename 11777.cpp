#include<iostream>

using namespace std;

main()
{
    int t,n,i,j,k,l;
    int a,b,c,d,e,f,g,h;
    cin>>t;
    for(i=1;i<=t;i++)
    {
        cin>>a>>b>>c>>d>>e>>f>>g;
        if(e<f)
        {
            if(e<g)
            h=(f+g)/2;
            else
            h=(e+f)/2;
        }
        else
        {
            if(f<g)
            h=(e+g)/2;
            else
            h=(e+f)/2;
        }
        n=a+b+c+d+h;
        if(n>=90)
        cout<<"Case "<<i<<": A"<<endl;
        else if(n>=80 && n<90)
        cout<<"Case "<<i<<": B"<<endl;
        else if(n>=70 && n<80)
        cout<<"Case "<<i<<": C"<<endl;
        else if(n>=60 && n<70)
        cout<<"Case "<<i<<": D"<<endl;
        else if(n<60)
        cout<<"Case "<<i<<": F"<<endl;
    }
}
