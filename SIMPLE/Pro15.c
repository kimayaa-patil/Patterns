//PROGRAM 15

/*  D  C  B  A
    e  d  c  b
    F  E  D  C
    g  f  e  d  */
    
#include<stdio.h>
void main(){
	
	int r;
	printf("Rows Number : ");
	scanf("%d",&r);
	
	char ch1=64+r;
	
	for(int i=1; i<=r; i++){
		
		for(int j=1; j<=r; j++){
			printf("%c\t",ch1);
			ch1--;
		}
		ch1=ch1+r+1;
		printf("\n");		
	}
}
			
