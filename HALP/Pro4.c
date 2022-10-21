/*	1
	2   2
	3   3   3
	4   4   4   4	   */
	

#include<stdio.h>
void main(){
	
	int r,n=1;
	printf("Rows : ");
	scanf("%d",&r);
	
	for (int i=0; i<r; i++){
		for (int j=0; j<=i; j++){
			printf("%d\t",n);
		}
		n++;
		printf("\n");
	}
}
