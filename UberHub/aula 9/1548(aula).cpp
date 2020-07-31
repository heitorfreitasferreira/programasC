#include <bits/stdc++.h>
using namespace std;

void arrayPrint(int vet[],int tam){
    for(size_t i=0; i<tam;i++) {
            cout<<vet[i]<<",";
    }
    cout<<endl;
}

void arrayReverse(int arr[], int n){
	int aux[n];

	for (int i = 0; i < n; i++) {
		aux[n - 1 - i] = arr[i];
	}

	for (int i = 0; i < n; i++) {
		arr[i] = aux[i];
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

int main(){
    int n;
    cin>>n;
    for(int i = 0; i<n ; i++){
        int alunos;
        cin>>alunos;
        int vetNotas[alunos],vetOrdenado[alunos];
        for(int j=0;j<alunos;j++){
            cin>>vetNotas[j];
            vetOrdenado[j]=vetNotas[j];
        }
        selectionSort(vetOrdenado,alunos);
        arrayReverse(vetOrdenado,alunos);
        int iguais=0;
        for(int k=0;k<alunos;k++){
            if(vetNotas[k]==vetOrdenado[k]){
                iguais++;
            }
        }
        cout<<iguais<<endl;
    }
    return 0;
}
