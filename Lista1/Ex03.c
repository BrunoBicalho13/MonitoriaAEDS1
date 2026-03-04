#include<stdio.h>
#include<math.h>

int main(){
	float a,b,c,y;
	scanf("%f %f %f",&a,&b,&c);

	y = a + (b/(c + a)) + (2 * (a-b)) + log2(64);

	printf("o valor de y eh: %f\n",y);
	return 0;

}
