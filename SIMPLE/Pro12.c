//PROGRAM 12

/*  3  2  1
    c  b  a
    3  2  1   */
    
#include<stdio.h>
void main(){
	
	int r;
	
	printf("Rows Number : ");
	scanf("%d",&r);
	
	for(int i=1; i<=r; i++){
		
		int n=r;
		char ch=96+r;
		
		for(int j=1; j<=r; j++){
			if(i%2==0)
				printf("%d\t",n);
			else
				printf("%c\t",ch);
			n--;
			ch--;
		}
		printf("\n");
	}
}
			
