#include<iostream>
#include<cstdio>
#include<cmath>
#include<cstring>
using namespace std;

int main()
{
    int t,n,m,i,j,k,l,x,y,z;
    int b[110];
    char a[10],c[10];
    cin>>t;
    for(i=1;i<=t;i++)
    {
        for(k=1;k<=110;k++)
        b[k]=0;
        cin>>n;
        getchar();
        x=0;
        for(j=1;j<=n;j++)
        {
            scanf("%s",a);
            if(!strcmp(a,"LEFT"))
            {
                x--;
                b[j]=-1;
            }
            else if(!strcmp(a,"RIGHT"))
            {
                x++;
                b[j]=1;
            }
            else if(!strcmp(a,"SAME"))
            {
                cin>>c;
                cin>>y;
                getchar();
                if(b[y]==-1)
                {
                    x--;
                    b[j]=-1;
                }
                if(b[y]==1)
                {
                    x++;
                    b[j]=1;
                }
            }
        }
        printf("%d\n",x);
    }
}
