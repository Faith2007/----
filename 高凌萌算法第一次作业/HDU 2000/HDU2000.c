#include <stdio.h>

void swap(char *x,char *y)
{
    char t=*x;
    *x=*y;
    *y=t;
}

int main()
{
    char a,b,c;
    while(1)
    {
        if(scanf(" %c%c%c",&a,&b,&c)!=3) break;
        if(a>b)swap(&a,&b);
        if(b>c)swap(&b,&c);
        if(a>b)swap(&a,&b);

        printf("%c %c %c\n",a,b,c);
    }

    return 0;
}