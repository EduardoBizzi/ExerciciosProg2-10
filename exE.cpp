#include <iostream>
#include <string>
using namespace std;

typedef struct{
    string nome;
    int serie;
    float nota;
}Aluno;

void leituradedados(float *notas,int alunos,Aluno aluno){
    for(int i = 0;i < alunos;i++){
        getline(cin,aluno.nome);
        cin >> aluno.serie >> aluno.nota;
        notas[i] = aluno.nota;
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
    Aluno aluno;
    float *notas;
    
    cin >> alunos;
    notas = new float[alunos];
    if (!(notas = new(nothrow) float[alunos])){
        cout << "Falha de alocacao de memoria" << endl;
        return -1;
    }
    leituradedados(notas,alunos,aluno);
    media(notas,alunos);

    delete[] notas;
    notas = NULL;
    return 0;
}