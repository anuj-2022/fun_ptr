#include<stdio.h>
#include<string.h>
#define size	10

int str_cmp(char *a,char *b);

void main()
{
	int n=0;
	const char str1[size],str2[size];
	printf("Enter the first and second string data \n");
	scanf("%s %s",str1,str2);
//	printf("%s %s",str1,str2);
	int (*fp)(char*,char*);
	fp=str_cmp;

	n=fp(str1,str2,n);
	n>0?printf("string is not equal\n"):printf("string is equal\n");
	
}

int str_cmp(char *x,char *y)
{
int i=0,j=0;
for(i=0;*x!='\0';i++)
{
	if(*x!=*y)
	{
		j++;
		break;
	}
	x++;
	y++;
}
//printf("mach count is %d\n",j);
if(j==1)
return 1;
else
return 0;
}
	
