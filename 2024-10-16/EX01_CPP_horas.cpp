/*Nesta tarefa assíncrona devem resolver o seguinte exercício (em C++): 
"Pretende-se um programa que leia as horas, minutos e segundos introduzidas pelo utilizador, 
e calcule o número total de segundos que passaram desde o início do dia, ou seja, desde as 00:00h".
O programa deve efetuar uma validação aos valores introduzidos:
a hora não pode ser superior a 23 nem inferior a 1;
os minutos não podem ser superiores a 60 nem inferiores a 0;
os segundos não podem ser superiores a 60 nem inferiores a 0;
o valor total de segundos deve ser guardado num ficheiro de texto.
Submetam o código em C++ e o ficheiro de texto criado.

U15_0810
Indira
2024-10-08
*/


#include <iostream>
#include <fstream>

using namespace std;

int main() {
    int horas, minutos, segundos, total_segundos;

    // Solicitar as horas, minutos e segundos
    cout << "Insira as horas (0-23): ";
    cin >> horas;
    
    // Validação das horas
    if (horas < 0 || horas > 23) {
        cout << "Horas inválidas! Deve ser um valor entre 0 e 23." << endl;
        return 1;
    }

    cout << "Insira os minutos (0-60): ";
    cin >> minutos;

    // Validação dos minutos
    if (minutos < 0 || minutos >= 60) {
        cout << "Minutos inválidos! Deve ser um valor entre 0 e 60." << endl;
        return 1;
    }

    cout << "Insira os segundos (0-60): ";
    cin >> segundos;

    // Validação dos segundos
    if (segundos < 0 || segundos >= 60) {
        cout << "Segundos inválidos! Deve ser um valor entre 0 e 60." << endl;
        return 1;
    }

    // Cálculo do total de segundos desde o início do dia
    total_segundos = (horas * 3600) + (minutos * 60) + segundos;

    // Mostrar o resultado ao usuário
    cout << "Já passaram " << total_segundos << "segundos desde que o dia começou."<< endl;

    // Gravar o resultado num ficheiro de texto
    ofstream arquivo("total_segundos.txt");
    if (arquivo.is_open()) {
        arquivo << "Total de segundos desde o início do dia: " << total_segundos << endl;
        arquivo.close();
        cout << "Resultado gravado no ficheiro 'total_segundos.txt'." << endl;
    } else {
        cout << "Não foi possível abrir o ficheiro!" << endl;
    }

    return 0;
}
