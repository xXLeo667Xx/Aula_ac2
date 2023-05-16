#include <iostream>
#include <vector>
using namespace std;


int main() {
    int Salas;
    //interface de usuario para digitar o numero de salas
    cout << "Digite a quantidade de salas: ";
    cin >> Salas;

//'vector<int>'armazena variaveis do tipo 'int' como as salas, criamos uma variavel alunosPorSala e varievel alunos
    vector<int> alunosPorSala(Salas);
    int Alunos = 0;

//for para percorer todos os valores da varivel e calcular e comparar 
    for (int i = 0; i < Salas; i++) {
        //interface de usuario colocar o numero de alunos na salas
        cout << "Digite a quantidade de alunos na sala " << (i + 1) << ": ";
        cin >> alunosPorSala[i];
        Alunos += alunosPorSala[i];
    }

//calculo da media da salas, depois uma interface que mostrara a media de alunos por sala
    double mediaAlunos = static_cast<double>(Alunos) / Salas;
    cout << "A média de alunos por sala é: " << mediaAlunos << endl;

//interface que mostrara as salas que estão acima da media
    cout << "Salas com número de alunos acima da média:" << endl;
    for (int i = 0; i < Salas; i++) {
        if (alunosPorSala[i] > mediaAlunos) {
            cout << "Sala " << (i + 1) << ": " << alunosPorSala[i] << " alunos" << endl;
        }
    }

    return 0;
}
