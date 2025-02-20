#include <stdio.h>
int call(int,int);
int main()
{
	int a,b,c;
	printf("enter the value");
	scanf("%d%d",&a,&b);
	c=call(a,b);
	printf("%d\n",c);
}
int call(int n1,int n2)
{
	return n1+n2;
}

