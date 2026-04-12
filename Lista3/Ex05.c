// Nome: Bruno Mesquita Bicalho
// Matricula: 892151
#include<stdio.h>
int main(){
	int n, multiplo = 0;
	printf("Quantos multiplos de 5 gostaria de imprimir? \n");
	scanf("%d",&n);
	for(int i = 0 ; i < n; i++){
		printf("%d ",multiplo);
		multiplo = multiplo + 5;
	}
	
	return 0;
}
