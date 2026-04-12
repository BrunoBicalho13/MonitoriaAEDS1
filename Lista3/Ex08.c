//Nome: Bruno Mesquita Bicalho
//Matricula: 892151
#include<stdio.h>
int main(){
	int I;
	float R;
	printf("Digite um numero inteiro I e um numero Real R: \n");
	scanf("%d %f",&I,&R);

	while( I > 10){
		printf("%d\n",I);
		I = I -2;
		while(R < 10.0){
			printf("R: %.2f e I: %d\n",R,I);
			R = R + 1.0;
		}

	}

	return 0;
}
