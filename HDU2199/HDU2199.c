#include <stdio.h>
#include <math.h>

double fomula(double x)  //计算公式
{
    return 8*pow(x,4)+7*pow(x,3)+2*pow(x,2)+3*x+6;
}

double BinarySearch(double low,double high,long double Y)  //二分查找
{
    double mid=low+(high-low)/2.0;
    double sum=fomula(mid);

    if(fabsl(sum-Y)<1e-8) return mid;
    if(high-low<1e-8) return mid;
    if(sum>Y) return BinarySearch(low,mid,Y);
    else return BinarySearch(mid,high,Y);

}


int main()
{
    int t,i;
    scanf("%d",&t);
    long double Y;
    double x=-1.0;
    for(i=0;i<t;i++)
    {
        scanf("%Lf",&Y);
        if(Y<6||Y>fomula(100)) printf("No solution!\n");
        else
        {
            x=BinarySearch(0,100,Y);
            printf("%.4lf\n",x);
        }
    }
    return 0;
}