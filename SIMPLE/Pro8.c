//PROGRAM 8

/*   1   3   5
     7   9   11
     13  15  17   */
     
#include<stdio.h>
void main(){

	int r, n=1;
	printf("Rows Number : ");
	scanf("%d",&r);
	
	for(int i=1; i<=r; i++){
		for(int j=1; j<=r; j++){
			printf("%d\t",n);
			n+=2;		
		}
		printf("\n");
	}
}	
