#include <iostream>
using namespace std;

void leituradenotas(float *notas,int alunos){
    for(int i = 0;i < alunos;i++){
        cin >> notas[i];
    }
}
void media(float *notas,int alunos){
    int media = 0;
    for(int i = 0;i < alunos;i++){
        media += *(notas + i);
    }
    media /= alunos;
    cout << media << endl;
}

int main(){
    int alunos;
    float *notas;

    cin >> alunos;
    notas = new float[alunos];
    if (!(notas = new(nothrow) float[alunos])){
        cout << "Falha de alocacao de memoria" << endl;
        return -1;
    }
    leituradenotas(notas,alunos);
    media(notas,alunos);

    delete[] notas;
    notas = NULL;
    return 0;
}