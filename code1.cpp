#include<stdio.h>
int main(){
	int i,j,k=1,n;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		for(j=0;j<n-1-i;j++)
		printf("	");
		for(j=0;j<=i;j++)
		printf("%d	",k++);
		printf("\n");
	}
}
