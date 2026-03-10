#include<stdio.h>
int main(){
	int ano;
	scanf("%d",&ano);

	if((ano % 100 != 0 && ano % 4 ==0) || ano % 400 ==0){
		printf("O ano eh bissexto\n");
	}else {
		printf("O ano nao eh bissexto\n");
	}
}
