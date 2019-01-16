#include<cstdio>
#include<algorithm>
#include<cstring>
using namespace std;

main()
{
    char a[100];
    int i,j,k;
    while(scanf("%s",a)==1)
    {
        if(a[0]=='#')
        break;
        k=strlen(a);

        if(next_permutation(a,a+k))
        printf("%s\n",a);
        else
        printf("No Successor\n");
    }
    return 0;
}
