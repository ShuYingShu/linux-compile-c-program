#include "include/merge.h"

void merge(int a[],int p,int mid,int q)
{
    int i,j,k;
    int n1,n2;
    int l1[100],l2[100];
    n1=mid-p+1;
    n2=q-mid;
    for(i=1;i<=n1;i++)
        l1[i]=a[p+i-1];
    for(i=1;i<=n2;i++)
        l2[i]=a[mid+i];
    i=1;j=1;k=p;
    while(i<=n1&&j<=n2)
    {
        if(l1[i]>=l2[j])
        {
            a[k]=l1[i];
            i++;
            k++;
        }
        else
        {
            a[k]=l2[j];
            j++;
            k++;
        }
    }
    if(i>n1)
        for(;j<=n2;j++)
        {
            a[k]=l2[j];
            k++;
        }
    else
        for(;i<=n1;i++)
    {
        a[k]=l1[i];
        k++;
    }
}
