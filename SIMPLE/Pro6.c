//PROGRAM 6

/*   $  =  $  =
     $  =  $  =
     $  =  $  =
     $  =  $  =   */
     
     
#include<stdio.h>
void main(){
	
	int r;
	printf("Rows Number : ");
	scanf("%d",&r);
	
	for(int i=1; i<=r; i++){
		for(int j=1; j<=r; j++){
			if(j%2==0)
				printf("= ");
			else
				printf("$ ");
		}
		printf("\n");
	}
}
