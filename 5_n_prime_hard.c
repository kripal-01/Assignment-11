//5. Write a function to print first N prime numbers (TSRN)

#include<stdio.h>
void primen(int);
int main()
{
	int a;
	printf("enter  no.  ");
	scanf("%d",&a);

	primen(a);
	return 0;
}
void primen(int m)
{
	int i,j,count=0;
   printf("\n2");
	for(i=2;1;i++)
	{
		for(j=2;j<=i/2;j++){
			if(i%j==0)
		break;
		}
		if(i%j!=0)
		{
			printf("\n%d",i);
			count++;
			if(count==m-1)
			break;
		}
		
	}

}
