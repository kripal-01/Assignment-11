//More on functions in C Language
//1. Write a function to calculate LCM of two numbers. (TSRS)
#include<stdio.h>
int lcm(int,int);
int main()
{
	int a,b;
	printf("enter two no");
	scanf("%d %d",&a,&b);
	int r=lcm(a,b);
	printf("%d",r);
	return 0;
}

int lcm(int a,int b)
{ int i;
	
        for ( i = 1; i <= a*b; i++)
        {
           if((i%a==0)&&(i%b==0))
           {
            break;
           }
        }
        return i;
}

