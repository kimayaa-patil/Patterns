//PROGRAM 11

/*  4  3  2  1
    5  4  3  2
    6  5  4  3
    7  6  5  4  */
    
#include<stdio.h>
void main(){
	
	int r;
	printf("Rows Number : ");
	scanf("%d",&r);
	
	int n=r;
	for(int i=1; i<=r; i++){
		for(int j=1; j<=r; j++){
			printf("%d\t",n);
			n--;
		}
		n=n+r+1;
		printf("\n");
	}
}
		
