//1 cadastrar produto
//2 consultar preço
//3 remover produto
//4 mostrar catalogo
//5 sair
#include <bits/stdc++.h>
using namespace std;
int main() {
	cout << fixed << setprecision(2);
	int opcao = 5;
	map<string,float> tabela;
	while(true){
	cout<<"Opcao: ";
	cin>>opcao;
		string name;
		float price;
		if(opcao==1){
			cout<<"Nome do produto: ";
			cin>>name;
			cout<<"Preco do produto: ";
			cin>>price;
			tabela.insert({name,price});
		}else if(opcao==2){
			cout<<"Nome do produto: ";
			cin>>name;
			if(tabela.find(name)==tabela.end()){
				cout<<"Produto nao existe"<<endl;
			} else {
				cout<<tabela[name]<<endl;
			}
		}else if(opcao==3){
			cout<<"Nome do produto: ";
			cin>>name;
			if(tabela.find(name)==tabela.end()){
				cout<<"Produto nao existe"<<endl;
			} else {
				tabela.erase(name);
			}
		}else if(opcao==4){
			for(auto it:tabela){
				cout<<it.first<<": R$"<<it.second<<endl;
			}
		}else if(opcao==5){
			break;
		} else{
			cout<<"Opcao invalida, tente novamente"<<endl;
		}
	}

}
