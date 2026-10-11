#include <stdio.h>
int main()
{
  int m,n,i,x,y;
  while(1)
  {
    if(scanf("%d%d",&m,&n)!=2) break;
    if(m>n)
    {
      int t=m;
      m=n;n=t;
    }
    x=0;y=0;
    for(i=m;i<=n;i++)
    {
      if(i%2==0) x=x+i*i;
      else y=y+i*i*i;
    }
    printf("%d %d\n",x,y);  
  }
  return 0;
}