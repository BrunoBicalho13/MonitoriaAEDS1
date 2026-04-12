#include<stdio.h>
float funcao(int N){
	if (N == 0)
		return 2;

	else
		return (funcao(N - 2) + N);

}

int main(){
	int n;

    	n = 12;

        float resultado = funcao(n);
        printf("O resultado recursivo para N = %d e: %.2f\n", n, resultado);

	return 0;
}
