//Nome: Bruno Mesquita Bicalho
//Matricula: 892151
#include<stdio.h>
int main(){

    int n, a, b;
    int termo = 1;
    int contagemEncontrados = 0;

    printf("Digite a quantidade de elementos desejada: ");
    scanf("%d", &n);
    printf("Digite o valor de inicio (a) e o de fim (b): ");
    scanf("%d %d", &a, &b);


    while (contagemEncontrados < n && termo <= b) {
       
        if ((termo % 3 == 0 && termo % 5 == 0) || (termo % 7 == 0)) {
            if (termo > a && termo < b) {
                printf("%d ", termo);
                contagemEncontrados++;
            }
        }
        termo = termo + 2;
    }

    if (contagemEncontrados == 0) {
        printf("Nenhum elemento encontrado no intervalo informado.");
    }

    printf("\n");
    return 0;


}
