/*


U15_0810
Indira
2024-10-16
*/

#include <iostream>
 
int main() {
   
    int numeros[5] = {10, 20, 30, 40, 50}; //array de 5 inteiros
   
    int *ptr = numeros; //ponteiro para o indece 0 do array
   
    std::cout << numeros[0] << std::endl; //faz print do indice 0 = 10
   
    std::cout << *ptr << std::endl; //ainda está a apontar para o indice 0 = 10
   
    ptr++;
    std::cout << *ptr << std::endl; //incrementa o ponteiro para o indice 1 = 20 e faz print
 
    ptr--;
    std::cout << *ptr << std::endl; //decrementa o ponteiro para o indice 0 = 10 e faz print
 
    std::cout << *(ptr + 2) << std::endl; //o ponteiro passa para o indice 2 = 30
 
    return 0;
}