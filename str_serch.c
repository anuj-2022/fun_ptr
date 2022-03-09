#include<stdio.h>
#define size 10

int str_search(char *a,char c);

void main()
{
	int i=0,j=0;
	char str[size],ch;
	int (*fp)(char*,char);
	printf("Enter the string and search char\n");
	scanf("%s %c",str,&ch);
	fp=str_search;
	i=fp(str,ch);
	i>0?printf("data is found\n"):printf("data is not found\n");
}

int str_search(char *a,char c)
{
	int i=0,j=0;
	for(i=0;*a!='\0';i++)
	{
		if(*a==c)
		{
			j++;
			break;
		}
		a++;
	}
	if(j==1)
	return 1;
	else
	return 0;
}
