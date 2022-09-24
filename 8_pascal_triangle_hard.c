//8. Write a function to print PASCAL Triangle. (TSRN)

#include<stdio.h>
int fact(int);
int combi(int , int);
void pascal(int);

int main()
{
	int n;
		printf("enter n ");
	scanf("%d",&n);

	
	pascal(n);
	
	
	return 0;
}
int fact(int n)
{
	int i,f=1;
	for(i=n;i>=2;i--)
	f*=i;	
	
	return f;
}
int combi(int n,int r)
{
	return fact(n)/(fact(r)*fact(n-r));
}
void pascal(int n)
{
	int i,j;
	for(i=0;i<=n;i++){
		for(j=0;j<=i;j++)
		{
			printf("%d ",combi(i,j));
			}
			printf("\n");	
	}

	
}

