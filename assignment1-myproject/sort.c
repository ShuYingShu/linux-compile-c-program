#include "include/sort.h"
#include "include/merge.h"

void sort(int a[],int p,int q)
{
    int mid;
    if(p<q)
    {mid=(q+p)/2;
    sort(a,p,mid);
    sort(a,mid+1,q);
    merge(a,p,mid,q);}
}
