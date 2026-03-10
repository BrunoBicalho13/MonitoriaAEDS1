#include<stdio.h>
#inlclude<math.h>
int main(){
	float a, b,c,x1,x2,delta;
	scanf("%f %f %f",&a,&b,&c);

	delta = pow(b,2) - (4 * ( a * c));

	x1 = (-b + sqrt(delta)) / (2 * a);
	x2 = ( -b - sqrt(delta)) / ( 2 * a);

	printf("As raizes sao: %.2f %.2f", x1,x2);
}


