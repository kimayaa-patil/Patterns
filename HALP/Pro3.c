/*	1
	1   2
	1   2   3
	1   2   3   4	   */
	
#include<stdio.h>
void main(){
	
	int r;
	printf("Rows : ");
	scanf("%d",&r);
	
	for (int i=0; i<r; i++){
		int n=1;
		for(int j=0; j<=i; j++){
			printf("%d\t",n);
			n++;
		}
		printf("\n");
	}
}
		
