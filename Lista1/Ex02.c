#include<stdio.h>
#include<math.h>

int main(){
	float lado,perimetro,area,diagonal;
	scanf("%f",&lado);

	perimetro = 4 * lado;
	area = lado * lado;
	diagonal = lado * sqrt(2);

	printf("O perimetro eh: %.2f\n",perimetro);
	printf("A area eh: %.2f\n",area);
	printf("A diagonal eh: %.2f\n",diagonal);
	return 0;
}
