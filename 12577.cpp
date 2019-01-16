#include<stdio.h>
#include<string.h>
int main()
{
    char a[10];
    int i=1;
    while(scanf("%s",a)==1)
    {
        if(!strcmp(a,"*"))
        break;
        if(!strcmp(a,"Hajj"))
        printf("Case %d: Hajj-e-Akbar\n",i);
        if(!strcmp(a,"Umrah"))
        printf("Case %d: Hajj-e-Asghar\n",i);
    i++;
    }
    return 0;
}
