/*
Nesta tarefa assíncrona devem resolver o seguinte exercício (em C++): 
"Faça um programa que coloque "Olá Mundo!" em bom português (com acentos), e que indique
o tamanho em bytes (operador sizeof) dos seguintes tipos de dados: char; short; int; long;
long long; float; double; long double".
O programa deve guardar os resultados num ficheiro de texto
Submetam o código em C++ e o ficheiro de texto criado.

U15_0810
Indira
2024-10-08
*/
#include <iostream>
#include <fstream> //  ficheiros
using namespace std;

int main() {

    // Configura a localização para utilizar o encoding UTF-8
    setlocale(LC_ALL, "pt_PT.UTF-8"); //não funcionou
    
    cout << "Olá Mundo!" << endl;

    // Cria um objeto ofstream para escrever num ficheiro
    ofstream ficheiro("resultados.txt");

    // Verifica se o ficheiro foi aberto corretamente
    if (ficheiro.is_open()) {
        // Escreve no ficheiro o tamanho em bytes de cada tipo de dado
        ficheiro << "Tamanhos dos tipos de dados em bytes:" << endl;
        ficheiro << "char: " << sizeof(char) << " bytes" << endl;
        ficheiro << "short: " << sizeof(short) << " bytes" << endl;
        ficheiro << "int: " << sizeof(int) << " bytes" << endl;
        ficheiro << "long: " << sizeof(long) << " bytes" << endl;
        ficheiro << "long long: " << sizeof(long long) << " bytes" << endl;
        ficheiro << "float: " << sizeof(float) << " bytes" << endl;
        ficheiro << "double: " << sizeof(double) << " bytes" << endl;
        ficheiro << "long double: " << sizeof(long double) << " bytes" << endl;

        // Fecha o ficheiro após escrever
        ficheiro.close();
        cout << "Os resultados foram guardados no ficheiro 'resultados.txt'." << endl;
    } else {
        cout << "Erro ao abrir o ficheiro!" << endl;
    }

    return 0;
}
