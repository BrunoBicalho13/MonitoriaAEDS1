#include<stdio.h>
#include<math.h>
int somatorio(int x, int N){
	if (N == 2)
		return pow(x,2);

	else
		return pow(x,N) + somatorio(x, N -1);
}

int main(){
	float x;
	int n;
	
	x = 2;
	n = 4;

	float numerador = somatorio(x,n);
	float resultado = numerador / n;

	printf("Resultado: %.2f\n", resultado);

	return 0;
}
