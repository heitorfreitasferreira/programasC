#include<bits/stdc++.h>
using namespace std;
void prob_1(){
    int z=0,x;
    cout<<"Digite um num: ";
    cin>>x;
    for (size_t i = 0; i < x; i++) z+=i;
    cout<<z<<endl;
}
unsigned long long int fat(unsigned int n){
    if (n==0 || n==1) return 1;
    else return n*fat(n-1);
}
void prob_2(){
    int x;
    cin>>x;
    cout<<fat(x)<<endl;
}
unsigned long long int soma_cubo(int x){
    
}
void prob_3(){

}
int main(int argc, const char** argv) {
    int problema;
    do
    {
        cout<<"Digite o numero do problema: ";
        scanf("%d",&problema);
        switch (problema)
        {
        case 1:
            prob_1();
            break;
        case 2:
            prob_2();
            break;
        default:
            cout<<"Problema nao existe"<<endl;
            break;
        }
    } while (problema!=0);
    
    return 0;
}