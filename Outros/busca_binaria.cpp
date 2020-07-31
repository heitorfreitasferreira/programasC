//algoritmo de busca binária
#include <bits/stdc++.h>
#include <random>
using namespace std;
int bb(){
    random_device rd;//FUNÇÃO PARA ACHAR O NÚMERO CERTO ALEATÓRIO
    int tentativa, certo = rd() %100,min=0,max=99;
    while (1)
    {
        tentativa = (max+min)/2;
        if(tentativa == certo) return tentativa;
        else if(tentativa < certo) min = tentativa + 1;
        else if(tentativa >certo)max = tentativa - 1;
    }
}
int main(){
    cout<<"Numero certo: "<<bb(0,99)<<endl;
    /*cin>>certo;
    cout<<"Numero gerado: "<<certo<<endl;
    getchar();
    while (1)
    {
        tentativa = (max+min)/2;
        cout<<"Tentativa: "<<tentativa<<endl;
        if(tentativa == certo) {
            cout<<"Você o encontrou!"<<endl;
            break;
        }
        else if(tentativa < certo){
            min = tentativa + 1;
            cout<<"Chutou baixo"<<endl;
        }
        else if(tentativa >certo){
            max = tentativa - 1;
            cout<<"Chutou alto"<<endl;
        }
        getchar();
    }*/
    
}