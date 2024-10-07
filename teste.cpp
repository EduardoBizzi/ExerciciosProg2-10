#include <iostream>
using namespace std;

int main(){
int *v, n;

cin >> n;
if (!(v = new(nothrow) int[n])){
    cout << "Falha de alocacao de memoria" << endl;
    return -1;
}
for (int i = 0; i < n; i++){
 v[i] = i;
 cout << v[i] << " ";
}
}