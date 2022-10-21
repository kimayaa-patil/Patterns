/*	1   2   3   4
	a   b   c   d	
	5   6   7   8
	e   f   g   h     */  


#include<stdio.h>
void main(){
	
	char ch = 'a';
	int n = 1;
	int r;
	
	printf("Rows : ");
	scanf("%d",&r);
	
	for (int i=0; i<r; i++){
		for (int j=0; j<r; j++){
			if (i%2==0){
				printf("%d\t",n);
				n++;
			}
			else{
				printf("%c\t",ch);
				ch++;
			}
		}
		printf("\n");
	}
}
