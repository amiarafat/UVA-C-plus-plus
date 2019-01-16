#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    long long int t,n,m,i,j,k,l,p;

    while(cin>>n && n>0)
    {
        p=pow(2,n-1)*(pow(2,n)-1);
        if(n==11 || n==23 || n==29)
        cout<<"Given number is prime. But, NO perfect number is available.\n";
        else if(n==2 || n==3 || n==5||n==7||n==13||n==17||n==19 ||n==31)
        {
            cout<<"Perfect: "<<p<<"!\n";
        }
        else
        cout<<"Given number is NOT prime! NO perfect number is available.\n";
    }
}
