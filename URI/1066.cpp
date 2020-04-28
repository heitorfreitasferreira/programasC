#include <bits/stdc++.h>
using namespace std;
int main(){
    int vet[5],positivos=0, pares=0, negativos=0;
    for (int i = 0; i < 5; i++)
    {
        cin>>vet[i];
        if (vet[i]>0) positivos++;
        else if (vet[i]<0) negativos++; 
        if (vet[i]%2==0) pares++;
    }
    cout<<pares<<" valor(es) par(es)"<<endl<<(5-pares)<<" valor(es) impar(es)"<<endl<<positivos<<" valor(es) positivo(s)"<<endl<<negativos<<" valor(es) negativo(s)"<<endl;
    
}