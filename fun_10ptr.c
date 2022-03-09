#include<stdio.h>

void hello(int x,int y);
void add(int x,int y);
void sub(int x,int y);
void mul(int x,int y);
void div(int x,int y);
void mod(int x,int y);
void swap(int x,int y);
void area_rect(int x,int y);
void star_patt(int x,int y);
void star_patt1(int x,int y);


void main()
{
	int i=0,a,b,n=0;
	void (*fp[10])(int,int)={hello,add,sub,mul,div,mod,swap,area_rect,star_patt,star_patt1};
	printf("Enter the value of a and b\n");
	scanf("%d %d",&a,&b);

	for(i=0;i<10;i++)
		fp[i](a,b);
}

void hello(int x,int y)
{
printf("hello world\n");
}

void add(int x,int y)
{
printf("a+b=%d\n",x+y);
}

void sub(int x,int y)
{
printf("a-b=%d\n",x-y);
}

void mul(int x,int y)
{
printf("a*b=%d\n",x*y);
}

void div(int x,int y)
{
printf("a/b=%d\n",x/y);
}

void mod(int x,int y)
{
printf("a(mod)b=%d\n",x%y);
}

void swap(int x,int y)
{
x=x+y;
y=x-y;
x=x-y;
printf("a=%d b=%d\n",x,y);
}

void area_rect(int x,int y)
{
printf("area of rectangle=%d\n",x*y);
}

void star_patt(int x,int y)
{
int i=0,j=0;
for(i=0;i<x;i++)
{
for(j=0;j<=i;j++)
printf("* ");
printf("\n");
}
}

void star_patt1(int x,int y)
{
int i=0,j=0;
for(i=0;i<y;i++)
{
for(i=j;j<y;j++)
printf("* ");
printf("\n");
}
}

