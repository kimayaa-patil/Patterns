/*	c
	b   b
	a   a   a     */
	
#include<stdio.h>
void main(){
	
	int r;
	printf("Rows : ");
	scanf("%d",&r);
	
	char ch = 64+r;
	for (int i=0; i<r; i++){
		for(int j=0; j<=i; j++){
			printf("%c\t",ch);
		}
		ch--;
		printf("\n");
	}
}
	
