#include <bits/stdc++.h>
using namespace std;
typedef struct{
    char nome[50];
    float medalhas[3];
}structPais;

void selectionSort(int vet[],int tam){
    for(int i = 0;i<tam;i++){
            int menorIndex = i;
        for(int j = i+1; j < tam; j++){
            if(vet[j]<vet[menorIndex]){
                menorIndex = j;
            }
        }
        int aux = *vet[i];
        *vet[i] = *vet[menorIndex];
        *vet[menorIndex] = aux;
    }
}


int main(){
    int x;
    cin>>x;
    structPais pais[x];
    for(int q=0;q<x;q++){
        for(int i = 0; i<4; i++){
            cout<<"Insira o nome do aluno "<<i+1<<": ";
            cin>>pais[i].nome;
            for(int j = 0; j<3; j++){
                cout<<"Insira a nota "<<j+1<<" do aluno "<<i+1<<": ";
                cin>>pais[i].medalhas[j];
            }
        }
    }
    int *ouro[x]
    for(int i = 0; i<x; i++){
        ouro[x]=&pais[x].medalhas[0]
    }

    return 0;
}
