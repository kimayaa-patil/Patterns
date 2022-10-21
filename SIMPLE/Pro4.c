//PROGRAM 4

/*   A  B  C
     D  E  F
     G  H  I   */
     
#include<stdio.h>
void main(){

	int r;
	printf("Rows Number : ");
	scanf("%d",&r);
	
	char ch='A';
	for(int i=1; i<=r; i++){
		for(int j=1; j<=r; j++){
			printf("%c\t",ch);
			ch++;
		}
		printf("\n");
	}
}	
