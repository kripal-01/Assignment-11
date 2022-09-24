//4. Write a function to find the next prime number of a given number. (TSRS)
#include<stdio.h>
int prime(int);
int main()
{
	int a;
	printf("enter no.");
	scanf("%d",&a);
   int s=prime(a);
   printf("%d",s);
   return 0;
	
}
int prime(int n)
{ int i,j,flag=0;
	
	for (i = n+1; 1; i++)
    {
        for (j = 2; j < i / 2; j++)
        {
            if (i % j == 0)
                break;

            /* code */
        }
        if (i % j != 0)
        {
            return i;
           
	}   }

	
	
}

