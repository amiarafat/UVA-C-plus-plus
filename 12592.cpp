#include<cstdio>
#include<cstring>
using namespace std;

main()
{
   int t,n,i,j,k,l;
   char a[50][105],b[105];
   scanf("%d",&t);
   getchar();
   for(i=1;i<=2*t;i++)
   {
       gets(a[i]);
   }

   scanf("%d",&n);
   getchar();
   for(j=1;j<=n;j++)
   {
       gets(b);
       for(i=1;i<=2*t;i+=2)
       {
           if(!strcmp(b,a[i]))
           {
               puts(a[i+1]);
               break;
           }
       }
   }
}
