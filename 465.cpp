#include<cstdio>
#include<iostream>
#include<cstdlib>
using namespace std;

int main()
{
    char a[1000],b[1000],ch;
    int t,n,i,j,k,l;
    double x,y;
    while(cin>>a>>ch>>b)
    {
        x=atof(a);
        y=atof(b);
        printf("%s %c %s\n",a,ch,b);
        if(x>2147483647)
        printf("first number too big\n");
        if(y>2147483647)
        printf("second number too big\n");
        if(ch=='+' && (x+y)>2147483647)
        printf("result too big\n");
        if(ch=='*' && (x*y)>2147483647)
        printf("result too big\n");
    }
    return 0;
}
