#include<stdio.h>
#include<math.h>
int main(){
	int razao, primeiro, termos,termo_final;

        printf("Digite o numero de termos da sua PG: \n");
        scanf("%d",&termos);

        printf("Digite a razao da sua PG: \n");
        scanf("%d",&razao);

        printf("Digite o primeiro termo da sua PG: \n");
        scanf("%d",&primeiro);

        termo_final = (primeiro * pow(razao,termos-1));

        printf("O termo final da sua PG = %d \n",termo_final);
        return 0;
	

}
