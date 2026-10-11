#include <stdio.h>
int main()
{
    int n,i;
    int h1,m1,s1;
    int h2,m2,s2;

    scanf("%d",&n);

    for (i=0;i<n;i++)
    {
        scanf("%d%d%d%d%d%d",&h1,&m1,&s1,&h2,&m2,&s2);

        s1=s1+s2;
        m1=m1+m2+s1/60;
        h1=h1+h2+m1/60;

        printf("%d %d %d\n",h1,m1%60,s1%60);
    }

    return 0;
}