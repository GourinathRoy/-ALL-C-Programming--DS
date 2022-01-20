#include<stdio.h>
int main()
{
	int a,b,max;
	printf("\n enter the number of a:");
	scanf("%d",&a);
	printf("\n enter the number of b:");
	scanf("%d",&b);
	max=a>b? a:b;
	printf("largest is % d", max);
	return 0;
}
