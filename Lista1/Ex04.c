#include<stdio.h>
void swap (float *a, float* b){
	float aux;
	aux = *a;
	*a = *b;
	*b = aux;
}
int main(){
	float a,b;
	scanf("%f %f",&a,&b);
	printf("a = %f, b = %f\n",a,b);
	swap(&a,&b);
	printf("a = %f, b = %f\n",a,b);
	return 0;
}
