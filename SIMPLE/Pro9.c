//PROGRAM 9

/*   2   5   10
     17  26  37
     50  65  82   */
     
#include<stdio.h>
void main(){
	
	int r, n=1;
	printf("Rows Number : ");
	scanf("%d",&r);
	
	for(int i=1; i<=r; i++){
		for(int j=1; j<=r; j++){
			printf("%d\t",n*n+1);
			n++;
		}
		printf("\n");
	}
}
