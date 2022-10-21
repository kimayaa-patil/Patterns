/*	a
	b   c
	d   e   f
	g   h   i   j     */
	
	
#include<stdio.h>
void main(){
	
	int r;
	char ch = 'a';
	printf("Rows : ");
	scanf("%d",&r);
	
	for (int i=0; i<r; i++){
		for(int j=0; j<=i; j++){
			printf("%c\t",ch);
			ch++;
		}
		printf("\n");
	}
}
