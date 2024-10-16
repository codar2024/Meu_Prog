#include <stdio.h>

/**
 * A função principal `main()` imprime recursivamente os valores de uma
 * variável estática `i` em ordem decrescente, a partir do valor inicial de 1.
 * A função se chama repetidamente até que `i` chegue a 0.
 */
int main()
{
    static int i = 1;  // 'i' é uma variável estática inicializada com o valor 1. Ela mantém seu valor entre chamadas recursivas da função.

    if(i--) {          // Verifica se 'i' é diferente de 0 antes de continuar. Em seguida, 'i' é decrementada após a verificação.
        printf("%d", i); // Imprime o valor atual de 'i'. Na primeira execução, 'i' é 0 porque foi decrementada.
        main();         // Chama recursivamente a função `main`, até que 'i' atinja 0.
    }
    return 0;          // Quando 'i' atinge 0, o programa retorna e encerra.
}
