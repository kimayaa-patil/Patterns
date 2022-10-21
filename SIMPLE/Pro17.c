/*	9    64   7
	36   5    16
    	3    4    1	*/
	
#include<stdio.h>
void main(){
	
	int r;
	printf("Rows : ");
	scanf("%d",&r);
	
	int n = r*r;
	
	for(int i=0; i<r; i++){
		for(int j=0; j<r; j++){
			if((i+j)%2==0){
				printf("%d\t",n);
			}
			else{
				printf("%d\t",n*n);
			}
			n--;
		}
		printf("\n");
	}
}
