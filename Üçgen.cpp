#include <stdio.h>
#include <stdlib.h>

int main(){
	
	float a,b,c;
	float d,e,f;
	
	
	printf("1.Kenari Giriniz:");
	scanf("%f",&a);
	
	printf("2.Kenari Giriniz:");
	scanf("%f",&b);
	
	printf("3.Kenari Giriniz:");
	scanf("%f",&c);
	

	d = abs(a-b);
	e = abs(a-c);
	f = abs(a-f);
	if( a+b>c || a-b < d || a+c>b || a-c<e || b+c>a || b-c<a ){
	
		
		printf("Ucgen Yazilabilir.");
}
	else {
		 printf("Ucgen Yazilamaz.");
		
	}
	
	
	return 0;
}
