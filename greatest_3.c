#include<stdio.h>
int call()
{
	int a,b,c;
	printf("enter the value");
	scanf("%d%d%d",&a,&b,&c);
	if(a<b)
	{
          if(b<c)
	  {
		  printf("%d",c);
	  }
	  else 
	  {
		  printf("%d",b);
	  }
	}
	  else if(c<a)
	  {
		printf("%d",a);
	  }
          else 
	  {
	      printf("%d",c);
	  }
}
int main()
{
  call();
  return 0;
}  
	
	



