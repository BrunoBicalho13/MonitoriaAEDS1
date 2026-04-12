//Nome: Bruno Mesquita Bicalho
//Matricula: 892151
#include<stdio.h>
#include<math.h>
int main(){
    	float a1, q, an;
    	int n;
    	
	printf("Digite o primeiro termo (a1): ");
    	scanf("%f", &a1);
    	printf("Digite a razao (q): ");
    	scanf("%f", &q);
    	printf("Digite a posicao do termo (n): ");
    	scanf("%d", &n);

	//Primeira forma de resolver:

	an = a1 * pow(q, n - 1);

    	printf("O %d-esimo termo da PG e: %.2f\n", n, an);

   
	//Resolvendo sem usar exponenciação:
	an = a1;
	for(int i  = 1; i < n; i++){
		an = an * q;
	}

	printf("O %d-esimo termo da PG e: %.2f\n", n, an);

	//Resolvendo sem usar Exponenciação e Multiplicação:
	an = a1;
	for (int i = 1; i < n; i++) {
        	int soma = 0;
        	for (int j = 0; j < q; j++) {
            	soma += an;
        	}
        
        	an = soma;
    	}
	
	printf("O %d-esimo termo da PG e: %.2f\n", n, an);

}
