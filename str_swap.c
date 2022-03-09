#include<stdio.h>
#define size 5

void str_swap(int *a,int *c);

void main()
{
	int i=0,j=0;
	int str1[size],str2[size];
	printf("enter the data in str1\n");
	for(i=0;i<size;i++)
	scanf("%d",&str1[i]);
	printf("enter the data in str2\n");
	for(i=0;i<size;i++)
        scanf("%d",&str2[i]);
	int (*fp)(int*,int*);
//	printf("Enter the string and search char\n");
//	scanf("%s %c",str,&ch);
	fp=str_swap;
	fp(str1,str2);
	printf("after swapping str1 data is\n");
	for(i=0;i<size;i++)
	printf("%d\n",str1[i]);
	printf("after swapping str2 data is\n");
	for(i=0;i<size;i++)
        printf("%d\n",str2[i]);
}

void str_swap(int *a,int *c)
{
	int i=0,t=0;
	for(i=0;i<size;i++)
	{
		t=*(a+i);
		*(a+i)=*(c+i);
		*(c+i)=t;
	}
}
