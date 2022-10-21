//PROGRAM 7

/*   1    2    9    4
     25   6    49   8
     81   10   121  12
     169  14   225  16   */
     
     
#include<stdio.h>
void main(){
	
	int r,n=1;
	printf("Rows Number : ");
	scanf("%d",&r);
	
	for(int i=1; i<=r; i++){
		for(int j=i; j<=r; j++){
			if((i+j)%2==0)
				printf("%d\t",n*n);
			else
				printf("%d\t",n);
		n++;		
		}
		printf("\n");
	}
}			
