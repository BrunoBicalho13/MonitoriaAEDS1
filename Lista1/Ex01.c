#include<stdio.h>
#include<math.h>
int main(){
	float raio,perimetro,area;
	scanf("%f",&raio);
	
	perimetro = 2 * 3.14 * raio;
	area = 3.14 * raio * raio;

	printf("O perimetro eh: %.2f, e a area eh: %.2f\n",perimetro,area);
	return 0;
}
