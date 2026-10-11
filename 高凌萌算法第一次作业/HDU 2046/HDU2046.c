#include <stdio.h>
int main()
{
    int n,i;
    long long x0,x1,x2;
    while(1)
    {
        if(scanf("%d",&n)!=1) break;
        x0=0;x1=1;x2=1;
        for(i=0;i<n;i++)
        {
            x2=x0+x1;
            x0=x1;
            x1=x2; 
        }
        printf("%lld\n",x2);
    }
    return 0;
}