#include<stdio.h>
int main()
{
	int a,b,c;
	printf("enter the three num:");
	scanf("%d%d%d",&a,&b,&c);

  if(a<b)
  {
   	if(a<c)
  	{
   		printf("a smallest value:");
  	}
      else
      {
	      printf("c smallest value:");
      }
  }
  
  else if(b<c)
 
      {
	  printf("b smallest value:");
      }
  else
     {
	     printf("c smallest value:");
     }
  return 0;
}
