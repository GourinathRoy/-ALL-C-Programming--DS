#include<stdio.h>
#include<conio.h>
int main()
{
	FILE*fp;
	char newvar[50];
	char newvar1[50];
	fp=fopen("Abc.txt","r");
	if(fp==NULL)
	{
		printf("unable to open this file");
	}
	else
	{
		fscanf(fp,"%s%s",newvar,newvar1);
		printf("%s     %s",newvar,newvar1);
	}
	fclose(fp);
	getch();
	return 0;
}
