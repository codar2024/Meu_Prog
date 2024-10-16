#include <stdio.h>

void F()
{
    static int i;  // 'i' é uma variável estática, então ela mantém seu valor entre chamadas da função.
    i++;           // Incrementa o valor de 'i' em 1 a cada vez que a função é chamada.
    printf("%d", i); // Imprime o valor atual de 'i'.
}

int main()
{
    F();  // Chama a função F(), incrementa 'i' e imprime seu valor.
    F();  // Chama novamente a função F(), incrementa 'i' e imprime seu valor.
    F();  // Chama mais uma vez a função F(), incrementa 'i' e imprime seu valor.

    return 0;
}
