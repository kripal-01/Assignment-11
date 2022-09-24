//7. Write a function to print first N terms of Fibonacci series (TSRN)






#include <stdio.h>
void fibonacci(int);
int main()
{ int n;
	 printf("enter n   ");
  scanf("%d", &n);
  fibonacci(n);
  return 0;
}
void fibonacci(int n)
{
  int  i, previous = 0, now = 1,next=0;
 
  printf("1\n");
  
  for ( i = 0; i < n-1; i++)
  {
      next=previous+now;
       printf("%d\n",next);
      previous=now;
      now=next;
  }

  
 
}
