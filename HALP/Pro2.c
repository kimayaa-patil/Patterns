/*	1
	2   3
	4   5   6   
	7   8   9   10	   */
	
#include<stdio.h>
void main(){
	
	int r,n=1;
	printf("Rows : ");
	scanf("%d",&r);
	
	for (int i=0; i<r; i++){
		for(int j=0; j<=i; j++){
			printf("%d\t",n);
			n++;
		}
		printf("\n");
	}
}
	
