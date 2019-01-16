#include<stdio.h>
int main()
{
int t,i;
float c,f,d,e,ans;
scanf("%d",&t);
for(i=1;i<=t;i++)
 {
   scanf("%f%f",&c,&d);
   f=c*9/5+32;
   e=f+d;
   ans=(e-32)*5/9;
   printf("Case %d: %.2f\n",i,ans);
 }
 return 0;
}
