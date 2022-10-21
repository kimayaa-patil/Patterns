//PROGRAM 2

/*   1  2  3  4
     a  b  c  d
     1  2  3  4
     a  b  c  d   */
     
     
#include<stdio.h>
void main(){
	
	int r;
	
	printf("Rows Number : ");
	scanf("%d",&r);
	
	for(int i=1; i<=r; i++){
		int n=1;
		char ch='a';
		for(int j=1; j<=r; j++){
			if(i%2==0){
				printf("%c\t",ch);
				ch++;
			}
			else{
				printf("%d\t",n);
				n++;
			}
		}
		printf("\n");
	}
}
