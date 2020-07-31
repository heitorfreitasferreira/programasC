/*
Bubble Sort
https://www.hackerearth.com/pt-br/practice/algorithms/sorting/bubble-sort/visualize/
Selection Sort
https://www.hackerearth.com/pt-br/practice/algorithms/sorting/selection-sort/visualize/
Insertion Sort
https://www.hackerearth.com/pt-br/practice/algorithms/sorting/insertion-sort/visualize/
*/


#include <bits/stdc++.h>
using namespace std;

int arrayLength(int vet[]){
    return sizeof(vet);
}
void arrayPrint(int vet[]){
    for(size_t i=0; i<arrayLength(vet);i++) {
            cout<<vet[i]<<",";
    }
    cout<<endl;
}

void bubbleSort (int vetor[], int n) {
    int k, j, aux;

    for (k = 1; k < n; k++) {

        for (j = 0; j < n - 1; j++) {

            if (vetor[j] > vetor[j + 1]) {
                aux          = vetor[j];
                vetor[j]     = vetor[j + 1];
                vetor[j + 1] = aux;
            }
            //arrayPrint(vetor);
        }
        //cout<<endl;
    }
}
void selectionSort(int vetor[], int tam) {
    for (int indice = 0; indice < tam; ++indice) {
        int indiceMenor = indice;
        for (int indiceSeguinte = indice+1; indiceSeguinte < tam; ++indiceSeguinte) {
            if (vetor[indiceSeguinte] < vetor[indiceMenor]) {
                indiceMenor = indiceSeguinte;
            }
        }
        int aux = vetor[indice];
        vetor[indice] = vetor[indiceMenor];
        vetor[indiceMenor] = aux;
    }
 }


void insertionSort(int vetor[], int tam) {
    for (int i = 1; i < tam; i++) {
        int escolhido = vetor[i];
        int j = i - 1;
        while ((j >= 0) && (vetor[j] > escolhido)) {
            vetor[j + 1] = vetor[j];
            j--;
        }
        vetor[j + 1] = escolhido;
    }
}

int main(){
    int vet_desordenado[8]= {7,4,1,8,3,5,2,6};

    arrayPrint(vet_desordenado);
    //selectionSort(vet_desordenado,arrayLength(vet_desordenado));
    //sort(vet_desordenado,vet_desordenado+arrayLength(vet_desordenado))
    //sort(vet_desordenado,vet_desordenado+arrayLength(vet_desordenado),greater<int>())
    arrayPrint(vet_desordenado);

}
