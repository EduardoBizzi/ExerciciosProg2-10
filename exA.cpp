#include <iostream>
using namespace std;

void alocacaodinamica(int *v, int n){
    for(int i = 0;i < n;i++){
        v[i] = i;
    }
}
void saida(int *v, int n){
    for(int i = 0;i < n;i++){
        cout << v[i] << " ";
    }
}


int main(){
    int *v, n;
    cin >> n;
    v = new int[n];
    if (!(v = new(nothrow) int[n])){
        cout << "Falha de alocacao de memoria" << endl;
        return -1;
    }
    alocacaodinamica(v,n);
    saida(v,n);

    delete[] v;
    v = NULL;
    return 0;
}