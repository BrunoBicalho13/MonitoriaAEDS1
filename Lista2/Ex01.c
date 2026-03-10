#include<stdio.h>

int main(){
	int num1, num2,dif;
	float div;
	scanf("%d %d", &num1,&num2);

	dif = num1 - num2;
	printf("Dif = %d\n",dif);
	if(num2 != 0){
		div = num1 / num2;
		printf("Div = %.2f\n",div);
	}else{
		printf("Nao eh possivel dividir por 0\n");
	}
}
