#include<stdio.h>
#include<string.h>
char fact[10000];
char factorial[1010][10000];
void multiply(int k)
{
    int cin,sum,i;
    int len=strlen(fact);
    cin=0;i=0;
    while(i<len)
    {
        sum=cin+(fact[i]-'0')*k;
        fact[i]=(sum%10)+'0';
        i++;
        cin=sum/10;
    }
    while(cin>0)
    {
        fact[i++]=(cin%10)+'0';
        cin/=10;
    }

    fact[i]='\0';
    for(int j=0;j<i;j++)
    {
        factorial[k][j]=fact[j];
    }
    factorial[k][i]='\0';
}
    void fac()
    {
        int k;
        strcpy(fact,"1");
        for(k=2;k<1000;k++)
        multiply(k);
    }

    void print(int n)
    {
        int i;
        int len=strlen(factorial[n]);
        printf("%d!\n",n);
        for(i=len-1;i>0;i--)
        printf("%c",factorial[n][i]);

        printf("\n");
    }


    int main()
    {
        int n;
        factorial[0][0]='1';
        factorial[1][0]='1';
        fac();
        while(scanf("%d",&n)==1)
        print(n);

        return 0;
    }

