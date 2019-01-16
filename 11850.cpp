#include<iostream>
#include<cstdio>
#include<algorithm>

using namespace std;

int main()
{
    int r,a,i,d[1425];
    bool t;
    while(scanf("%d",&a)==1)
    {
        if(a==0) break;

        for(i=0;i<a;i++)
        {
          scanf("%d",&d[i]);
        }
    sort(d,d+a,greater<int>());

r=1422-d[0];
if(r<0) r*=(-1);

if(r*2>200) {printf("IMPOSSIBLE\n");continue;}

t=true;

       for(i=0;i<a-1;i++)
            if(d[i]-d[i+1]>200)
                {
                    t=false;
                    break;
                }

if(!t) printf("IMPOSSIBLE\n");
else printf("POSSIBLE\n");

    }
    return 0;
}
