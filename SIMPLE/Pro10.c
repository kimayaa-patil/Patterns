//PROGRAM 10

/*   D4  C3  B2  A1
     D4  C3  B2  A1
     D4  C3  B2  A1
     D4  C3  B2  A1   */
     
#include<stdio.h>
void main(){
	
	int r;
	printf("Rows Number : ");
	scanf("%d",&r);
	
	for(int i=1; i<=r; i++){
		
		int n=r;
	        char ch=64+r;
	        
		for(int j=1; j<=r; j++){
			printf("%c%d\t",ch,n);
			n--;
		        ch--;
		}
		printf("\n");
	}
}
