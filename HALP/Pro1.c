/*	*	
	*	*
	*	*	*
	*	*	*	*	*/
	
#include<stdio.h>
void main(){
	
	int r;
	printf("Rows : ");
	scanf("%d",&r);
	
	for (int i=0; i<r; i++){
		for (int j=0; j<=i; j++){
			printf("*\t");
		}
		printf("\n");
	}
}
