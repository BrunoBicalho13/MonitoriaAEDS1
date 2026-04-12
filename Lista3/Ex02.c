//Nome: Bruno Mesquita Bicalho
//Matricula: 898151
#include<stdio.h>
int main(){
	int L;
	printf("Digite o numero de termos de Fibonnaci que deseja imprimir:\n");
	scanf("%d",&L);
	int termo1 = 0,termo2= 1,proximo = 0;

	for(int i = 1; i <= L; i++){
		printf("%d ",termo1);
		proximo = termo1 + termo2;
		termo1 = termo2;
		termo2 = proximo;
	}
	
	return 0;
}
