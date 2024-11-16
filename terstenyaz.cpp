#include <stdio.h>
int main(){
	
	int sayi,yenisayi;
	yenisayi=0;
	printf("Sayi Al:");
	scanf("%d",a);
	 
	while(sayi>0){
		yenisayi*=10;
		yenisayi+=sayi%10;
		sayi/=10;
		printf("%d",yenisayi);	
	}
	

	
	
	
	
	
	return 0;
}
