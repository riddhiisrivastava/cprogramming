#include<stdio.h>
void main()
{
	int i,n,j;
	printf("Enter the value;");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
			for(j=1;j<=2*n-1;j++){
					if(j>=n-(i-1)&&j<=n+(i-1))
					printf("%i",j);
				else
						printf(" ");//change the star value from space to print differrent pyramid.
			}
				printf("\n");
	}

	
}
