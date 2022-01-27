#include<stdio.h>
#include<conio.h>
int main()
{
	FILE*fp;
	char newvar[10];
	char ch;
	fp=fopen("Abc.txt","r");
	if(fp==NULL)
	{
		printf("unable to open this file");
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
