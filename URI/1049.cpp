#include <bits/stdc++.h>
using namespace std;
int main(){
    string subfilo,classe,dieta;
    cin>>subfilo>>classe>>dieta;
    if (subfilo == "vertebrado" && classe == "ave" && dieta == "carnivoro") cout<<"aguia"<<endl;
    else if (subfilo == "vertebrado" && classe == "ave" && dieta == "onivoro") cout<<"pomba"<<endl;
    else if (subfilo == "vertebrado" && classe == "mamifero" && dieta == "onivoro") cout<<"homem"<<endl;
    else if (subfilo == "vertebrado" && classe == "mamifero" && dieta == "herbivoro") cout<<"vaca"<<endl;
    else if (subfilo == "invertebrado" && classe == "inseto" && dieta == "hematofago") cout<<"pulga"<<endl;
    else if (subfilo == "invertebrado" && classe == "inseto" && dieta == "herbivoro") cout<<"lagarta"<<endl;
    else if (subfilo == "invertebrado" && classe == "anelidio" && dieta == "hematofago") cout<<"sanguessuga"<<endl;
    else if (subfilo == "invertebrado" && classe == "anelidio" && dieta == "onivoro") cout<<"minhoca"<<endl;
}