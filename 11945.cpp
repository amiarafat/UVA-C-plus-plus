 #include<iostream>
 #include<cstdio>
 #include<clocale>
 using namespace std;

 main()
 {
     int t,i,j,n;
     double a,k,l;
     cin>>t;
     setlocale(LC_ALL,"en_US.UTF-8");
     for(i=1;i<=t;i++)
     {
         k=0;
         for(j=1;j<=12;j++)
         {
             cin>>a;
             k+=a;
             a=0;
         }
         printf("%d $%'.2lf\n",i,k/12.0);
     }
 }
