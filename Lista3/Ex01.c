//Nome: Bruno Mesquita Bicalho
//Matricula: 892151
#include<stdio.h>
int main(){
	int n,num;
	int soma = 0;
	printf("Quantos numeros gostaria de somar?\n");
	scanf("%d",&n);
	for(int i = 0; i < n; i++){
		printf("Digite o numero que deseja adicionar ao nosso somatorio\n");
		scanf("%d",&num);
		soma = soma + num;
	}

	printf("A soma eh : %d\n",soma);
	return 0;
}
