#include<stdio.h>
#include<string.h>
int main()
{
	FILE*fp;
	char ch;
	fp=fopen("Abc.txt","r");
	if(fp==NULL)
	{
		printf("file is not available");
	}
	else
	{
		while(!feof(fp))
		{
			ch=fgetc(fp);
			printf("%c",ch);
		}
		fclose(fp);
	}
	return 0;
}
