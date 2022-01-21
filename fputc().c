#include<stdio.h>
#include<string.h>
int main()
{
	FILE*fp;
	char ch[20]="gouri";
	int length=strlen(ch);
	int count;
	fp=fopen("Abc.txt","w");
	if(fp==NULL)
	{
		printf("file not available");
	}
	else
	{
		for(count=0;count<length;count++)
		{
			fputc(ch[count],fp);
		}
		printf("data insert succesful");
		fclose(fp);
	}
	return 0;	
}
