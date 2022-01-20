#include <stdio.h>
int main()
{
	int i=1,n;
	printf("all odd number1 to n:\n");
	printf("\n enter value for n :");
	scanf("%d",&n);
	while(i<=n)
	{
		if(i%2==1)
		{
			printf("%d\n",i);
		}
		i++;
	}
}
