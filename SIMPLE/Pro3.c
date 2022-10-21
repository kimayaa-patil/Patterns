//PROGRAM 3

/*  1  1  1  1
    2  2  2  2
    3  3  3  3
    4  4  4  4   */
    
#include<stdio.h>
void main(){

	int r,n=1;
	printf("Rows Number : ");
	scanf("%d",&r);
	
	for(int i=1; i<=r; i++){
		for(int j=1; j<=r; j++){
			printf("%d\t",n);
		}
		printf("\n");
		n++;
	}
}
