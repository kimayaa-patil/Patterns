/*	10
	I    H
	7    6    5
	D    C    B    A	*/
	
	
#include<stdio.h>
void main(){
	
	int r;
	printf("Rows : ");
	scanf("%d",&r);
	
	char ch=64+r+6;
	int n=r+6;
	
	for (int i=0; i<r; i++){
		for (int j=0; j<=i; j++){
			if (i%2==0){
				printf("%d\t",n);
			}
			else{
				printf("%c\t",ch);
			}
			n--;
			ch--;
		}
		printf("\n");
	}
}
	
