#include<stdio.h>
int main(){
	float num1,num2;
	scanf("%f %f",&num1,&num2);
	if(num1 > num2){
		printf("Num1 eh maior\n");
	}else if(num2 > num1){
		printf("Num2 eh maior\n");
	}else{
		printf("Os dois sao iguais\n");
	}
}
