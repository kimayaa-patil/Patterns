//PROGRAM 13

/*  4  4  4  4
    3  3  3  3
    2  2  2  2
    1  1  1  1  */
    
#include<stdio.h>
void main(){
	
	int r;
	printf("Rows Number : ");
	scanf("%d",&r);
	
	int n=r;
	for(int i=1; i<=r; i++){
		for(int j=1; j<=r; j++){
			printf("%d\t",n);
		}
		n--;
		printf("\n");
	}
}
