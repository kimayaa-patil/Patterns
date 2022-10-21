/*	1
	2   4
	3   6   9
	4   8   12   18     */
	
	
#include<stdio.h>
void main(){
	
	int r,n=1;
	printf("Rows : ");
	scanf("%d",&r);
	
	for (int i=1; i<=r; i++){
		for (int j=1; j<=i; j++){
			printf("%d\t",i*j);
		}
		printf("\n");
	}
}
