//6. Write a function to print all Prime numbers between two given numbers. (TSRN)
#include<stdio.h>
void primen(int,int);
int main()
{
	int a,b;
	printf("enter  no.  ");
	scanf("%d %d",&a,&b);

	primen(a,b);
	return 0;
}
void primen(int m,int n)
{
	int i,j,flag=0;

	for(i=m+1;i<n;i++)
	{
		flag=0;
		for(j=2;j<=i/2;j++){
			if(i%j==0)
		{
				flag=1;
		break;
		}
		}
		if(flag!=1)
	printf("\n%d",i);	
	}

}
