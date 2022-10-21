/*	4
	3   3
	2   2   2
	1   1   1   1    */
	

#include<stdio.h>
void main(){

	int r;
	printf("Rows : ");
	scanf("%d",&r);
	
	int n=r;
	for (int i=0; i<r; i++){
		for(int j=0; j<=i; j++){
			printf("%d\t",n);
		}
		n--;
		printf("\n");
	}
}
	
