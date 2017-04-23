#include <stdio.h>
#include <stdlib.h>
#include "include/sort.h"

int main()
{
	int a[10]={-1,29,34,71,29,12,36,90,3,55};
	int i;
	printf("the original vextor is:\n");
	for(i=1;i<10;i++)
		printf("%d ",a[i]);
	printf("\n");
	sort(a,1,9);
	printf("after merge-sort,the new vextor is:\n");
	for(i=1;i<10;i++)
		printf("%d ",a[i]);
	printf("\n");
	return 0;
}
