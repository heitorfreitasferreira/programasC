#include <bits/stdc++.h>
using namespace std;

/*void arrayPrint(int vet[],int tam){
    for(size_t i=0; i<tam;i++) {
            cout<<vet[i]<<",";
    }
    cout<<endl;
}*/

void arrayReverse(int arr[], int n)
{
	int aux[n];

	for (int i = 0; i < n; i++) {
		aux[n - 1 - i] = arr[i];
	}

	for (int i = 0; i < n; i++) {
		arr[i] = aux[i];
	}
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
void invertArray(int vetor[], int n){
    int aux[n];
    for(size_t i = 0;i<n;i++){
        aux[i]=vetor[i];
    }

}
int main(){
    int vezes, alunos;
    cin>>vezes;
    for(size_t i = 0; i<vezes; i++){
        cin>>alunos;
            int notas[alunos],aux[alunos];
            for(size_t k=0;k<alunos;k++){
                cin>>notas[k];
                aux[k]=notas[k];
            }
            bubbleSort(aux,alunos);
            arrayReverse(aux,alunos);
            //arrayPrint(notas,alunos);
            //arrayPrint(aux,alunos);
            int iguais=0;
            for(size_t t=0;t<alunos;t++){
                if(aux[t]==notas[t])
                    iguais++;
            }
            cout<<iguais<<endl;
    }
}
