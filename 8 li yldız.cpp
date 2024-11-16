#include<stdio.h>



int main(){
	
	int i,j;
	
	for(i=1;i<=5;i++){
			if(i%2==0){
			printf("\t");
		}
		for(j=0;j<8;j++)
		{
			printf("*\t");
		}
			printf("\n");
			
	
	}
	
	
	
	return 0;
}
