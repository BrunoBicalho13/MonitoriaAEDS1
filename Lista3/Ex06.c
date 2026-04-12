//Nome: Bruno Mesquita Bicalho
//Matricula : 892151
#include<stdio.h>
int main(){
	int n, anterior = 1, atual = 1, proximo;
	printf("Qual valor da sequencia de fibonacci gostaria de imprimir? \n");
	scanf("%d",&n);
	

	if(n <= 0)
		printf("A posicao deve ser um numero inteiro positivo\n");		
	else if(n == 1)
		printf("%d\n",anterior);
	else if(n == 2)
		printf("%d\n",atual);
	else{
		for(int i = 3; i <=n; i++){
			proximo = anterior + atual;
			anterior = atual;
			atual = proximo;
		}
		
		printf("%d\n",atual);
	}

}

