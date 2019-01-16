#include<cstdio>
#include<cmath>
using namespace std;
 main()
 {
     int t,i,j,k;
     char l[10];
     scanf("%d",&t);
     for(i=1;i<=t;i++)
     {
         scanf("%3s-%d",l,&k);

        j=26 * 26 * (l[0] - 'A') + 26 * (l[1] - 'A') + (l[2] - 'A');
        j=j-k;
        if(j<0)
        j=j*(-1);
        if(j<=100)
        printf("nice\n");
        else
        printf("not nice\n");
     }
 }
