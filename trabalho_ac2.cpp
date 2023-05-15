#include <iostream>
using namespace std;

int main() {
    //variaveis com salas decom seis numeros, que são os alunos
    int salas[6] = {35, 4, 22, 20, 36, 30};
    int Alunos = 0;

//percorrer cada numeros de alunos para mostrar e analisar o valor total
    for (int i = 0; i < 6; i++) {
        Alunos += salas[i];
    }

//calculo da media da sala, dividindo o numeros de alunos em 6 calculando uma media
    float media = static_cast<float>(Alunos) / 6;

//interface de usuario sobre a media da salas
    cout << "A média de alunos por sala é: " << media << endl;

//interface que mostrara todas as salas que estão acima da media da sala
    cout << "Salas acima da média: ";
    for (int i = 0; i < 6; i++) {
        if (salas[i] > media) {
            cout << i + 1 << " ";
        }
    }
    cout << endl;

    return 0;
}