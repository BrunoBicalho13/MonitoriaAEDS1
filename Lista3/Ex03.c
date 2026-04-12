//Nome: Bruno Mesquita Bicalho
//Matricula: 892151
#include<stdio.h>
int main(){
	int L, termo1 = 1,  anterior = 0,proximo;
	printf("Digite o valor limite: \n");
	scanf("%d",&L);
	
	if(L > 0)
		printf("%d ", anterior);

	while( termo1 < L){
		printf("%d ",termo1);
		
		proximo = anterior + termo1;
		anterior = termo1;
		termo1 = proximo;
	}
		return 0;
} 


