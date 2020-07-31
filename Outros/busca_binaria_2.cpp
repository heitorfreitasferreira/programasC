#include <bits/stdc++.h>
using namespace std;
int main(){
    int certo, max = 9999, min = 0, tentativa;
    cin>>certo;
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
    }
    
}