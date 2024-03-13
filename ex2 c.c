
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main()
{
    int sort;
    int cont = 0;
    srand(time(NULL));
    
    sort = 1 + rand()%100+1;
    printf("tente adivinhar o valor : \n");
    int palp;
    scanf("%d", &palp);
    while (palp < 1 || palp > 100) {
        printf("tente adivinhar o valor : \n");
        scanf("%d", &palp);
    }
    
    while (palp != sort) {
        if (palp < sort ) {
            printf("voce chutou muito baixo! \n");
        }
        if (palp > sort ) {
            printf("voce chutou muito alto! \n");
        }
        scanf("%d", &palp);
        cont++;

    }
    if (palp == sort) {
        printf("parabéns, você acertou! o valor era %d \n", sort);
        printf("número de tentativas: %d \n", cont);
    }

    return 0;
}
