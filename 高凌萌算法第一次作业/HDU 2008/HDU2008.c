#include <stdio.h>

int main()
{
    int n,i;
    double a;
    int sum[3], result[100][3], num=0;
    while(1)
    {
        scanf("%d",&n);
        if(n==0) break;

        for(i=0;i<3;i++)
        {
            sum[i]=0;
        }
        for(i=0;i<n;i++)
        {
            scanf("%lf",&a);
            if(a<0) sum[0]++;
            else if(a==0) sum[1]++;
            else sum[2]++;
        }
        for(i=0;i<3;i++)
        {
            result[num][i]=sum[i];
        }
        num++;
    }
    for(i=0;i<num;i++)
    {
        printf("%d %d %d\n",result[i][0],result[i][1],result[i][2]);
    }
    return 0;
}