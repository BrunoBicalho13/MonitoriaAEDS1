#include<stdio.h>
#include<math.h>
int main(){
	
	float cateto1,cateto2,hipotenusa;
	scanf("%f %f",&cateto2,&cateto2);

	hipotenusa = sqrt(pow(cateto1,2) + pow(cateto2,2));

	printf("A hipotenusa eh: %.2f",hipotenusa);
	
	return 0;
}
