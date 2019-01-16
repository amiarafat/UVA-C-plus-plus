#include<cstdio>
#include<cstring>
using namespace std;

main()
{
    char a[1000];
    int i,j,w,k;
    while(gets(a))
    {
        k=strlen(a);
        j=0;
        w=1;
        for(i=0;i<k;i++)
        {
                if(a[i]>='A' && a[i]<='Z' || a[i]>='a' &&a[i]<='z')
                {
                    if(w)
                    j++;
                    w=0;
                }
                else
                w=1;
        }
        printf("%d\n",j);
    }
}
