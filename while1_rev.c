    #include<stdio.h>
    int main()
   {
	   int i=5,j;
	   while(i>=0)
	   {
		   j=0;
		   while(j<=i)
		   {
			   printf(" * ");
			   j++;
		   }
		   printf("\n");
		   i=i-1;
	   }
	   return 0;
   }
