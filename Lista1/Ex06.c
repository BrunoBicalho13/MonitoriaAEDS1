#include<stdio.h>
#include<math.h>
int main(){
	int razao, primeiro, termos,termo_final;

	printf("Digite o numero de termos da sua PA: \n");
	scanf("%d",&termos);

	printf("Digite a razao da sua PA: \n");
	scanf("%d",&razao);

	printf("Digite o primeiro termo da sua PA: \n");
	scanf("%d",&primeiro);

	termo_final = primeiro + (termos - 1) * razao;

	printf("O termo final da sua PA = %d \n",termo_final);
	return 0;
}
