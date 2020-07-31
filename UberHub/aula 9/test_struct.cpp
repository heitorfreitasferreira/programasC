#include <bits/stdc++.h>
using namespace std;
typedef struct{
    char nome[50];
    float notas[3];
}dadosAluno;
int main(){
    dadosAluno a[4];
    for(int i = 0; i<4; i++){
        cout<<"Insira o nome do aluno "<<i+1<<": ";
        cin>>a[i].nome;
        for(int j = 0; j<3; j++){
            cout<<"Insira a nota "<<j+1<<" do aluno "<<i+1<<": ";
            cin>>a[i].notas[j];
        }
    }
    for(int i = 0; i<4; i++){
            cout<<"Aluno "<<i+1<<": "<<a[i].nome<<endl;
        for(int j = 0; j<3; j++){
            cout<<"Nota "<<j+1<<": "<<a[i].notas[j]<<endl;
        }
    }
    return 0;
}
