/*
Esta tarefa assíncrona tem como objetivo relembrar a função main(). 
Exatamente, é uma "função" e como tal pode aceitar parâmetros de entrada!
Até hoje não o temos feito, certo?
Mas podemos fazer... 
Vejam, em anexo, uma imagem de exemplo.
Então, escrevam código em C/C++ que mostre a utilização de parâmetros (ou argumentos).
Esses parâmetros devem ser visualizados no tradicional ecrã.
Mas também ser ser guardados num ficheiro de texto.

U15_0810
Indira
2024-10-08
*/

#include <iostream>
#include <fstream> //  ficheiros

using namespace std;

int main(int argc, char* argv[]) {
    // Verificar se foram passados argumentos, argc indica quantos argumentos foram sendo que o 1º argumento (argv[0]=nome_do_programa)
    if (argc < 2) {
        cout << "Não foi passado nenhum argumento." << endl;
        return 1;
    }

    // Abrir ficheiro para gravar os argumentos
    ofstream ficheiro("argumentos.txt");
    if (!ficheiro.is_open()) {
        cerr << "Erro ao abrir o ficheiro." << endl;
        return 1;
    }

    // Exibir os argumentos no ecrã e gravar no ficheiro
    cout << "Argumentos passados:" << endl;
    ficheiro << "Argumentos passados:" << endl;
    for (int i = 1; i < argc; ++i) {  // Começa no 1 para ignorar o nome do programa (argv[0])
        cout << argv[i] << endl;
        ficheiro << argv[i] << endl;
    }

    // Fechar o arquivo
    ficheiro.close();
    cout << "Argumentos gravados no ficheiro 'argumentos.txt'." << endl;

    return 0;
}
