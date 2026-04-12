//Nome: Bruno Mesquita Bicalho
//Matricula:892151
#include<stdio.h>
int main(){
    char c;

    printf("Digite um caractere: ");
    scanf("%c", &c); getchar();

   
    if (c >= 'A' && c <= 'Z') {
        printf("Maiúscula\n");
    }
    else if (c >= 'a' && c <= 'z') {
        printf("Minúscula\n");
    }
    else if (c >= '0' && c <= '9') {
        printf("Dígito\n");
    }
    else {
        printf("Outro caractere\n");
    }

    return 0;


}
