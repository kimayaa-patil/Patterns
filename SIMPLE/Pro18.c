/*	1   2   3   4
	a   b   c   d
	#   #   #   #
	5   6   7   8
	e   f   g   h
	#   #   #   #	   */
	
	
#include<stdio.h>
void main(){
	
	int r,c,n = 1;
	char ch = 'a';
	
	printf("Rows : ");
	scanf("%d",&r);
	
	printf("Colom : ");
	scanf("%d",&c);
	
	for(int i=1; i<=r; i++){
		for(int j=1; j<=c; j++){
			if(i%3==1){
				printf("%d\t",n);
				n++;
			}
			else if(i%3==0){
				printf("#\t");
			}
			else{
				printf("%c\t",ch);
				ch++;
			}
		}
		printf("\n");
	}
}	
				
	
