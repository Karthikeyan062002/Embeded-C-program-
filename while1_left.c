#include<stdio.h>
int main()
{
        int i=0,j,k;
        while(i<=5)
        {
                j=0;
                while(j<2*(5-i)-1)
                {
                        printf(" ");
                        j++;
                }
                k=0;
                while(k<=i)
                {
                        printf("* ");
                        k++;
                }
                printf("\n");
                i++;
        }
        return 0;

}

