
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main()
{
    int dado;
    srand(time(NULL));
    
    dado = 1 + rand()%100+1;
    printf("tente adivinhar o valor do dado: \n");
    int palp;
    scanf("%d", &palp);
    while (palp < 1 || palp > 100) {
        printf("tente adivinhar o valor do dado: \n");
        scanf("%d", &palp);
    }
    if (palp == dado) {
        printf("parabéns, você acertou!");
    }
    if (palp < dado ) {
        printf("voce chutou muito baixo! o valor correto era %d\n", dado);
    }
    if (palp > dado ) {
        printf("voce chutou muito alto! o valor correto era %d\n", dado);
    }

    return 0;
}
