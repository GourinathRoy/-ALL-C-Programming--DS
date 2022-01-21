#include<stdio.h>
#include<stdlib.h>
int main()
{
	FILE *fp;
	fp=fopen("Abc.txt","w");
	if(fp==NULL)
	{
		printf("file is not available");
	}
	else
	{
		printf("file is available");
	}
	return 0;
}
