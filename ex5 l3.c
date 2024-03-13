#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main() {
    int num;
    int cont = 0;
    printf("Digite o número para saber seus divisores: \n");
    scanf("%d", &num);
    int divisores[100];
    
    for (int i = 1; i <= num; i++) {
        if (num % i == 0) {
            divisores[cont] = i;
            cont++;
        }
    }

    printf("Divisores de %d: ", num);
    for (int i = 0; i < cont; i++) {
        printf("%d ", divisores[i]);
    }
    int soma = 0; 
    for (int i = 0; i < cont; i++) {
        soma += divisores[i];
    }
    if (soma == num){
        printf("\nO número é perfeito!\n");
    }
    else {
        printf("\nO número não é perfeito.\n");
    }
    
    return 0;
}
