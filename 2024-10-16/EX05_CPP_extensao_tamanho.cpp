/*
escreve um programa em c++ que leia arguemntos na linha de comandos 
e mostre todos os ficheiros na pasta que têm extensão igual

U15_0810
Indira
2024-10-15
*/

#include <iostream>
#include <filesystem> 
#include <string>

using namespace std;
namespace fs = filesystem;

int main(int argc, char* argv[]) {
    // Verificar se foram passados argumentos, argc indica quantos argumentos foram sendo que o 1º argumento (argv[0]=nome_do_programa)
    if (argc != 2) {
        std::cout << "Usage: " << argv[0] << " <file_extension>" << std::endl;
        return 1;
    }

    // adicionar ponto à extensão
    std::string extension = argv[1];
    if (extension[0] != '.') {
        extension = "."+ extension;
    }

    //print header
    cout << left << setw(60) << " <file_extension>" << "Size (bytes)" << endl;
    cout << string(80, '-') << endl;

    try{
        for (const auto& entry : fs::directory_iterator(".")) {
            if(entry.is_regular_file() && entry.path().extension() == extension){
                const auto& path = entry.path();

                uintmax_t file_size = fs::file_size(path);

                cout << left << setw(60) << path.string() << file_size << endl;
            }  
        }
        cout<< "\n";
    }catch(const fs::filesystem_error& e){
        cerr << "Error: "<< e.what() << endl;
        return 1;
    }

    return 0;
}