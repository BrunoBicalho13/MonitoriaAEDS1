#include<stdio.h>
int main(){
	float lado1,lado2,lado3;
	scanf("%f %f %f", &lado1,&lado2,&lado3);

	if((lado1 == lado2 && lado1 != lado3) || (lado2 == lado3 && lado2 != lado1) || (lado1 == lado3 && lado1 != lado2)){
		printf("O triangulo eh isosceles\n");
	}else if(lado1 == lado2 && lado1 == lado3){
		printf("O triangulo eh equilatero\n");
	}else{
		printf("O triangulo eh escaleno\n");
	}
}
