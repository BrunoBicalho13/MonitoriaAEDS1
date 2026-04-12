//Nome: Bruno Mesquita Bicalho
//Matricula: 892151
#include<stdio.h>
int main(){
	int n;
	int termo1 = 1;
	printf("Digite a quantidade de termos: \n");
	scanf("%d",&n);

	for(int i = 1; i <= n; i++){
		printf("%d ",termo1);
		termo1 = termo1 + 2;
	}
	printf("\n");
	return 0;
}
