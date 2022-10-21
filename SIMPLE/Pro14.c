//PROGRAM 14

/*  I  H  G
    F  E  D
    C  B  A  */
    
#include<stdio.h>
void main(){
	
	int r;
	printf("Rows Number : ");
	scanf("%d",&r);
	
	char ch=64+r*r;
	for(int i=1; i<=r; i++){
		for(int j=1; j<=r; j++){
			printf("%c\t",ch);
			ch--;
		}
		printf("\n");
	}
}
