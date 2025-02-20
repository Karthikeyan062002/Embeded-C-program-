 #include<stdio.h>
 int call()
{
	int a,b,c;
	printf("enter the three num\n");
	scanf("%d%d%d",&a,&b,&c);
	int d=a+b+c;
	printf("%d",d);
	return 0;
}
int two(int  a,int b)
{
	int c=a+b;
	printf("%d",c);
	return 0;
}
int main()
{
	call();
	int a,b;
	printf("Enter two  numbers:");
	scanf("%d%d",&a,&b);
	two(a,b);
	
}
