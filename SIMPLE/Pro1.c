//PROGRAM 1

/*   1  2  3  4
     2  3  4  5
     3  4  5  6
     4  5  6  7   */
     
     
#include<stdio.h>
void main(){

	int r, n=1;
	
	printf("Rows Number : ");
	scanf("%d",&r);
	
	for(int i=1; i<=r; i++){
		n=i;
		for(int j=1; j<=r; j++){
			printf("%d\t",n);
			n++;
		}
		printf("\n");
	}
}		
