#include <bits/stdc++.h>
using namespace std;
int main() {
	map<string,bool> personagemLegal;
	personagemLegal["mochila"] = true;
	personagemLegal["Dora"] = true;
	personagemLegal["Raposo"] = false;
	personagemLegal["Diego"] = false;
	personagemLegal["Mapa"] = true;
	personagemLegal["Mãe"] = true;
	personagemLegal["Fiesta Trio"] = true;

	for(auto it = personagemLegal.begin();it!=personagemLegal.end();it++){
		cout<<it->first<<" | "<<it->second<<endl;
	}
	//OU
	for(auto it: personagemLegal){

		cout<<it.first<<" | "<<it.second<<endl;//repara que aqui é um metodo
	}

}
