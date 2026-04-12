//Nome: Bruno Mesquita Bicalho
//Matricula: 892151
#include<stdio.h>
int main(){
	int n;
	int termo = 1;
	int contagemValidos = 0;
 	
	printf("Digite a quantidade de termos: \n");
        scanf("%d",&n);

	while(contagemValidos < n){
		if((termo % 3 == 0 && termo % 5 == 0) || (termo % 7 == 0)){
			printf("%d ",termo);
			contagemValidos++;
		}

		termo = termo + 2;
	}	
	printf("\n");
	return 0;
}
