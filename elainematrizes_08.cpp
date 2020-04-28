#include<bits/stdc++.h>
using namespace std;
int main(){
    int mat[3][3];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin>>mat[i][j];
        }
    }
    int soma[9];
    for (int i = 0; i < 10; i++) soma[i]=0;
    //linhas
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            soma[i]+= mat[i][j];
        }
    }
    //colunas
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            soma[i+3]+= mat[j][i];
        }
    }
    //diagonal principal
    for (int i = 0; i < 3; i++)
    {
        soma[7]+= mat[i][i];
    }
    //diagonal secundaria
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (j+i==2)
            {
               soma[8]+= mat[i][j]; 
            }
            
            
        }
    }
    bool verdade=true;
    for (int i = 1; i < 9; i++)
    {
        if (soma[i]!=soma[0]) verdade = false;
    }
    if (verdade==true) cout<<"Quadrado Magico"<<endl;
    else cout<<"Quadrado bosta"<<endl;
    
    return 0;
}