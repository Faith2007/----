#include <stdio.h>
#include <stdlib.h>

#define MAX 500

int BinarySearch(int *a,int n,int x)  //二分查找
{
    int low=0,high=n-1,mid;
    while(high>=low)
    {
        mid=low+(high-low)/2;
        if(a[mid]==x) return mid;
        else if(a[mid]>x) high=mid-1;
        else low=mid+1;
    }
    return -1;
}

int partition(int *a,int low,int high)  //分治
{
    int pivot=a[low];
    while(low<high)
    {
        while(low<high && a[high]>=pivot)
        {
            high--;
        }
        a[low]=a[high];
        while(low<high && a[low]<=pivot)
        {
            low++;
        }
        a[high]=a[low];
    }
    a[high]=pivot;
    return high;
}

void quickSort(int *a,int low,int high)  //快速排序
{
    if(low<high)
    {
        int pi=partition(a,low,high);
        quickSort(a,low,pi-1);
        quickSort(a,pi+1,high);
    }
}

int main()
{
    int L,N,M,num=1;
    while(scanf("%d%d%d",&L,&N,&M)==3)
    {
        int i,j,k,l,s,x;
        int a[MAX],b[MAX],c[MAX],sum[MAX*MAX];
        for(i=0;i<L;i++)
        {
            scanf("%d",&a[i]);
        }
        for(i=0;i<N;i++)
        {
            scanf("%d",&b[i]);
        }
        for(i=0;i<M;i++)
        {
            scanf("%d",&c[i]);
        }

        l=0;
        for(i=0;i<L;i++)
        {
            for(j=0;j<N;j++)
            {
                sum[l++]=a[i]+b[j];
            }
        }
        quickSort(sum,0,L*N-1);  //排序
        scanf("%d",&s);
        printf("Case %d:\n",num++);
        for(i=0;i<s;i++)
        {
            scanf("%d",&x);
            int flag=0;
            for(k=0;k<M;k++)
            {
                if(BinarySearch(sum,L*N,x-c[k])!=-1)
                {
                    flag=1;
                    break;
                }
            }
            if(flag) printf("YES\n");
            else printf("NO\n");
        }
    }
    return 0;
}