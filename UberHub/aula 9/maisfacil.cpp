#include <bits/stdc++.h>
using namespace std;

void arrayPrint(int vet[],int tam){
    for(size_t i=0; i<tam;i++) {
            cout<<vet[i]<<",";
    }
    cout<<endl;
}
void bubbleSort(int vet[],int tamanho){
    int i,j,aux;
    for(i=1;i< tamanho;i++){
        for(j=0;j< tamanho-1;j++){
            if(vet[j]>vet[j+1]){
                aux = vet[j];
                vet[j] = vet[j+1];
                vet[j+1] = aux;
            }
        }
    }
}
void arrayReverse(int vet[],int tam){
    int i,aux[tam];
    for(i = 0;i < tam;i++){
        aux[tam-1-i]= vet[i];
    }
    for(i=0;i<tam;i++){
        vet[i]=aux[i];
    }
}
void selectionSort(int vet[],int tam){
    for(int i = 0;i<tam;i++){
            int menorIndex = i;
        for(int j = i+1; j < tam; j++){
            if(vet[j]<vet[menorIndex]){
                menorIndex = j;
            }
        }
        int aux = vet[i];
        vet[i] = vet[menorIndex];
        vet[menorIndex] = aux;
    }
}
void insertionSort(int vet[], int tam){
    for(int i = 1; i<tam ; i++){
        int escolhido = vet[i];
        int primeiroOrdenado = i-1;
        while((primeiroOrdenado>=0)&&(vet[primeiroOrdenado]>escolhido)){
            vet[primeiroOrdenado + 1] = vet[primeiroOrdenado];
            primeiroOrdenado--;
        }
        vet[primeiroOrdenado+1] = escolhido;
    }
}
int main(){
    int vet[5]= {79,45,62,12,46};
    cout<<"desordenado: ";
    arrayPrint(vet,5);
    insertionSort(vet,5);
    cout<<"ordenado pelo insertion: ";
    arrayPrint(vet,5);

    ////
    int vet2[5]= {79,45,62,12,46};
    cout<<"desordenado: ";
    arrayPrint(vet2,5);
    selectionSort(vet2,5);
    cout<<"ordenado pelo selection: ";
    arrayPrint(vet2,5);

    ////
    int vet3[5]= {79,45,62,12,46};
    cout<<"desordenado: ";
    arrayPrint(vet3,5);
    bubbleSort(vet3,5);
    cout<<"ordenado pelo bubble: ";
    arrayPrint(vet3,5);
    return 0;
}
