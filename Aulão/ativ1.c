#include <stdio.h>

long int fatorial(int num) {
    if (num <= 0) {
        return 1;
    } else {
        return num * fatorial(num - 1);
    }
}

int main() {
    int n;
    printf("Digite um numero para calcular o fatorial: ");
    scanf("%d", &n);
    
    long int resultado = fatorial(n);
    printf("O fatorial de %d e: %ld\n", n, resultado);
    
    return 0;
}
