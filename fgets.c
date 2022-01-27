#include<stdio.h>
#include<conio.h>
int main()
{
	FILE*fp;
	char newvar[15];
	fp=fopen("college.txt","r");
	if(fp==NULL)
	{
		printf("unable to open this file");
	}
	else
	{
		while(!feof(fp))
		{
			fgets(newvar,15,fp);
			printf("%s",newvar);
		}
		fclose(fp);
		getch();
		return 0;
	}
}
